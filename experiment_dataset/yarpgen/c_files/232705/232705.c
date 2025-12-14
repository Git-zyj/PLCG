/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 *= 6760;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 -= ((4926 | (arr_1 [i_0 - 1])));
        var_14 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : var_9));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (max(var_15, ((((arr_2 [i_0 + 3]) > (arr_2 [i_0 + 2]))))));
            var_16 = (!1);
            arr_4 [i_1] = 39414;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_13 [i_3 + 1] [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_1]);
                            arr_14 [i_0] [i_0] [i_2] = (~4926);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_17 = (min(var_17, ((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])))));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_18 = (((arr_10 [i_0 - 1]) ? var_2 : var_0));
                var_19 = (-var_4 - var_0);
            }
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_20 = (max(var_20, (26122 + 26137)));
                            var_21 = 536870912;
                            var_22 = (((arr_1 [i_7 + 1]) - (arr_1 [i_7 + 1])));
                        }
                    }
                }
                var_23 = (min(var_23, 536870912));
            }
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                var_24 = var_0;
                arr_32 [13] [i_5] [i_5] = (536870912 ? (3758096402 >= var_1) : 4294967295);
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                var_25 ^= ((13865 ? (arr_3 [i_0] [i_0] [i_0 + 1]) : (arr_21 [i_0] [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_12 = 4; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_40 [i_0 - 1] [5] [i_11] [i_0 - 1] = ((!(arr_36 [i_11 + 2] [i_11] [i_0 + 1] [i_0] [i_0] [i_0])));
                            arr_41 [15] [0] [0] [i_12] [i_13] [i_0] = (5771968960980841791 + -39);
                            arr_42 [i_0] [i_11] [i_13 - 1] = ((-73 <= (arr_11 [i_0 + 1] [i_0 + 1] [i_11 + 2] [i_11] [i_13 + 1])));
                            var_26 = ((!(arr_0 [i_12 - 3] [i_0 - 1])));
                            var_27 = (min(var_27, ((((arr_31 [i_0 + 2]) ? (((var_10 ? 4063890513 : 39413))) : (arr_9 [i_13 - 1] [i_12 - 3] [i_11 + 3] [i_0 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = var_4;
    #pragma endscop
}
