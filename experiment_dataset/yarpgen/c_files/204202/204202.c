/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 17399;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = 126;
        var_20 = var_2;
        var_21 = var_13;
        var_22 -= var_17;

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_23 ^= ((arr_0 [i_0]) ? (arr_3 [i_1 - 3]) : var_6);
            var_24 = var_9;
        }
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_25 = (max(var_25, (arr_4 [i_2 + 1] [i_2])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_26 = (max(var_9, var_7));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_13 [4] [i_3] [i_4] [i_3] = ((((min((max(var_8, var_15)), (9790041753947805535 || var_0)))) ? (max((arr_3 [i_2 - 2]), (arr_3 [i_2 - 1]))) : var_4));
                var_27 += (~var_4);
                arr_14 [i_2] [i_3] [i_3] [i_4] = ((((arr_9 [i_2 - 1]) && (arr_9 [i_2 + 1]))) ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 + 1]));
            }
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                var_28 = max(var_4, (((((arr_18 [i_5]) != var_13)) ? 126 : ((-36 ? 14907548119645872872 : var_12)))));

                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_22 [i_2] [12] [12] [i_2 - 1] [i_2] [i_2] = 3;
                    arr_23 [i_2] [i_2] [i_5] [i_6] = (min(((~((min(1, 1))))), ((((min(var_17, var_6))) - var_12))));
                    arr_24 [14] [i_3] [i_3] [i_3] [i_3] = (min((arr_15 [i_2]), (max(var_0, (arr_17 [i_5 - 1])))));
                    arr_25 [2] [i_3] [i_3] [i_3] = min(var_17, -var_11);
                }
            }
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_29 ^= ((~((~(var_13 * var_9)))));
            arr_28 [i_7] = ((((10287654391988724054 ? -18 : var_14))));
        }
        arr_29 [i_2] = var_16;
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            {
                arr_35 [i_8] [i_9] = (((((-(arr_30 [i_8])))) && (((7093904015465024555 ? 0 : 3)))));
                var_30 = (((((((arr_5 [i_8]) ? -32 : var_3)))) ? var_12 : var_3));
            }
        }
    }
    #pragma endscop
}
