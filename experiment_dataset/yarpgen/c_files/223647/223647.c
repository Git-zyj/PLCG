/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 -= (arr_4 [i_3]);
                            var_16 = var_12;
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((~(~1)));
                        }
                    }
                }
                var_17 = (min(var_17, ((((((-(arr_1 [i_1 - 1])))) ? (min((arr_1 [i_1 + 2]), (arr_1 [i_1 + 1]))) : var_5)))));
                var_18 -= (arr_8 [i_0] [i_1 + 1] [i_0] [5]);
                var_19 = ((~(((arr_7 [i_0] [i_1 + 2] [10] [i_1 - 1] [i_1] [i_1]) ? 1215823482898135665 : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_20 = ((((((((var_0 ? var_8 : var_2))) ? var_3 : var_7))) ? var_5 : (max(var_4, -2124802147))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_14 [i_4] = 1;
                var_21 = (min(var_21, 1640412805));
            }
        }
    }
    var_22 = (~1215823482898135674);
    #pragma endscop
}
