/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_1 [i_1 - 1] [i_0 + 1]) ? (arr_1 [i_1 - 1] [i_0 + 2]) : var_10))) ? (arr_1 [i_1 - 1] [i_0 + 3]) : ((((!(arr_1 [i_1 - 1] [i_0 + 3])))))));
                            var_16 *= 2147483647;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_17 = ((-2147483647 - 1) ? 4294967295 : (((((var_12 ? var_11 : (arr_2 [i_4 - 2])))) ? var_9 : (1319151789788447973 ^ 2147483647))));
                            var_18 *= (arr_10 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_1 || 17127592283921103650);

    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 = (1 && 17127592283921103642);
        var_21 = ((arr_18 [i_6]) ? var_10 : var_9);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_22 = var_11;
        var_23 = (((arr_19 [i_7]) ? (arr_19 [i_7]) : (arr_19 [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_24 = (min(var_24, var_0));
                        var_25 = ((1319151789788447964 ? (arr_26 [i_8] [i_9] [i_10]) : (arr_25 [i_8] [i_9] [i_9])));
                        var_26 = (min(var_26, var_2));
                        var_27 = (max(var_27, (((((18958 ? var_1 : var_8)) / 101)))));
                        arr_31 [i_9] [i_10] = (arr_4 [i_8] [i_8] [i_11]);
                    }
                }
            }
        }
        arr_32 [3] [i_8] = ((-(arr_3 [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_37 [i_12] &= (~var_13);
        var_28 = ((!(arr_7 [i_12] [i_12] [i_12])));
        var_29 = (min(var_29, (((1744237221 << (250 - 236))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                {
                    var_30 = (((arr_11 [i_13] [i_14 + 1] [i_14 + 1] [i_14 + 1]) ? (arr_11 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]) : (arr_11 [i_14] [i_14 + 1] [i_14 + 1] [7])));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_47 [i_12] [i_14] [i_14] = ((arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1]) && (arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1]));
                                var_31 = ((-((52802 ? -2929492150680652170 : -18949))));
                            }
                        }
                    }
                    var_32 |= ((var_3 ? -83 : -var_11));
                }
            }
        }
    }
    #pragma endscop
}
