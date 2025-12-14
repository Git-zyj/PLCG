/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_2 ? -0 : -1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [13] [i_0] = var_4;
            var_16 = (min(var_16, (arr_1 [i_0])));
            var_17 = ((((((min(var_2, 0)) - (var_1 < var_4)))) ? (min(9223372036854775807, -27)) : ((((230 | var_9) | ((~(arr_3 [i_0] [i_0] [i_0]))))))));
            var_18 = ((((((arr_4 [i_0] [1] [6]) ? var_14 : (arr_3 [i_0] [i_1] [i_0])))) ? var_9 : 26032));
            var_19 ^= var_8;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = ((1 ? -30 : 562949952897024));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_21 = (arr_16 [i_0] [i_0] [i_0] [i_0]);
                            var_22 = (((arr_15 [i_4 - 1] [0] [i_4] [i_4 + 2] [i_4] [i_4]) ? 1 : (arr_15 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2])));
                            var_23 += ((var_3 ? 11572 : (arr_12 [i_5] [i_2] [9] [i_4])));
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_24 = (((arr_17 [i_0] [i_0] [12]) != (arr_8 [i_0] [i_2])));
                arr_21 [i_0] [i_0] [i_6] = ((-(arr_8 [i_0] [i_2])));
            }

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_25 = var_8;
                var_26 = ((var_10 ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : 1));
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_27 = (arr_14 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                            arr_34 [i_0] [i_9 + 3] = (((arr_13 [i_8 + 1] [i_9 + 2] [i_9 - 1] [i_10] [i_8 + 1] [6]) * (arr_14 [i_8 + 1] [i_9 + 2] [i_9 - 1] [6])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_37 [4] [i_11] [i_0] = (0 >> 30);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_11] = ((((13295382097085735330 <= (arr_13 [i_0] [i_0] [i_12] [i_11] [1] [i_0]))) ? ((((arr_26 [i_0] [2] [3] [3]) != (arr_19 [11] [i_11] [i_12])))) : (arr_27 [i_0] [i_12] [i_13 + 1])));
                        var_28 = -416272729;
                        var_29 = (((-10298 >= -31) ? (var_2 && var_0) : var_10));
                        var_30 = (((arr_31 [6] [6] [6] [13] [3]) ? (arr_4 [i_13] [i_13 - 1] [i_13 + 2]) : 0));
                    }
                }
            }
            var_31 = 4307128618558131429;
        }
        arr_45 [i_0] = (((((~((max(var_11, var_4)))))) ? ((((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_35 [i_0] [i_0]) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (max((arr_6 [i_0]), var_7))));
    }
    #pragma endscop
}
