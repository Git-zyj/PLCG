/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (~18446744073709551612);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 ^= max(((!(arr_1 [i_0 + 1]))), (!86));
                                arr_12 [i_4] [i_1] [i_2] = (((((arr_7 [i_0 - 2]) ? (arr_7 [i_0 - 2]) : (arr_4 [i_0 - 2]))) % ((var_5 & ((var_11 ? var_0 : var_0))))));
                                var_14 -= -793054600;
                                var_15 = (min(((-(arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 1] [6] [i_0 - 2] [i_1] [i_2]))), ((min(var_3, var_3)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = var_6;
                            arr_17 [i_0] [i_0] [i_5] [i_6] = min(var_1, ((var_0 ? -0 : ((min(225, 12))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (!var_7);
    #pragma endscop
}
