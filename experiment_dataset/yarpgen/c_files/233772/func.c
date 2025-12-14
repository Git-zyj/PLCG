/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233772
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
    var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (var_4)))), (((((/* implicit */unsigned int) 1503234386)) - (var_12))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (min((var_13), (((/* implicit */unsigned char) var_11))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_2 + 2] [i_1 + 2] [5ULL] [i_1 + 2]) / (var_8)))) ? (min((((/* implicit */unsigned long long int) var_7)), (5837648392167624526ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                    var_17 = ((/* implicit */_Bool) min((((((arr_3 [i_2 + 2]) + (9223372036854775807LL))) << (((((arr_3 [i_2 + 1]) + (3119842198288295698LL))) - (36LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_0] [0])) ? (((/* implicit */int) arr_2 [i_0] [7])) : (((/* implicit */int) arr_4 [12LL] [i_0])))), (((/* implicit */int) var_6)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))) < (max((((/* implicit */long long int) ((23ULL) < (((/* implicit */unsigned long long int) 4227858432U))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (-4173769654800639665LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 67108850U)) ? (var_1) : (((/* implicit */unsigned int) arr_10 [i_3])))) | (max((4227858451U), (((/* implicit */unsigned int) arr_10 [i_3]))))));
        var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)49)) ? (var_3) : (((/* implicit */unsigned long long int) arr_11 [i_3]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_3 [i_4 - 3]))));
                var_21 = ((/* implicit */unsigned char) ((short) arr_2 [i_4 - 4] [i_4 + 1]));
            }
            for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                arr_22 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [5ULL] [i_7] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_7])))))) : (arr_19 [i_4] [i_4] [i_4 + 2])));
            }
            var_23 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_6)))));
        }
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            arr_25 [5ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_19 [i_4 - 1] [i_4 - 2] [i_4 - 2])) / (((((/* implicit */_Bool) arr_2 [i_4 - 4] [i_4 - 4])) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */unsigned long long int) ((int) 2458440185956811474ULL))) : (((((/* implicit */unsigned long long int) 2241129602U)) - (arr_14 [i_4]))))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 1) 
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */_Bool) var_14);
                            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_11 - 1] [i_11] [i_11 + 1]))));
                            arr_34 [i_9] [i_9] [i_9] = ((/* implicit */int) (~(4227858445U)));
                            arr_35 [i_4] [i_9] [i_9] = ((((/* implicit */int) arr_0 [i_4])) | (((/* implicit */int) arr_0 [i_9])));
                        }
                        for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                        {
                            arr_38 [i_4 + 2] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 2] [i_10] [i_12])) ? (arr_8 [i_4] [i_4 - 2] [i_12] [i_12]) : (arr_8 [i_4] [i_4 - 1] [i_8] [i_12])));
                            var_26 = ((/* implicit */unsigned int) -9223372036854775786LL);
                            arr_39 [i_4 - 3] [i_8] [i_9] [i_9] [i_10] [i_12 + 1] = ((/* implicit */int) 67108866U);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_43 [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 2]))) != (6700883305901052468ULL)));
                            var_27 = ((/* implicit */unsigned int) (unsigned char)0);
                        }
                        for (long long int i_14 = 2; i_14 < 8; i_14 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) arr_36 [(unsigned char)9] [i_9]);
                            var_29 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_8]))) : (arr_42 [i_9])))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10]))) - (arr_42 [i_8])))) ? (((arr_24 [i_4] [i_4] [i_9]) % (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)41))))))))));
                            arr_50 [(_Bool)1] [i_8] [i_15] |= ((/* implicit */int) 4294967295U);
                            var_31 = ((/* implicit */unsigned int) ((arr_9 [i_8] [i_9] [i_10] [i_15]) << (1)));
                            var_32 = ((/* implicit */_Bool) ((unsigned char) 1740941847));
                            var_33 &= ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
                        }
                        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)18))) && (((/* implicit */_Bool) ((unsigned char) -1)))));
                    }
                } 
            } 
            arr_51 [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_4])) & (arr_10 [i_4 - 2])));
        }
        for (long long int i_16 = 2; i_16 < 6; i_16 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4 - 4] [i_16 - 1])) ? (((arr_20 [6LL] [i_16 + 4] [i_16]) ? (arr_3 [i_4]) : (((/* implicit */long long int) 67108850U)))) : (-9223372036854775786LL)));
            arr_56 [i_16] = ((/* implicit */long long int) ((signed char) ((unsigned long long int) (short)-1)));
        }
        for (long long int i_17 = 2; i_17 < 6; i_17 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */int) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_17] [i_17])))));
            var_37 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((771121616U) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((unsigned long long int) var_0))));
            arr_61 [i_4] [i_17] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_4 + 2] [i_17 - 1]))));
        }
        var_38 |= ((/* implicit */unsigned long long int) ((((var_4) / (((/* implicit */int) arr_45 [i_4] [(_Bool)1] [i_4] [i_4] [i_4])))) % (((/* implicit */int) arr_12 [i_4 + 2]))));
    }
    /* LoopNest 2 */
    for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            {
                var_39 = ((/* implicit */int) 9223372036854775807LL);
                arr_66 [i_19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((arr_62 [i_19]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_18] [i_19])))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (~(var_4))))));
    var_41 = ((/* implicit */unsigned long long int) (unsigned char)255);
}
