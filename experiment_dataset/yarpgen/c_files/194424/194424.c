/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_0;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = ((var_6 / (arr_0 [i_1 - 1])));
            var_14 += (((((-127 - 1) <= var_0)) ? var_7 : (-111 && -88)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_1 + 3] [i_2] = ((var_13 - ((67 ? (arr_0 [9]) : (arr_0 [i_2])))));
                arr_9 [i_2] [i_1] [3] = var_4;
                var_15 = 7031358577072831751;
                var_16 = ((3277209423060784502 || (arr_3 [i_1 + 3])));
            }
            for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_17 = (~var_8);
                arr_12 [i_0] [i_1] = (var_8 <= 122);
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_18 = 692111894;
                            var_19 = (arr_13 [i_4 - 1]);
                            var_20 = -65518;
                        }
                    }
                }
                var_21 -= var_12;
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_22 = var_8;

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_23 = (var_9 + var_2);
                            arr_32 [4] [10] [i_9] [i_10] [i_11] &= (72 + -1752222782);
                            arr_33 [i_11] [i_8] [10] [i_9] [i_11] = var_8;
                        }
                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            var_24 = -var_12;
                            var_25 = (arr_35 [i_9] [i_8 - 1] [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 3]);
                            arr_37 [i_9] [i_8 + 2] [i_9] [i_10] [i_12 + 2] = ((-(arr_23 [i_8 - 1])));
                            arr_38 [i_9] [i_10] [i_9] [i_8] [i_8] [i_9] = (~var_4);
                            var_26 = (((arr_26 [i_8 + 3]) != var_4));
                        }
                        var_27 = ((2 ? ((18 ? var_11 : (arr_36 [i_7] [i_7] [i_9] [i_7] [i_10]))) : var_6));
                        var_28 = (((arr_29 [i_8 + 2] [i_9] [i_9] [i_9] [i_10]) ? ((var_12 | (arr_26 [i_9]))) : (arr_22 [i_9] [7] [i_7])));
                    }

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_29 &= -var_11;
                        arr_41 [i_7] [i_9] [i_9] = 11;

                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_30 = -var_8;
                            arr_45 [i_13] [3] [i_9] [3] [i_9] [i_8] [i_7] = ((~(arr_25 [i_9] [i_9] [i_8 - 1])));
                            var_31 = var_0;
                            arr_46 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7] = (arr_35 [i_9] [i_7] [i_7] [i_8] [i_8 - 1] [i_7]);
                        }
                        var_32 = 7711519869311397726;
                    }
                    var_33 = (~-2147483629);
                }
            }
        }
        arr_47 [i_7] [i_7] = var_9;
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_34 = var_2;
                    var_35 = 1166409569;
                    arr_54 [i_15] [i_7] = ((-((4294967282 << (var_5 - 8760849854960104603)))));
                    var_36 = -13122;
                }
            }
        }
        arr_55 [i_7] [i_7] = var_0;
        var_37 = (max(var_37, var_9));
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 21;i_17 += 1)
    {
        var_38 = 255;
        arr_58 [i_17] = ((-(((var_2 <= (arr_57 [i_17]))))));
        arr_59 [i_17] = ((7725835526432179646 | (arr_56 [i_17 - 2])));
    }
    var_39 = var_4;
    #pragma endscop
}
