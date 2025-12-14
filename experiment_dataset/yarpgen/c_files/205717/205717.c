/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = ((var_13 ? var_3 : var_4));
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min((max(var_14, var_10)), (max(var_14, var_10))));
                var_20 = ((((min(var_2, var_6))) && var_9));
                var_21 = var_13;
                arr_7 [i_0] [i_0] = ((min(var_6, var_14)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 = var_7;
                            var_23 = (var_2 | 929069117);
                            arr_19 [i_3] [5] [i_3] = var_3;
                        }
                    }
                }
                arr_20 [i_3] = var_13;
            }
        }
    }
    #pragma endscop
}
