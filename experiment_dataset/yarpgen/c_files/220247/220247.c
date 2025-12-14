/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((min(1, 217536441948884642)) ? var_9 : (2147483647 ^ 32474))));
                arr_4 [i_0] [i_0] [i_0] = (min((2147483647 - 105), (~13)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_13 ^= ((var_4 ? 11970279998524929273 : (((1 ? 1 : var_5)))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_14 = (max((min(var_4, 33067)), 32456));
                            arr_16 [i_2] [i_3] [i_2] [i_2] [i_4] [i_2] |= (max((~14659), (!-4355466197380160787)));
                            arr_17 [i_4] [i_4] = (~((-754373102 + (max(var_2, 0)))));
                        }
                    }
                }
                arr_18 [i_2] = var_8;

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_21 [i_6] [i_6] = (max(((12 ? -1 : 1)), var_7));
                    var_15 = (754373101 ^ 0);
                }
            }
        }
    }
    #pragma endscop
}
