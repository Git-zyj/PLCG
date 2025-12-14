/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (((((var_1 << (var_2 - 29429)))) ? (max((1 * 255), ((max(var_8, var_6))))) : ((var_4 >> (var_10 - 61350)))));
                                var_13 ^= var_5;
                                arr_13 [20] [20] [i_3] [i_3] = ((var_4 % ((var_9 ? ((max(var_8, var_4))) : ((var_7 << (var_2 - 29464)))))));
                                var_14 = (((((var_0 ? ((var_7 ? var_10 : var_3)) : (var_3 | var_8)))) * ((var_0 - (min(var_1, var_1))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = var_1;
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
