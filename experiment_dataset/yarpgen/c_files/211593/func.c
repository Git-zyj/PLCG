/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211593
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 += max((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (min((((/* implicit */unsigned long long int) var_13)), (var_8))))), (((/* implicit */unsigned long long int) var_11)));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_1 [i_1]))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) var_17);
                                arr_13 [i_0] [(_Bool)1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_4 + 3] [i_3 - 1] [i_1]), (arr_2 [i_4 + 3] [i_3 - 1] [i_2])))) ? (max((arr_2 [i_4 + 2] [i_3 - 1] [i_1 + 1]), (arr_2 [i_4 + 2] [i_3 - 1] [i_2]))) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_4 - 1] [i_3 - 1] [i_3]) : (arr_2 [i_4 + 3] [i_3 - 1] [i_1]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 2] [i_0]), (max((((/* implicit */long long int) var_2)), (var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_3)));
                        var_23 -= ((/* implicit */unsigned int) var_1);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_9 [i_5 - 2] [i_1] [i_1 - 2]))));
                    }
                    for (int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((max((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1] [i_1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned char) arr_5 [i_6] [i_6] [i_6] [i_6]))))))))));
                        var_26 |= ((/* implicit */long long int) max((max((max((arr_19 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_16 [7ULL])))), (((((/* implicit */_Bool) var_5)) ? (arr_14 [i_6 - 2] [i_6] [i_1]) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1 - 2] [i_2] [i_6])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [i_0])))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_2))))))))));
                        var_27 += ((/* implicit */long long int) var_9);
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        arr_24 [i_2] [i_1] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) var_13);
                        var_28 = ((/* implicit */unsigned long long int) var_13);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1 - 2])), (var_4))))) : (max((3558427177942356826ULL), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_7])))))), (((/* implicit */unsigned long long int) arr_18 [i_1 + 1] [i_7 + 1] [i_1 + 1] [i_2])))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) var_2);
                        var_31 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_21 [i_1 - 1] [i_1 - 1]));
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (arr_12 [i_8 - 1] [i_8 - 1] [i_1 + 1] [i_1 + 1] [12])))));
                    }
                }
                arr_27 [i_0] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_10))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [19LL] [i_1 - 1] [i_1] [i_1 - 1]))));
            }
        } 
    } 
    var_33 = var_10;
}
