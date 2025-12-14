/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52085
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_8)))), (min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_0 [6LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [11U]))))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_2 [i_1]))))) + (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) arr_7 [i_2] [i_1 - 1])), (arr_6 [i_2] [i_1] [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_1] [i_1 + 1] [i_1 + 1]), (arr_3 [i_1] [i_1] [i_1 + 1])))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((var_4), (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_4)))));
                    var_14 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)3] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (arr_10 [i_0] [(short)11] [(short)11] [i_3] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_6)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */int) (unsigned char)10))))))) : (min((((arr_10 [7LL] [7LL] [i_2] [i_1] [i_4] [i_2]) & (((/* implicit */long long int) 3540094518U)))), (((/* implicit */long long int) (-(arr_14 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_4] [i_1] [i_4]))))))));
                                arr_16 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)21266))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_4)))) : (((((/* implicit */_Bool) var_5)) ? (16957535482103411043ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2])))))), (((var_0) >> (((((/* implicit */int) ((unsigned char) 1977729628U))) - (85)))))));
                                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3272959122U)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_4] [i_4])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_2] [i_4])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (+(max((min((var_4), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((260096) / (((/* implicit */int) var_3)))))))));
}
