/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    var_16 = (max(var_16, var_14));
    var_17 = (18446744073709551605 == 2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = 8388607;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 *= ((18446744073709551612 < (arr_1 [i_1 + 1])));
                        var_20 = (min(var_20, (((1 ? (arr_7 [i_3] [i_1] [i_2] [i_1] [i_0]) : 32739)))));
                        arr_9 [i_1] [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_21 *= var_8;
                            var_22 *= 3;
                        }
                        arr_16 [i_0] [i_1] = 805306368;
                        arr_17 [i_0] [i_1] [i_2] [i_1] = (((-2147483647 - 1) ? var_1 : (arr_10 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2])));
                        arr_18 [i_1] [i_1] = 5;
                    }
                    var_23 = (1 - 2147483647);
                    arr_19 [i_0] [4] [i_2] |= var_1;
                }
            }
        }
        arr_20 [i_0] = arr_5 [i_0] [i_0] [i_0];

        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    {
                        var_24 -= (arr_12 [i_7] [i_8] [i_8] [i_8]);
                        arr_29 [i_0] [i_6] [i_7] [i_7] &= (arr_10 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]);
                        var_25 = ((-3 ? ((1 ? (-2147483647 - 1) : 5)) : (8 <= 127)));
                        arr_30 [i_0] [i_6] [i_6] [i_6] [i_7] |= 0;
                        arr_31 [i_8] [i_6] [i_6] [i_6] [i_0] = ((32741 - (arr_12 [i_6] [i_8 + 2] [i_8 - 1] [i_8 - 2])));
                    }
                }
            }
            var_26 = -32768;
            arr_32 [i_0] [i_0] [i_6] = (~1);
            var_27 &= ((((0 ? (arr_13 [i_0] [i_6]) : -1)) + ((32756 ? 0 : 2))));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_28 = (min(var_28, (!1152903912420802560)));
            var_29 ^= 1;
            arr_35 [i_9] [i_9] = ((((~(arr_28 [i_9] [i_0] [i_0] [i_0]))) - 32763));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_30 = (max(var_30, (arr_6 [i_0] [i_10])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_45 [i_12] = var_0;
                        arr_46 [i_0] [i_10] [i_10] [i_11] [i_12] = (((arr_44 [i_12] [i_12] [i_10] [i_11] [i_12] [i_12]) > (arr_44 [i_12] [i_10] [i_11] [i_11] [i_10] [i_12])));
                        var_31 = 65514;
                    }
                }
            }
            var_32 = ((0 ? 255 : 7));
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
        {
            var_33 -= 1;
            var_34 = 0;
        }
    }
    #pragma endscop
}
