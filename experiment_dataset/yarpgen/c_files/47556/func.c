/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47556
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))) - (((((/* implicit */_Bool) (unsigned short)1374)) ? (((/* implicit */int) (unsigned short)1374)) : (((/* implicit */int) var_3)))))) <= (((/* implicit */int) (unsigned short)64159))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_4 - 1]))) ? (var_11) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (unsigned short)64159))))) ? (((/* implicit */unsigned int) arr_3 [i_4 + 1] [i_4 - 1] [i_4 - 3])) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_4)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    var_15 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            var_16 = ((((/* implicit */_Bool) 1188123632U)) ? (1188123638U) : (1188123612U));
                            arr_21 [i_0] [i_5] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [8] [i_6])) ? (arr_5 [i_0]) : (arr_5 [i_7 - 1]));
                            var_17 = ((long long int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) (signed char)-68))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_2 [i_0] [i_1]))) - (((/* implicit */int) var_12))));
                            arr_22 [i_5] [i_5] [i_6] [i_7 + 1] = ((/* implicit */signed char) arr_14 [i_5]);
                        }
                        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) 3187320047U)) ^ (arr_7 [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_25 [i_8] [i_9 - 2] [i_5 + 2] [i_8 - 1] [i_9 - 1] [i_9 - 2]))));
                            var_21 = ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))));
                            arr_28 [i_9] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) arr_24 [i_0] [i_1] [i_0] [i_8] [i_8] [i_8]);
                        }
                        for (unsigned int i_10 = 2; i_10 < 14; i_10 += 2) 
                        {
                            arr_31 [i_0] [i_5] [i_5] [i_5] [i_5] [i_10] [i_10] = ((/* implicit */long long int) ((var_6) | (arr_13 [i_0] [i_0] [i_0] [i_5])));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_8 - 2] [i_8 - 1])) ? (((/* implicit */long long int) arr_15 [i_5 + 1] [i_8 - 1] [i_8 - 2])) : (arr_26 [i_10] [i_10] [i_10] [i_10 - 2] [i_10] [i_5] [i_10])));
                            var_23 = ((((/* implicit */_Bool) var_1)) ? (arr_17 [i_1] [i_8] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_8 - 2]))));
                        }
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)8016)) : (arr_16 [i_5 + 2] [i_5] [i_5] [i_5] [10] [10])));
                        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6412903307878879777LL)) ? (((/* implicit */int) var_2)) : (arr_10 [i_0] [i_0] [i_1] [i_5] [i_8])))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_5] [i_5 + 2] [i_0]))) : (var_10))) : (((((/* implicit */_Bool) 2822873241707648772LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (853437321U))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (1056928778U) : (var_1))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_8] [i_1])) ? (arr_18 [i_11] [i_0] [i_5] [i_0]) : (arr_23 [i_11] [i_5] [i_8 - 1] [i_5] [i_5] [i_0])))));
                            arr_35 [i_5] [i_0] [i_1] [i_5] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((int) var_6)) : (((((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_5] [i_11])) / (-342981887)))));
                        }
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3LL)) ? (arr_5 [i_5 - 1]) : (((/* implicit */unsigned int) 1631030788))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5904121133983803708LL))) : (((/* implicit */long long int) var_11))));
                        /* LoopSeq 3 */
                        for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_13] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (3329816288765749533LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_27 [i_0] [i_0] [i_5] [i_12] [i_5])))) : (((arr_2 [i_5] [i_0]) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64159)))))));
                            var_31 ^= ((/* implicit */unsigned int) (((-(arr_0 [i_0]))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)36411)) >= (((/* implicit */int) arr_30 [i_0] [i_1] [i_5 - 1] [i_5 - 1] [i_0])))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)109)) || (((arr_3 [i_0] [i_0] [i_0]) < (((/* implicit */int) var_8)))))))));
                        }
                        for (unsigned short i_14 = 3; i_14 < 17; i_14 += 2) 
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (((((/* implicit */unsigned int) -1769621358)) & (var_9)))));
                            arr_43 [i_5] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) 2502881502U);
                        }
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_6) : (((/* implicit */int) arr_12 [i_5 + 3] [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1]))));
                            var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_5])) && (((/* implicit */_Bool) 2645472582U)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1188123620U))))) : (arr_39 [i_1] [i_5 - 1] [i_5] [i_12] [i_12] [i_12] [i_15])));
                        }
                    }
                    var_36 &= ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_5] [i_1] [i_0])) * (((/* implicit */int) arr_30 [i_0] [(signed char)6] [i_5] [i_5] [i_0]))));
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) 18446744073709551615ULL);
    var_38 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) ((unsigned short) 3441529975U))), (min((((/* implicit */int) var_12)), (var_6))))));
    var_39 = ((_Bool) max((853437318U), (((/* implicit */unsigned int) (_Bool)0))));
}
