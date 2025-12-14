/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196088
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
    var_18 = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((2874615914U) < (536346624U)))))) << (((max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3))))), (2264009620U))) - (2264009601U)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) var_16);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_8);
                                arr_16 [i_4 + 1] = ((((/* implicit */_Bool) max(((~(arr_8 [i_1] [i_3] [i_4 + 3]))), (var_5)))) ? (((/* implicit */unsigned long long int) arr_6 [i_3])) : (var_1));
                                arr_17 [i_2] [i_4] = ((/* implicit */signed char) (~(max((arr_13 [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 3]), (((/* implicit */unsigned long long int) 679968744))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_1 [i_1])))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((((long long int) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */long long int) arr_9 [1] [i_0]))));
                }
            } 
        } 
    } 
    var_21 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (((unsigned long long int) var_17)))));
    var_22 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_9)))))) : ((~(var_10))))));
}
