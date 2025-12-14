/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = (((arr_2 [i_0 - 2] [i_1]) && var_12));

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_2] = 402571817;
                        arr_12 [i_2] [i_2] = ((!(arr_10 [i_0])));
                        arr_13 [i_2] [12] [12] [i_3] = (((arr_2 [i_0] [14]) ? -43 : var_8));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 &= ((402571814 ? 8934608034319174280 : (arr_14 [i_0 - 1] [i_0] [i_0 + 1])));
                        var_17 -= ((2974838163576312755 ? (arr_7 [i_1] [i_0 - 2] [6] [i_1]) : (arr_7 [i_1] [i_0 - 1] [i_0] [i_1])));
                        arr_18 [i_2] = (((((680514527 / (arr_16 [i_0] [i_0 - 3] [i_0] [8] [i_0 + 3] [i_0 - 2])))) % var_14));
                    }
                }
            }
        }
        var_18 = 239;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_22 [23] [i_5] = (!var_14);
        var_19 = ((!(arr_5 [22] [i_5] [i_5] [8])));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_25 [i_6] [i_6] = ((var_0 ? (arr_24 [i_6] [i_5 + 1]) : 59));
            var_20 = (max(var_20, 127));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_21 = (min(var_21, 1));
            var_22 = (arr_19 [1]);
            arr_29 [4] [i_7] [i_7] = ((-402571814 || (arr_10 [i_5 + 3])));
        }
    }
    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = arr_0 [i_8 - 1];
        var_23 = (402571814 && 20);
    }
    #pragma endscop
}
