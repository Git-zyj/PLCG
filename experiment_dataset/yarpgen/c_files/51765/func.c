/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51765
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
    var_10 = max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) ((((/* implicit */unsigned long long int) var_4)) < (var_2)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] = var_8;
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_3 + 1] [6LL]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_0] [4U] [i_4]))) : (var_3))))), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((((var_1) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) var_4)), (arr_7 [i_1] [i_1 - 1] [i_1 + 3] [i_1]))) - (3334106265LL))));
                }
            } 
        } 
    } 
}
