/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [4])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] = (~var_3);
                        arr_14 [i_1] [i_0] = ((~(arr_0 [i_2 - 4])));
                        arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_2] = arr_10 [i_0] [i_1] [i_0] [i_3];
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_14 = var_8;
                        var_15 = (((max((arr_18 [3] [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_1]), var_4)) / var_11));
                        var_16 = ((!((min(((var_3 ? var_8 : 115)), (min((arr_5 [i_0] [i_0]), 0)))))));
                        var_17 = arr_1 [i_0];
                    }
                    var_18 = (max(var_18, (arr_2 [10])));
                    var_19 = (var_10 && var_8);
                }
            }
        }
        var_20 = 4391273583792547633;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_21 = (min(var_21, (((((((arr_19 [i_5]) ? (((max(93, (arr_22 [i_5]))))) : (var_5 / var_7)))) ? 61046 : (((min((arr_19 [i_5]), 3670016)))))))));
        var_22 = (((((arr_21 [i_5]) & (arr_21 [i_5]))) % -26));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = ((max(var_11, 463863596300747976)));
        var_23 = (min(var_23, (((~((-1777839288 + (arr_24 [i_6]))))))));
        var_24 = (max(var_24, (((!((max(var_8, var_3))))))));
    }

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_34 [i_7] [i_9] [i_7] [i_9] = (((-(arr_7 [i_7] [i_7] [i_7] [i_9]))));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_25 = (max(var_25, (((var_1 ? -1818962130 : (arr_28 [i_7]))))));
                        var_26 = (min(var_26, 115));
                    }
                }
            }
        }
        var_27 = (max(var_27, var_4));
        var_28 = (min(var_28, ((max((~var_1), 1)))));
    }
    #pragma endscop
}
