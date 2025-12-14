/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = ((358411400 >> (358411400 - 358411395)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_12 <= (var_14 && var_9))) && (((var_19 ? var_1 : (var_5 | var_17))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_22 = (min(var_22, var_1));
            arr_6 [i_0] [16] |= var_7;

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_23 ^= ((var_8 ^ (((var_2 ? var_13 : var_11)))));
                            var_24 = (var_16 ^ (((var_10 >= var_1) ? var_4 : var_1)));
                        }
                    }
                }
                var_25 = -var_1;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_26 = -358411387;
                var_27 = (max(var_27, var_12));
            }
            arr_16 [i_0] [i_0] [i_1] = var_19;
            var_28 = (var_5 || var_3);
        }
    }
    var_29 -= -1678163798;
    #pragma endscop
}
