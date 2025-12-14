/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = var_4;
                var_21 = (max(var_21, var_2));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_4] = ((var_14 ? var_15 : var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] = ((((((var_6 ? (var_16 * var_11) : var_5)) + 2147483647)) << (var_0 - 55802)));
                                arr_18 [i_2] [i_2] [i_2] [i_2] = (((var_10 ? var_8 : var_12)));
                                var_22 *= (var_14 >= var_0);
                            }
                        }
                    }
                    var_23 = (var_19 && var_13);
                }
            }
        }
    }
    #pragma endscop
}
