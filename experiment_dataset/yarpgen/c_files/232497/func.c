/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232497
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
    var_19 = ((/* implicit */_Bool) var_5);
    var_20 = ((/* implicit */_Bool) ((4207911443U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) 3123351208U)), (6226765230342318636ULL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) var_10);
                        arr_14 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = (_Bool)0;
                        arr_18 [i_0] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (7115005975277524001ULL))) : (((/* implicit */unsigned long long int) var_1)));
                        var_23 -= ((/* implicit */long long int) (_Bool)1);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_0] [(_Bool)1] &= (_Bool)1;
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((1123619296U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))))));
                        arr_22 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) var_3)) : (arr_2 [i_0] [i_5])))), (15886839704245828887ULL)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_26 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 3827490745U);
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) (~(0ULL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4866301533522279323LL)) ? (5570459581469627442LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7] [i_1] [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_29 [i_0] [i_0] [i_7] [i_8])))) ? (-5618196047109146127LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1942931320U)))))))));
                            var_27 |= ((/* implicit */_Bool) ((long long int) 0U));
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_7] [i_8] [i_8] = min((max((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) var_1)) : (10010601330833719944ULL))), (((/* implicit */unsigned long long int) min((arr_0 [i_2]), (((/* implicit */unsigned int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((2230649817U), (2747871786U)))));
                            arr_33 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_3 [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0]))) ^ (822829442U)))) : (var_1)))));
                        }
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (15886839704245828882ULL)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3264769280U)))) + (max((((/* implicit */long long int) (_Bool)1)), (arr_30 [i_7] [i_1] [i_2] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                    arr_34 [i_0] [i_1] [i_2] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 0LL)) ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0))))))), (arr_15 [i_1] [i_1]));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_1]);
                        arr_38 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_41 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_10 [i_9] [i_9] [i_1] [i_9]) ? (((/* implicit */int) arr_10 [i_10] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_1] [i_9]))));
                            var_29 += ((_Bool) (_Bool)0);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_17)))))));
                            arr_46 [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))));
                            arr_47 [i_11] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) -1649677021737163474LL);
                            arr_48 [i_11] [i_9] [i_1] [i_1] [i_0] = arr_19 [i_11] [i_9] [i_1] [i_0];
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_52 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((18ULL) > (((/* implicit */unsigned long long int) 9U))));
                            var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((arr_7 [i_9] [i_2] [i_1]) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)0))))));
                        }
                        var_33 = ((/* implicit */_Bool) min((var_33), (arr_3 [i_2])));
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            arr_57 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1] [i_13 + 1]))) == (3701453703U));
                            var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (((-(var_12))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_61 [i_14] [i_9] [i_1] [i_1] [i_0] = (((((_Bool)0) ? (arr_58 [i_2] [i_1] [i_1] [i_1] [i_9]) : (arr_29 [i_14] [i_2] [i_1] [i_0]))) & (0U));
                            arr_62 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_9] [i_14])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [i_2]);
                        var_37 += ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_67 [i_1] [i_16] [i_2] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                        arr_68 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                }
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) max(((+(arr_53 [i_17] [i_0]))), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    var_39 -= ((/* implicit */_Bool) var_1);
                }
            }
        } 
    } 
}
