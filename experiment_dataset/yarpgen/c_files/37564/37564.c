/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= max(var_10, var_4);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (-var_5 == -var_9);
                arr_6 [i_0] [i_0] [i_1] &= var_6;
                arr_7 [i_0] [i_1] = (max((max(-8162416219144725338, var_6)), (((var_6 ? var_7 : var_9)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                arr_15 [i_3] = var_10;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_18 = (((2429923023 >> (26863 - 26844))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_19 = (((((var_0 ? var_3 : var_16))) ? var_11 : (var_5 - var_8)));
                                var_20 = (max(var_20, -var_12));
                            }
                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = var_16;
                                arr_26 [i_2] [i_3] [i_4] = (41731 ? 37230 : 8162416219144725359);
                            }
                            arr_27 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] = var_14;
                            arr_28 [i_2] [i_3] [i_4] [i_4] [i_3] = ((-(var_5 ^ var_13)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
