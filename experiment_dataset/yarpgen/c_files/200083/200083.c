/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (max(1, (min(-27786, 205))));
        arr_4 [i_0 - 1] [5] = (min(var_3, var_0));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 ^= (((2399899769 ? var_14 : 1)));

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_21 = 15;
            var_22 = -var_6;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_23 = var_18;
            var_24 = ((24690 ? 5660285052362207795 : var_13));
            arr_12 [i_1] [i_1] [i_3] = var_10;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] = ((((max(15774, -32756))) ? ((8364 ? 1 : (~176))) : ((-var_0 ? ((var_11 ? 1 : var_6)) : 1))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_22 [i_1] = -482;
                        var_25 = var_14;
                        var_26 = var_15;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (--93)));
            arr_25 [i_1] [1] = -713996107772659059;
            arr_26 [i_1] [i_7] [i_1] = (~-32767);
            var_28 += (((((var_17 ? 2097120 : var_7))) ? 12786459021347343831 : 27796));
        }
        arr_27 [i_1] [i_1] = var_6;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            {
                var_29 = (~5660285052362207787);
                var_30 = ((~((~(!var_18)))));
            }
        }
    }
    #pragma endscop
}
