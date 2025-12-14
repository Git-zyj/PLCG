/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((max((1 && 1), 1))), (1 | 1)));
    var_11 = (min(var_11, (max(1, 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [1] [1] [i_0] [i_2] [i_0] = (((max(1, 1))));
                        arr_12 [1] [i_0] [i_0] = (min(((1 ? 1 : 1)), 1));
                        var_12 = var_9;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = ((1 ? 1 : (1 ^ 1)));
                            var_14 = (min(var_14, var_9));
                            arr_15 [1] [1] [i_2] [i_2] [1] [i_0] [i_4] = var_4;
                        }
                    }
                }
            }
        }
        var_15 = (max(var_15, (~1)));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_16 -= ((((min(1, 1)))));
                arr_21 [i_6] [0] = (min(((max(1, var_4))), -1));
                var_17 = (((max(1, 1)) ? var_5 : 1));
                arr_22 [1] |= (!1);
            }
        }
    }
    #pragma endscop
}
