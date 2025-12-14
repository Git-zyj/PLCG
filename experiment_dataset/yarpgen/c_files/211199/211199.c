/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-(var_8 - var_10))) > var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [11] [9] = arr_2 [5] [i_1] [i_0];
                var_19 = (arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_1] [i_0] = min((((arr_2 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_1]))), (!255));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = (((arr_2 [i_2] [i_2] [i_2]) ? ((47 ? var_12 : var_4)) : var_2));
        arr_9 [i_2] = ((arr_8 [i_2]) && var_14);

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_21 = (((arr_14 [i_2] [i_2]) ? var_16 : var_12));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_22 = (--19);
                        var_23 *= (var_9 * 1);
                        arr_20 [i_6] [i_4] [i_4] [i_3] [i_2] = (((arr_19 [i_2] [i_2] [4] [i_5] [i_6 + 1]) ? (arr_19 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [i_6]) : (arr_10 [i_2])));
                    }
                    arr_21 [i_2] [i_2] [i_3] [i_4] [6] = var_3;
                    var_24 = (max(var_24, ((((arr_1 [i_5]) | (arr_17 [i_2] [i_4] [i_4] [i_5]))))));
                }
                var_25 += (((1 | 51) ? (((arr_17 [i_2] [i_2] [i_2] [i_2]) ? (arr_19 [i_2] [i_2] [i_3] [i_4] [i_2]) : var_4)) : (((var_6 >= (arr_15 [i_4] [9]))))));

                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    var_26 += var_5;
                    var_27 = var_3;
                }
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    arr_27 [i_4] [i_2] [i_2] [i_2] [i_2] |= (((arr_19 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [2]) + var_3));
                    arr_28 [i_8] = ((((arr_6 [i_2] [i_2]) - (arr_13 [i_3] [i_4]))) >= -var_14);
                    var_28 = -9223372036854775794;
                    arr_29 [i_2] [i_3] [i_4] [i_8] = (((arr_19 [i_3] [i_3] [i_3] [i_8 + 1] [i_8 + 1]) + (arr_16 [i_4] [i_3] [i_8 + 2] [i_8 + 2])));
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {

                    for (int i_10 = 4; i_10 < 9;i_10 += 1)
                    {
                        var_29 = (min(var_29, (((-(arr_22 [i_2] [i_3] [i_4] [0] [i_10]))))));
                        var_30 = (((((arr_32 [i_9] [i_9] [i_9] [i_3] [i_9]) ? var_12 : -9223372036854775802))) ? (arr_19 [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2] [i_10]) : ((var_17 ? (arr_30 [i_4] [7]) : (arr_10 [i_10]))));
                    }
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        var_31 = ((~(arr_26 [i_2] [i_3] [i_11 - 1] [i_9 - 1])));
                        var_32 = ((-(((arr_13 [i_2] [i_2]) - var_14))));
                        arr_36 [i_11 + 4] [i_2] [i_9] [i_2] [i_9] [i_2] [i_2] = -258834490;
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_33 *= (arr_35 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_2] [i_9 + 1]);
                        var_34 += var_11;
                        var_35 = (((arr_23 [i_2] [i_3] [i_4] [i_3]) ? (arr_23 [i_2] [i_2] [i_2] [i_2]) : (arr_23 [i_3] [4] [i_9 + 1] [i_12])));
                    }
                    arr_41 [i_9] [i_3] [i_3] [i_3] = (((arr_26 [i_4] [i_4] [i_9 - 1] [i_9 + 2]) ? (arr_40 [i_2] [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) : (arr_26 [i_4] [i_4] [i_9 + 2] [i_9 + 1])));
                    var_36 = (arr_23 [i_2] [i_9 + 1] [i_9 + 1] [i_9]);
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        var_37 = ((((arr_40 [i_2] [i_14] [i_2] [i_14] [i_14] [i_13] [i_14]) & var_17)));
                        arr_46 [i_14] [i_14] [i_13] [i_2] [i_3] [i_14] = (((arr_12 [i_14] [i_3] [i_13]) ? var_8 : var_16));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_38 ^= (1 - 258834485);
                var_39 = (arr_34 [i_2] [i_2] [i_15] [i_15] [i_15] [i_16]);
            }
            arr_52 [i_2] [i_2] [i_2] = 3268;
        }
        arr_53 [i_2] = (arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    var_40 |= ((((max(((var_13 ? var_12 : var_14)), var_0))) ? (140 < 300002831) : ((var_4 % (((max(var_2, var_17))))))));
    #pragma endscop
}
