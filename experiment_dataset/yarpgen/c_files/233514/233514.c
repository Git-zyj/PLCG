/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = var_9;
                                arr_11 [i_0] [i_1] [5] [i_3] [i_4] [1] [4] = (min((arr_6 [i_0] [i_1] [i_1]), (arr_0 [0] [i_4 - 1])));
                                var_17 = (max(var_17, -2192607926));
                            }
                        }
                    }
                    var_18 = ((0 ? (arr_4 [i_0 - 2]) : (max(9223372036854775807, 0))));
                    arr_12 [i_0] [i_1] = (arr_5 [1] [i_0]);
                }
            }
        }
    }
    var_19 = (((((var_3 ? (17133337396204621074 < -4096) : 3152843063708335300))) ? 1 : var_5));
    var_20 += ((var_5 ? ((((~var_4) >= -var_1))) : (max((((-32767 - 1) - 6640)), 28519))));
    var_21 *= ((((((~var_3) + var_15))) ? (((var_6 ? var_13 : (var_6 * var_15)))) : (((((var_5 ? var_2 : var_4))) ? -1 : -3152843063708335315))));
    var_22 += 0;
    #pragma endscop
}
