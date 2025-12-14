/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        arr_5 [i_0] [i_0] = (~var_2);
        var_11 ^= var_1;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = ((~(!var_5)));
        var_12 = var_9;
        var_13 &= var_2;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_14 = -var_7;
                    arr_18 [i_2] [i_3] [i_4 + 1] = (!var_4);
                }
            }
        }
        var_15 = var_7;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_16 = var_3;
                            arr_29 [i_5] [8] [i_8] [i_8] [i_5] [i_7] = (--1);
                        }
                    }
                }
                var_17 ^= var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                arr_37 [i_9] [i_9] [i_10] = var_7;
                arr_38 [i_10] [i_10] = ((~(~var_9)));

                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    arr_42 [i_11] [i_10] [i_11] [i_11] = var_1;
                    var_18 = var_8;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_45 [8] [i_10] [i_12] = var_3;
                    arr_46 [0] = (!((!(!var_4))));
                }
            }
        }
    }
    #pragma endscop
}
