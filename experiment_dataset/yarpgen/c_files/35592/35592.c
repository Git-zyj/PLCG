/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 *= 0;
                var_13 = ((var_8 <= ((((((arr_3 [i_0]) ? (arr_2 [i_0]) : 4294967295))) ? var_5 : (arr_2 [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = (min(0, 12825104120168698624));
                                arr_14 [1] [i_0] [i_0] [i_3] = (min((((var_8 <= (!var_3)))), var_7));
                                var_14 &= var_2;
                                arr_15 [i_0] [1] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_7, ((((18446744073709551615 ? var_9 : var_5)) << (((min(var_8, var_1)) - 13631286140366410575))))));
    var_16 = var_8;
    var_17 = var_9;
    #pragma endscop
}
