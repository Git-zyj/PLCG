/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205560
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
    var_12 = ((((((/* implicit */_Bool) var_0)) ? (var_0) : (min((var_8), (((/* implicit */long long int) var_5)))))) << (((max((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_3)))) - (2850884169LL))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (var_0)))) ? (((min((((/* implicit */long long int) var_4)), (var_7))) - (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [15U]) : (arr_0 [i_0] [i_0]))))) : ((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
        var_14 = (+(var_2));
        var_15 = ((/* implicit */long long int) max((var_15), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            var_16 = ((((/* implicit */_Bool) max((arr_5 [8U] [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0])))) ? (((/* implicit */long long int) (-(arr_5 [i_1] [i_1] [i_4])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (var_7) : (((/* implicit */long long int) arr_5 [i_1] [i_2] [i_1])))));
                            var_17 = var_9;
                            var_18 -= ((/* implicit */unsigned int) ((((max((var_4), (arr_9 [i_2]))) & (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2] [i_4])) ? (2012933963U) : (1653050086U))))) > (arr_5 [i_2] [i_3] [i_2])));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) ((var_4) + (arr_10 [i_0] [i_0] [10LL] [i_3 - 3] [i_0] [i_3 + 1])));
                            var_20 -= ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_5] [i_3] [i_1] [13U] [i_1] [i_0]) : (arr_10 [i_2] [i_3] [i_2] [1U] [i_1] [i_0]));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_6] [i_2] [i_2] [i_3] [i_6] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_4) & (var_5)))), (((6843674765306954550LL) << (((1078634268U) - (1078634268U)))))))) ? ((+(min((2738103424U), (2641917217U))))) : (((((/* implicit */_Bool) 2274753200252362662LL)) ? (2641917192U) : (4060965525U))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (arr_6 [15LL] [i_3 + 1] [i_1])));
                            arr_19 [i_6] [i_6] [i_2] [i_2] [i_6] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_3 - 3])) ? (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_6])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [18LL] [7LL] [i_3] [0LL])) : (arr_16 [9U] [i_1] [i_6] [9U] [i_6]))))), (((/* implicit */long long int) var_1))));
                            var_22 -= ((/* implicit */unsigned int) min((-3493567425110539263LL), (-4632660143198208939LL)));
                            arr_20 [i_1] [i_6] [16LL] [i_6] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 3896782890U)), (-3493567425110539261LL)));
                        }
                        var_23 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) arr_6 [i_0] [18U] [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_4))))))) ? (((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3] [i_2] [i_3 - 3] [i_3 + 1])) ? (arr_16 [i_3 - 1] [8LL] [i_2] [i_3 - 3] [i_3 + 1]) : (arr_16 [i_3 - 2] [i_3] [i_2] [i_3 - 2] [i_3 - 2]))) : (((/* implicit */long long int) var_5)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_7] [i_7 + 1] [i_7 - 2] [i_7 + 1]) : (((/* implicit */long long int) arr_11 [i_7] [i_7 - 1] [i_8] [i_8] [i_8] [i_8]))));
            var_25 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [5LL] [i_9] [i_7] [i_7 - 2] [i_7]))));
            var_27 = ((/* implicit */long long int) ((arr_6 [i_7 + 1] [i_7 - 2] [i_7 - 2]) | (arr_6 [i_7 - 1] [i_7 - 2] [i_7 - 1])));
            arr_32 [i_9] = arr_29 [i_7] [6LL] [6LL];
        }
        var_28 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) var_5)) > (arr_16 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7]))))));
    }
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 3; i_11 < 16; i_11 += 4) 
        {
            for (unsigned int i_12 = 4; i_12 < 13; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 16; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_4 [i_12 - 2] [6LL] [i_14 - 1] [i_14])))) ? (((((/* implicit */_Bool) arr_45 [i_10] [i_11] [i_11 - 3] [i_12 - 4] [i_14 - 1])) ? (((/* implicit */long long int) arr_6 [i_11 + 1] [i_12 - 1] [i_14 + 1])) : (arr_4 [i_12 + 3] [i_14 - 1] [i_14 + 1] [i_14]))) : ((~(var_2)))));
                                arr_47 [i_10] [i_10] [i_11 + 1] [i_12 + 1] [i_13] [i_11 + 1] = min(((-(((((/* implicit */_Bool) arr_38 [i_10] [i_12] [i_10])) ? (arr_42 [i_10] [i_10] [i_12] [i_10] [i_10] [i_14]) : (((/* implicit */long long int) var_3)))))), (var_10));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        for (long long int i_16 = 2; i_16 < 14; i_16 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_34 [i_16] [i_15 + 2])), (((((/* implicit */_Bool) (-(var_1)))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                                var_31 = max((((((arr_11 [i_10] [i_10] [i_12 + 1] [i_15] [i_16] [i_10]) & (arr_43 [i_10] [i_10] [i_10]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_11 + 1] [i_15])))))))), (((/* implicit */unsigned int) ((arr_46 [0U] [i_11] [i_12] [i_10] [i_16]) != (((/* implicit */long long int) arr_43 [7U] [i_10] [i_16 - 2]))))));
                                var_32 = (+(((((/* implicit */_Bool) arr_6 [i_11 - 1] [i_12 - 4] [i_15 + 3])) ? (((((/* implicit */_Bool) var_8)) ? (var_11) : (arr_53 [i_10] [i_11] [i_11] [i_12 - 2] [i_15 + 2] [i_15 - 1] [i_16]))) : (min((var_9), (((/* implicit */long long int) var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_3)), (arr_40 [i_10] [i_10]))), (max((var_7), (arr_7 [i_10] [i_10] [i_10] [i_10] [14LL])))))) ? (var_7) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_10]) : (arr_5 [i_10] [i_10] [i_10])))) | (arr_12 [i_10] [i_10] [i_10])))));
    }
    for (long long int i_17 = 2; i_17 < 15; i_17 += 2) 
    {
        var_34 = ((/* implicit */unsigned int) max((9001731987340457832LL), (min(((-(3493567425110539252LL))), (5504488678340615066LL)))));
        var_35 = max((min((arr_7 [i_17] [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 1]), (arr_4 [i_17] [i_17 - 1] [i_17 - 1] [i_17]))), (((((/* implicit */_Bool) min((arr_45 [i_17] [i_17 + 1] [i_17] [i_17] [i_17 - 2]), (((/* implicit */long long int) var_4))))) ? (arr_2 [i_17 - 1] [i_17 - 1]) : (((((/* implicit */_Bool) 2061819146U)) ? (((/* implicit */long long int) 398184400U)) : (9001731987340457832LL))))));
        arr_56 [i_17] = ((((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_14 [i_17])) + (arr_40 [i_17] [5U])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_6)))) ? (min((var_0), (((/* implicit */long long int) arr_5 [i_17] [i_17] [i_17 + 1])))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) * (arr_10 [5LL] [i_17] [i_17 + 1] [i_17] [12LL] [i_17 + 1])))));
    }
    var_36 = ((/* implicit */unsigned int) var_8);
}
