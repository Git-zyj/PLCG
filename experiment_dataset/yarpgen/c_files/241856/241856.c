/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((var_11 ? var_9 : var_6)) < var_5)) ? (min(var_0, ((var_12 ? var_0 : var_9)))) : (1 <= 6)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = ((min(6, (min(1, 6)))) - (((-3 ? var_11 : (arr_2 [i_0 - 1] [19] [i_1 - 3])))));
                                arr_12 [i_1] [i_1] = var_3;
                                var_19 = 1;
                                var_20 = (arr_2 [i_0 + 1] [i_1] [i_4]);
                                var_21 &= var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = arr_8 [i_5 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_19 [i_1] [i_1 - 3] [i_2] [i_5] [i_5] = ((!((((arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_15 [i_0] [i_1] [i_2] [i_5]) : var_7)))));
                                var_23 = (((~18177) | (((arr_10 [i_0 + 1] [i_0 - 2] [i_1]) ? var_4 : (arr_15 [i_0] [i_0 - 2] [1] [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
