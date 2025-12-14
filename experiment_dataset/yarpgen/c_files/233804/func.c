/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233804
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 |= ((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_3 [i_0] [i_1])))) - (((unsigned int) var_7))));
                var_15 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))));
                arr_6 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) ((signed char) min((arr_3 [i_0] [i_1]), (((/* implicit */int) arr_1 [i_0] [i_1])))));
                arr_7 [i_0] [2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)66))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [12ULL] [i_3 - 1] [(unsigned short)0])) ? (var_0) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3 + 2])))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_4 [(unsigned short)3] [(unsigned char)8] [i_1]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 1073741792)) && (((/* implicit */_Bool) (signed char)-82))));
                        var_20 = ((/* implicit */long long int) ((int) arr_17 [i_0] [i_1] [i_2] [i_4]));
                        arr_18 [i_0] [i_2] [9] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) > (-1017678394228730990LL)));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-335611286180883736LL))))));
                        var_22 |= ((/* implicit */signed char) (unsigned short)18214);
                        arr_21 [i_0] [(signed char)8] [i_1] [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) (signed char)-126))));
                        var_23 = ((unsigned short) var_2);
                        var_24 = var_13;
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (max((((/* implicit */unsigned int) var_8)), (arr_16 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0]))) : (min((arr_11 [i_0] [i_0] [i_0] [(signed char)12] [i_0]), (((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_6] [i_7] [i_7]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_7] [i_1])) / (((/* implicit */int) arr_24 [i_0] [i_8]))))), (min((((/* implicit */unsigned long long int) (unsigned short)61545)), (arr_27 [i_0] [i_1] [i_7] [i_8])))))));
                                arr_30 [i_1] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 410642735U)) ? (410009288725157654ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((signed char) min((((((/* implicit */_Bool) -1045597364)) ? (arr_27 [(_Bool)1] [(unsigned char)11] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), (((((/* implicit */_Bool) (short)2133)) ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98)))))))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-5520794330831710830LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) var_1))), (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1])) ? (arr_17 [i_0] [i_1] [i_9] [i_0]) : (((/* implicit */unsigned int) arr_3 [i_1] [i_10]))))));
                                arr_36 [i_0] [i_0] [i_6] [i_9] [i_10] = ((/* implicit */int) arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((unsigned long long int) var_7);
}
