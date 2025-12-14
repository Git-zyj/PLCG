/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = -48;

        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_19 = (0 | (-48 + -19459));
            arr_8 [i_1] = (min(((((2047 | (arr_6 [i_0] [i_1] [i_1]))) + -13116)), (min((arr_7 [i_1]), (((arr_7 [i_0]) * 9935))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_20 = (arr_7 [i_2 + 1]);
            var_21 -= (arr_11 [i_0] [i_0] [i_0]);

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_22 = ((((-13292 ? var_17 : (arr_12 [i_0] [i_2]))) * ((0 >> (1366130589 - 1366130580)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_20 [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = (((((arr_15 [i_0] [i_2] [i_3] [i_4] [i_5]) % 1))) ? 13116 : var_0);
                            var_23 = (arr_18 [i_2]);
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                arr_23 [i_0] [i_6] &= var_10;
                var_24 = 4474;
                arr_24 [i_0] [i_2] [i_6] = (arr_16 [i_2 + 1] [i_2 + 2] [i_6 + 1]);
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    {
                        var_25 = (arr_17 [i_8] [i_7] [i_7] [i_7] [i_2] [i_0]);
                        arr_32 [i_8] = 9;
                    }
                }
            }
        }
    }
    var_26 = var_18;
    var_27 = var_2;
    #pragma endscop
}
