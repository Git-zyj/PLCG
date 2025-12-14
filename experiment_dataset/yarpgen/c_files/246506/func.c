/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246506
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((int) var_0)) : (var_10))), (var_1)));
    var_16 = ((/* implicit */unsigned short) (~(var_1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))), (max((arr_4 [16]), (((/* implicit */unsigned long long int) 460364242)))))), (((/* implicit */unsigned long long int) ((unsigned int) (~(var_14)))))));
                    arr_9 [i_0] [i_0] [i_2] = var_2;
                    var_17 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1] [i_0] [i_2] [i_2])), (arr_1 [i_0]))))) - (((unsigned long long int) arr_7 [i_2] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((unsigned int) max((var_3), (((/* implicit */unsigned int) var_12)))));
                                arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) arr_13 [i_0]);
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned long long int) arr_10 [i_0] [(short)12] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) var_1)) ? (10569879811886169383ULL) : (10569879811886169385ULL))))));
                }
            } 
        } 
    } 
}
