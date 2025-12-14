/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((var_16 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_18 = (max(var_18, ((((((!(arr_1 [i_0] [i_0])))) << (min(((0 ? 255 : 1)), (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (arr_5 [i_0] [i_0] [i_2])));
                        var_20 ^= var_9;
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_21 = 18;
                var_22 += (var_7 ? ((-6200648535444905373 ? 255 : 778617904896526454)) : 41);
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_23 += var_15;
                arr_16 [i_5] [i_1] [i_1] [i_0] = (min(((42 ? -23 : -28)), (min(var_9, (arr_15 [i_0] [i_1] [i_5])))));
            }
            arr_17 [i_0] = (arr_8 [i_0] [i_0]);
        }

        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_24 = (~(min((min((arr_20 [i_8 + 2] [i_8 + 2]), 18446744073709551614)), (arr_21 [i_0] [i_0] [i_0] [i_0]))));
                            var_25 = (min(89, (min(((min(0, (arr_18 [i_7] [i_7] [i_7])))), ((var_9 ? 17744544840216067757 : var_7))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            arr_35 [i_6] [i_7] [i_10] = ((-(((arr_10 [i_10 + 4] [i_10] [i_10]) ? -6 : ((~(arr_30 [i_10] [i_10] [i_7] [i_10])))))));
                            var_26 -= var_9;
                        }
                    }
                }
                var_27 = ((((min(((max(var_15, var_5))), ((18 / (arr_6 [i_0] [i_6] [i_7] [i_6])))))) ? 1 : (min(1, 307783178))));
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_6] [i_12] = (max(((var_2 ? (arr_4 [i_6 + 1]) : var_5)), (((-(arr_4 [i_6 - 1]))))));
                var_28 = (((((1 ? var_5 : 0))) ? (((((var_11 ? (arr_22 [i_12] [i_12] [i_12] [9]) : var_14))) ? ((var_10 ? 5835833856648066598 : (arr_36 [i_0] [i_6] [i_12]))) : var_15)) : ((((arr_25 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]) - 0)))));
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                arr_44 [i_0] [i_0] [i_0] = -2760276567337161706;
                var_29 = (-(min(8460147192940049453, var_12)));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_30 = ((!((min((max(6133582762606971520, 1034529766)), -20660)))));
                    arr_49 [15] [15] [15] [15] [i_0] = ((((min(-0, (max(var_8, (arr_12 [i_0] [i_0] [i_0] [i_0])))))) ? ((min(var_1, var_2))) : var_10));
                }
                var_31 = (min(((((min(13, (arr_34 [i_0] [i_0] [i_0] [i_13] [i_0])))) ? (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_0)) : 0)), (max(((4504554979630698045 - (arr_25 [7] [i_0] [i_0] [i_0]))), 116))));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 23;i_16 += 1)
                {
                    {
                        var_32 = (arr_7 [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_16 + 2]);
                        arr_54 [i_16 + 2] [i_16 + 2] [i_15] [i_0] = (((min(var_13, (min(1, 0))))) ? (min(var_1, 1122)) : (min(((min((arr_4 [i_0]), (arr_41 [i_0] [i_0] [i_0])))), ((var_5 ? var_16 : var_7)))));
                        var_33 ^= (max(((max((min((arr_15 [i_0] [i_15] [i_0]), var_6)), ((max(255, 0)))))), (max(250, 1147929488954742692))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_61 [i_0] [i_17] = var_9;
                            arr_62 [i_0] [i_6] [i_0] [i_18] [i_6] [i_17] [i_0] = ((4504554979630698051 ? -20653 : -44));
                        }
                    }
                }
            }
        }
        var_34 = ((-(((!(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}
