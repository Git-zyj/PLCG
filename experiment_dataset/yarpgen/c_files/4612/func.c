/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4612
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((arr_2 [i_2]) - (((/* implicit */long long int) ((((((/* implicit */_Bool) 7364184715967332764LL)) || (arr_9 [i_1] [i_1] [i_1] [i_1]))) ? (((2401912979U) - (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2279)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_4] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_4])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
                                var_21 = ((int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (arr_16 [i_0] [i_1] [i_0] [i_3] [i_4]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_5] [i_5] |= var_14;
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) * (((int) arr_0 [i_1] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_23 [i_6] [i_1] [i_1]);
                            arr_27 [i_7] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7364184715967332744LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) -7364184715967332773LL)) ? (((/* implicit */unsigned long long int) 691941977U)) : (16910497477204332752ULL)))));
                            arr_28 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61134)) ? (((/* implicit */int) (unsigned short)46099)) : (2128699469)));
                        }
                        for (long long int i_8 = 3; i_8 < 23; i_8 += 3) 
                        {
                            arr_31 [i_8 - 3] [i_2] [i_8] [i_2] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) 478212376))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 478212383)) ? (((arr_29 [i_1] [i_1] [i_2] [i_2]) * (((/* implicit */unsigned long long int) -478212377)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19437)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_1] [i_6] [i_0] [i_6] [i_6] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) arr_33 [i_6]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (arr_0 [i_0] [i_0])))));
                            var_26 = ((/* implicit */_Bool) arr_17 [i_0] [i_9] [i_2] [i_1] [i_9]);
                            arr_35 [i_1] [i_9] = ((/* implicit */unsigned int) var_9);
                            var_27 = ((/* implicit */long long int) ((arr_0 [i_0] [i_1]) - (arr_0 [i_1] [i_2])));
                            arr_36 [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_9]));
                        }
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            arr_43 [i_0] [i_0] [i_1] [i_0] [i_2] [i_11] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_11 + 2] [i_11 + 3]), (arr_0 [i_11 + 3] [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))) : (max((var_8), (arr_0 [i_11 + 3] [i_11 + 2])))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min(((~(8595049026931367046ULL))), (((/* implicit */unsigned long long int) min((max((arr_19 [i_0] [i_2] [i_2] [i_2]), (arr_2 [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0] [i_2] [i_11] [i_11])), (2259420924U))))))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_11] [i_10] [i_2] [i_0])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned int) arr_40 [i_11 - 1] [i_11] [i_11] [i_11] [i_11 + 3]))))) : (((1821205379693653138LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15493)))))));
                            arr_44 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(min(((((_Bool)0) ? (((/* implicit */long long int) 3516785481U)) : (9223372036854775800LL))), (arr_14 [i_11 + 4] [i_10] [i_1] [i_1] [i_0])))));
                            var_31 |= min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])), (arr_38 [i_1] [i_10] [i_10] [i_10])))) ? (((/* implicit */long long int) var_18)) : (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19431))) : (-2153855106461132064LL))))), (((/* implicit */long long int) (~(-478212377)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_32 |= ((/* implicit */unsigned char) (~(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_33 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)19436)) || (((/* implicit */_Bool) (unsigned short)46084)))));
                        }
                        for (unsigned int i_13 = 4; i_13 < 23; i_13 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (unsigned short)19436);
                            var_35 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_13 - 3] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_7 [i_13 - 4] [i_1] [i_13 - 4] [i_10]))))) - (((((/* implicit */_Bool) (~(arr_16 [i_13] [i_10] [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_13 - 4] [i_10] [i_0]))) : (((((/* implicit */_Bool) arr_48 [i_0])) ? (3431688118U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13050)))))))));
                        }
                        var_36 = ((/* implicit */_Bool) ((3ULL) * (((/* implicit */unsigned long long int) var_18))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 15044943503700347585ULL)) ? (1932158063U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))))) * (((/* implicit */unsigned int) max((arr_41 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0]), (((/* implicit */int) arr_23 [i_1] [i_2] [i_14])))))));
                        var_38 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)24250)), (arr_52 [i_0] [i_0] [i_2] [i_2])))) ? (min((arr_52 [i_1] [i_1] [i_0] [i_0]), (arr_52 [i_2] [i_2] [i_2] [i_2]))) : (min((arr_52 [i_2] [i_0] [i_1] [i_0]), (arr_52 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_40 = ((max((((/* implicit */long long int) (unsigned short)24262)), (9223372036854775800LL))) / (((/* implicit */long long int) (((~(var_10))) * (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
    } 
    var_41 = min((((/* implicit */unsigned long long int) var_16)), (var_2));
}
