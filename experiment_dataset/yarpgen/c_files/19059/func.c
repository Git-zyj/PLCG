/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19059
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */_Bool) ((976119435) << (((((((/* implicit */int) var_2)) + (56))) - (15)))))) ? (((((/* implicit */_Bool) 2521492648952649135ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 499873258556372745LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(signed char)0] [(unsigned short)10] [i_2])) | (arr_3 [i_0] [i_1] [i_1]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_12 = arr_2 [i_0] [12];
                        var_13 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((arr_4 [i_0]), (var_3))))))));
                        var_14 = ((/* implicit */int) min((var_5), (arr_0 [i_0])));
                        arr_13 [(signed char)0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((arr_9 [(signed char)5] [i_1] [i_1] [(signed char)1] [i_1] [i_1]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 821438387)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (4563784647056155159ULL)))) ? (arr_0 [(signed char)0]) : (((((/* implicit */_Bool) (signed char)-2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))))));
                    }
                    var_15 -= ((/* implicit */signed char) arr_12 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0]);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-59)), (6806892130693930989ULL)))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-42)))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [(signed char)5] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_0]))))));
                    var_17 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_9 [i_0] [i_0] [(signed char)16] [i_0] [3ULL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-105))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1]))))) : ((-(arr_10 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_18 = ((/* implicit */long long int) arr_14 [i_4] [(signed char)7]);
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1])) ? (arr_14 [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_7 + 2] [i_6 + 2])) ? (((/* implicit */int) arr_21 [i_5 - 1] [i_6 + 1] [i_7 - 3])) : ((~(((/* implicit */int) (signed char)59))))));
                        var_21 = ((/* implicit */signed char) (-(arr_22 [i_5 + 1] [(signed char)14] [i_6 + 2] [i_7 + 2])));
                    }
                } 
            } 
            arr_25 [i_4] [i_5] = ((/* implicit */signed char) arr_24 [i_4] [i_4] [i_4]);
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            arr_28 [i_4] [i_4] [i_4] |= (-(((/* implicit */int) (signed char)127)));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_8])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
            /* LoopSeq 3 */
            for (int i_9 = 3; i_9 < 22; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_20 [i_9] [i_8]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        arr_37 [i_4] [i_8] [17] = ((arr_24 [i_9 - 3] [i_9] [i_9 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10] [i_9 - 3] [13ULL]))));
                        arr_38 [i_8] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)55)) ? (arr_34 [i_4] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) - (arr_24 [i_9 - 2] [i_8] [(signed char)16])));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9 - 2] [21LL] [i_9 - 1])) ? ((-(((/* implicit */int) arr_35 [i_11] [i_10] [(unsigned short)16])))) : (((/* implicit */int) arr_32 [i_9 - 2] [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_8]))));
                    }
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        arr_41 [i_4] [i_8] [i_8] [i_4] [i_12] = ((/* implicit */int) var_7);
                        arr_42 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    }
                    for (signed char i_13 = 2; i_13 < 19; i_13 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_40 [i_4] [i_4] [i_4] [i_4] [i_4]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))))));
                        arr_46 [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) <= (var_10)))) <= (((/* implicit */int) arr_19 [i_4] [i_8]))));
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_49 [i_4] [i_8] [(signed char)14] [i_10] [i_14] = ((/* implicit */signed char) ((arr_40 [i_14] [i_10] [i_9] [13ULL] [i_4]) * (15539295326268274602ULL)));
                        var_26 += ((/* implicit */signed char) ((16245608174625448493ULL) * (((/* implicit */unsigned long long int) 2323199650456048430LL))));
                        arr_50 [(unsigned short)21] [i_4] [i_8] [i_8] [i_10] [i_14] = ((/* implicit */unsigned short) (((~((-9223372036854775807LL - 1LL)))) >> (((arr_15 [i_9 - 1]) - (17650801212435981502ULL)))));
                        var_27 += ((/* implicit */signed char) (~(arr_22 [i_9 - 3] [(unsigned short)1] [i_9] [i_10])));
                    }
                    var_28 |= ((/* implicit */unsigned short) (~(arr_24 [i_8] [i_9 - 3] [i_9])));
                }
                var_29 += ((/* implicit */unsigned short) var_10);
                var_30 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
            }
            for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 4) /* same iter space */
            {
                var_31 = ((((/* implicit */_Bool) 1949787320752103271ULL)) ? (((/* implicit */long long int) 1176361146)) : (9223372036854775805LL));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_15 + 2])) ? (arr_16 [i_15 + 2]) : (arr_16 [i_15 + 2])));
            }
            for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_19 [i_8] [i_16]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 1; i_18 < 22; i_18 += 2) 
                    {
                        var_34 = ((((/* implicit */_Bool) var_7)) ? (16453290079655745533ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-65))))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)22))));
                        arr_61 [i_4] [i_4] [i_8] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_51 [i_8])) == (0ULL))) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) arr_20 [(signed char)13] [i_18 + 1]))));
                        arr_62 [i_4] [i_4] [i_8] [i_4] [(unsigned short)7] [i_4] = ((signed char) (signed char)12);
                    }
                    var_36 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)65535)))));
                    var_37 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_47 [i_16] [i_16])) ? (arr_33 [i_4] [7ULL] [i_16] [i_17]) : (((/* implicit */unsigned long long int) var_10)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)42853)) != (((/* implicit */int) (unsigned short)0))))))));
                }
                arr_63 [i_8] [12ULL] [12ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_16 + 2] [i_16 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_16 + 3] [i_16 + 1]))) : (var_5)));
            }
        }
        arr_64 [i_4] [i_4] &= (signed char)113;
    }
}
