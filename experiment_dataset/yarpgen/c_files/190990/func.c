/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190990
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
    var_11 = ((_Bool) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1837628284U)))));
        var_13 = ((((arr_2 [i_0 + 1]) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? ((((_Bool)0) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11204))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_5))))))))));
        arr_3 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))))) + (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (arr_0 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (unsigned short)54331)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_1] [20] [i_4] [i_5])))) ? (arr_14 [i_3 - 2] [i_2]) : (((/* implicit */unsigned int) var_1)))))));
                                var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_3 - 2] [i_3] [(short)17] [i_2] [(signed char)10] [i_1])) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_5))))));
                                arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_18 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_5] [i_5]), (arr_18 [i_3 - 2] [(unsigned short)11] [i_3] [i_3 - 1] [19U] [i_5])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_18 [i_3 - 1] [i_3] [(_Bool)0] [i_3 - 2] [i_3 + 1] [i_3 - 1]) : (arr_18 [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_4] [12U]))) : (((((/* implicit */_Bool) var_3)) ? (arr_18 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 2] [i_5] [12LL]) : (arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1])))));
                                arr_20 [i_1] [i_1] [1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_3 + 1] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) arr_4 [i_6 + 1]);
                        arr_23 [i_3] [i_2] [i_3 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6])) ? (((((/* implicit */_Bool) var_8)) ? (arr_16 [i_6 + 2] [14U] [i_6 - 1] [i_6] [i_6]) : (arr_16 [i_6 + 3] [i_6 + 1] [i_6 - 1] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_26 [i_1] [i_7] [5U] [i_7] = ((((/* implicit */_Bool) arr_7 [i_7] [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_17 [i_2] [i_7])))))) : (((((arr_14 [i_3 + 1] [(signed char)8]) <= (arr_14 [i_2] [i_1]))) ? (((/* implicit */long long int) var_9)) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) : (arr_18 [i_7] [i_7] [15U] [i_7] [i_7 + 1] [i_7]))))));
                        arr_27 [i_1] [i_3] [i_7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_1] [i_3] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [i_2] [i_3 - 2]))) : (var_2)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6802))))) ? (var_3) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))) ? (((arr_16 [(signed char)11] [i_2] [i_7 + 1] [i_3 + 1] [i_3]) / (arr_16 [i_3 - 2] [i_7] [i_7 + 1] [i_3 - 1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [1U] [(unsigned short)6] [1U] [i_7])) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [(unsigned char)17] [i_1] [i_1] [i_1])) : (var_3)))) ? (var_1) : (((((/* implicit */_Bool) 3558363744U)) ? (((/* implicit */int) (unsigned short)6802)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_28 [i_7] [i_2] = ((/* implicit */long long int) max((((arr_22 [i_7 + 1] [i_7 + 1] [i_7]) ? (((/* implicit */int) arr_22 [i_7 + 1] [(unsigned short)2] [i_7])) : (((/* implicit */int) arr_22 [i_7 + 1] [i_7] [i_7])))), ((-(((/* implicit */int) arr_22 [i_7 + 1] [i_7] [7LL]))))));
                        arr_29 [i_7] [(signed char)13] [i_3] [2] = ((/* implicit */unsigned int) var_10);
                    }
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        arr_33 [i_1] [i_8 + 1] [i_3 - 2] [i_8] [i_3] = ((/* implicit */unsigned int) var_0);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 2])) ? (arr_7 [i_3 - 1] [i_3 + 1]) : (((/* implicit */int) arr_25 [i_3 + 1] [i_8] [i_8 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_3 + 1] [i_3 + 1]) : (arr_7 [i_3 + 1] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 1])) ? (var_0) : (var_0))))))));
                        arr_34 [i_8] [i_3 - 1] [i_2] [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (arr_14 [i_8 + 1] [i_2]) : (arr_14 [i_1] [i_3 - 2]))));
                    }
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [5U] [i_1] [i_1]))) : (var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
}
