/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_2;
        var_14 = -var_1;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_15 = (-9031718448383524938 / (arr_0 [i_0] [i_1 + 2]));
                        var_16 = (+((-15519 ? (arr_10 [i_0] [i_0] [i_0]) : (arr_2 [i_0]))));
                    }
                }
            }
        }
        var_17 = ((var_12 ? (arr_4 [i_0] [i_0]) : ((var_8 ? var_8 : (arr_8 [i_0] [i_0] [i_0])))));
        arr_13 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_18 = min(1388335789384299676, (((arr_7 [i_4] [2]) + (min(1388335789384299676, (arr_4 [i_4] [i_4]))))));
        var_19 = (arr_1 [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (((arr_1 [i_5] [i_5]) ? (max((arr_8 [i_5] [i_5] [i_5]), (min(-1388335789384299676, 1311082397998575237)))) : (((arr_8 [i_5] [i_5] [i_5]) ? ((8363333546029519612 ? -15279 : 2966914276809930124)) : -2966914276809930124))));
        arr_20 [i_5] = ((var_6 - ((((max(var_10, var_7))) ? (((arr_0 [i_5] [i_5]) ? (arr_4 [i_5] [i_5]) : -6706763195916517332)) : -13975))));
    }
    var_20 = (((((max(var_7, 8191)))) / var_11));
    #pragma endscop
}
