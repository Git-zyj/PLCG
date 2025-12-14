/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_1] [1] = ((-var_3 - ((max(var_8, var_9)))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_3] [1] [i_3] = (max((var_16 - var_11), (var_16 - var_7)));
                        var_18 -= (min(1, 56618));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0 + 3] [i_0 + 3] [i_3] [i_0 + 3] [i_0 + 3] = var_1;
                            var_19 = var_13;
                            var_20 = (var_16 ^ var_16);
                            arr_16 [i_0 - 1] [i_1] [i_3] [3] [3] = (~var_15);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_21 = (~(~var_10));
                            var_22 = (min(var_10, (var_9 & var_5)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_23 = var_5;
                            var_24 ^= var_2;
                            arr_24 [i_0] [i_3] [i_2 + 1] [i_3] [i_6] = var_10;
                            var_25 ^= var_7;
                            var_26 = (var_15 * var_7);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [14] [i_7] [i_7] = (min((max(var_8, var_5)), (var_4 && var_16)));
                            var_27 = (min(((min(var_11, var_2))), (max((var_9 != var_12), var_12))));
                        }
                    }
                }
            }
        }
        var_28 = var_11;
    }
    #pragma endscop
}
