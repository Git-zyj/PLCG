/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53039
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])));
            var_13 -= ((/* implicit */short) ((int) (signed char)(-127 - 1)));
            var_14 = ((/* implicit */long long int) arr_1 [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned int) var_0);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        {
                            var_15 &= ((/* implicit */int) ((arr_8 [i_4] [i_1] [i_4 - 1] [i_1] [i_4]) >> (((((((/* implicit */_Bool) -853091005)) ? (arr_9 [i_3] [i_0] [i_0]) : (((/* implicit */long long int) 2147481600)))) - (3876071400393307149LL)))));
                            var_16 ^= ((((/* implicit */int) ((signed char) var_4))) == (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */int) (short)-26326)) : (((/* implicit */int) var_5)))));
                            var_17 *= ((/* implicit */unsigned char) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [(unsigned short)4] [10U] [i_4] [i_4 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */_Bool) ((arr_9 [i_5] [i_2] [i_1]) << (((((long long int) (unsigned char)6)) - (6LL)))));
                            var_19 = var_10;
                        }
                    } 
                } 
            }
        }
        for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(arr_9 [13U] [i_0] [i_7 + 1]))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_22 &= ((/* implicit */signed char) var_4);
                var_23 ^= ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) != (((((/* implicit */long long int) arr_3 [i_0] [(short)4])) / (var_6))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_5))));
                var_25 += ((/* implicit */_Bool) (signed char)-116);
                arr_26 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) var_11);
            }
        }
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                arr_31 [i_10] |= (signed char)0;
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)26314)))))));
                arr_32 [i_0] [i_0] = ((/* implicit */signed char) arr_19 [i_0] [i_0] [15]);
            }
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
            {
                var_27 = (-(var_7));
                arr_35 [i_0] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_11])) ? (arr_24 [i_11] [i_0] [i_0] [i_0]) : (arr_24 [i_11] [i_0] [i_0] [i_0])));
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_9] [i_12] [i_0] = ((/* implicit */signed char) ((var_11) & (arr_36 [i_0] [i_9] [(short)5])));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9]))) & (arr_8 [i_0] [i_9] [i_9] [i_9] [i_12])))) ? (((((/* implicit */_Bool) (short)-26325)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12U]))))))));
            }
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) var_8)))))))));
            var_30 &= ((/* implicit */unsigned int) 1422655305658065100ULL);
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (-(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_32 -= ((/* implicit */_Bool) ((signed char) arr_33 [14] [i_9]));
        }
        var_33 *= ((/* implicit */signed char) (short)-28784);
        arr_39 [i_0] = ((/* implicit */int) (-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_40 [i_0] [i_0] = ((/* implicit */int) arr_11 [(short)12] [i_0] [i_0] [i_0]);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_45 [i_13] = ((/* implicit */unsigned int) var_0);
            var_34 = ((/* implicit */unsigned short) (-((-(((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)134))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned int) (unsigned char)41)))));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)99)), (14253031234297568803ULL))))));
            var_37 ^= ((/* implicit */signed char) var_1);
            var_38 ^= ((/* implicit */_Bool) (short)28707);
            arr_48 [(short)0] [i_15] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_47 [i_13] [i_13] [i_15])))) && ((!(((/* implicit */_Bool) (unsigned short)5)))))))) % (((((arr_43 [i_13] [i_15]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-42)) + (55))) - (12)))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            var_39 &= ((/* implicit */short) min((((/* implicit */long long int) 31U)), (((min((var_7), (((/* implicit */long long int) arr_50 [i_16])))) / (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_13])))))));
            var_40 = ((/* implicit */int) max((((/* implicit */long long int) (-(((((/* implicit */int) var_0)) << (((arr_47 [i_13] [i_13] [i_13]) - (13074392512464603305ULL)))))))), (5657373242953592406LL)));
            var_41 &= ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_50 [i_13])) < (((/* implicit */int) arr_46 [i_13] [i_13] [i_13])))))) ? (var_10) : (var_10)));
            var_42 += ((/* implicit */unsigned long long int) arr_46 [i_13] [i_13] [i_16]);
            var_43 = ((/* implicit */short) (~(((((((/* implicit */int) arr_49 [i_13] [i_13] [i_16])) + (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (16777215ULL))))))));
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            var_44 &= ((/* implicit */unsigned int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41555)))));
            var_45 += ((/* implicit */int) ((unsigned long long int) var_7));
            arr_55 [(_Bool)1] &= arr_47 [14ULL] [i_13] [i_17];
        }
        arr_56 [i_13] = ((/* implicit */int) var_8);
    }
    var_46 = ((/* implicit */unsigned int) min((var_46), (((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)9))))) * (var_10)))));
    var_47 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((17091645006390306920ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) | (((/* implicit */int) var_9))));
    var_48 |= ((/* implicit */int) ((unsigned char) var_8));
    var_49 |= ((/* implicit */short) var_5);
}
