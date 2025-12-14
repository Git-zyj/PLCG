/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((min(-22841, -3997503931182803118)))) - (((arr_0 [i_2]) - var_1))));
                    arr_8 [4] [i_1] [i_1] [i_1] = 1830853646;
                    var_13 = (-32753 ^ 29);
                }
            }
        }
        var_14 = var_10;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 = var_7;
            var_16 = -1830853639;
            arr_11 [19] [i_0] = (32741 && -9223372036854775794);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_21 [i_0] [14] [i_5] [i_0] = (arr_3 [i_4]);
                    arr_22 [i_0] [i_4] [i_5] [i_6] |= ((((arr_5 [i_0] [i_0]) - (arr_5 [i_0] [i_4]))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_17 = (var_10 / var_8);
                        arr_25 [0] [0] [i_4] [i_5] [i_6] [i_7] [i_7] = (max((32758 ^ var_9), (min((arr_2 [i_4] [i_7]), -387977732))));
                    }
                    var_18 = (arr_2 [i_0] [i_0]);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_19 = (min(var_19, (!var_11)));
                    var_20 += (((((arr_17 [i_0] [i_5] [8]) * 114)) & (((arr_24 [4] [i_0] [4] [i_5] [i_8]) >> (((arr_7 [i_5] [i_5] [i_5] [i_5]) - 6407))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] = -1830853640;
                            var_21 *= var_0;
                            var_22 = arr_18 [i_5];
                            var_23 ^= var_3;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] [7] [i_12] [i_5] [i_5] [12] = ((-1830853639 * (min(-1, (arr_5 [i_0] [i_0])))));
                            var_24 += (arr_31 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_42 [i_12] [i_11] [i_12] [i_0] [i_12] [i_0] [i_0] = (~var_2);
                        }
                    }
                }
                arr_43 [i_0] [i_4] [i_5] = (max(-var_3, ((min((var_8 && var_9), (arr_35 [i_4] [i_5] [i_4] [i_0]))))));
            }
            arr_44 [i_0] = (arr_26 [i_0] [i_0] [i_0] [i_0]);
            arr_45 [i_0] = -23105;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        var_25 = (max(var_25, -1));
                        var_26 = (max(var_26, (var_10 / -1830853625)));
                        var_27 = 536870911;
                    }
                }
            }
            var_28 = (arr_37 [i_13] [i_13] [i_13] [11] [i_0] [i_0] [i_0]);
        }
        var_29 = (max(var_29, var_6));
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
    {
        var_30 = arr_40 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16];
        var_31 = (min(var_31, (~var_9)));
    }
    var_32 = var_0;
    var_33 = ((var_1 ^ ((var_9 & (var_1 & var_7)))));
    var_34 -= var_1;
    #pragma endscop
}
