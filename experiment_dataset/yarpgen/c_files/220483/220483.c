/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (min(var_17, (max(var_4, -var_5))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (4202 + -98);
        var_20 -= (arr_1 [i_0]);
        var_21 = var_4;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_22 = (~2);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_3] [i_1] [i_2 + 3] [i_3] [i_4] = ((((var_1 ? (arr_0 [i_0] [7]) : 2087176816))) ? (!var_15) : (arr_7 [i_3] [i_3] [i_2]));
                            var_23 = (arr_4 [i_2 + 2] [i_2 + 2]);
                            var_24 ^= 9;
                        }
                        for (int i_5 = 4; i_5 < 8;i_5 += 1)
                        {
                            var_25 = ((~(arr_14 [i_0] [i_2 - 1] [i_5 - 2])));
                            var_26 = (min(var_26, (((-((((((arr_3 [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_2]) : (arr_13 [i_0] [i_0] [i_0])))) ? (max(8388607, var_6)) : (arr_7 [i_1] [i_1] [i_1]))))))));
                            var_27 = (min(var_27, ((((var_14 / -17) << (((min(((-(arr_7 [i_2] [i_0] [0]))), (((~(arr_3 [7])))))) - 17702369677829284006)))))));
                            var_28 -= var_11;
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = 14270564463333437444;
                    }
                }
            }
            arr_16 [i_0] [i_0] = ((min((arr_4 [i_0] [i_0]), (arr_12 [i_1] [i_1] [i_0] [i_1] [i_1]))));
            arr_17 [i_0] [6] [i_1] |= ((~(((arr_3 [i_0]) ? (arr_8 [7] [i_0] [0] [9] [9]) : (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_29 |= ((2 ? (((var_15 ? ((min((arr_9 [i_6] [i_6] [i_0] [i_0] [i_6] [i_6] [i_6]), 215))) : var_3))) : 8388585));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_30 = (max(var_30, (((~(!var_5))))));
                    arr_25 [9] [9] [i_7] [i_0] [i_7] [i_0] = (((arr_4 [i_6] [i_8]) ? ((-(arr_18 [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [i_6] [i_8])));
                    var_31 = (min(var_31, (arr_4 [i_0] [i_6])));
                }
                for (int i_9 = 2; i_9 < 7;i_9 += 1) /* same iter space */
                {
                    var_32 = ((arr_23 [i_9 - 1] [i_9 + 3] [i_9]) + ((((arr_2 [i_0] [i_0]) * 3329))));
                    var_33 -= ((2 ? (arr_21 [i_7] [i_7] [i_7] [i_7]) : 255));
                    var_34 = (((~var_15) >= var_11));
                    arr_28 [i_0] [i_6] [3] [i_9 + 3] [i_9] [i_0] = (((((((arr_19 [i_6] [i_6] [i_9 + 2]) != (arr_19 [i_6] [i_6] [i_6]))))) < 8388585));
                }
                for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
                {
                    var_35 += var_9;
                    var_36 = (((arr_4 [i_10 + 1] [i_10 + 2]) ? var_1 : (arr_24 [i_0] [i_6] [i_6] [4] [i_10 + 3])));

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_34 [i_0] [i_6] [i_7] [i_10] [i_0] [i_10 + 2] |= (((var_0 >= var_15) <= ((8388579 ? var_9 : var_17))));
                        var_37 = -var_10;
                        arr_35 [2] = 536870912;
                        var_38 = (max(var_38, ((((arr_3 [i_10 + 1]) || -var_3)))));
                    }
                    arr_36 [i_10 - 1] = (((arr_29 [1] [i_0]) ? (arr_29 [i_0] [i_0]) : var_17));
                    var_39 = var_15;
                }
                arr_37 [i_0] [i_0] = (((arr_18 [4] [i_6] [i_7]) * 18446744073701163003));
                var_40 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : 1046198053);
            }
            var_41 = (max(((~(arr_22 [i_0] [8] [8] [i_0]))), (var_1 - var_12)));
            var_42 -= (!16);
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_43 = (max(var_43, var_2));
            var_44 -= (min(var_14, 2445574849));
            var_45 = arr_7 [i_12] [i_12] [i_12];
            arr_40 [i_12] = ((((((((arr_0 [i_0] [i_12]) + 9223372036854775807)) >> (((arr_29 [i_12] [i_12]) - 3106830312636664698))))) ? (((arr_0 [i_12] [i_0]) & (arr_0 [i_0] [i_0]))) : (arr_0 [i_12] [i_12])));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_46 = (--1);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    var_47 = (max(var_47, (~66)));
                    var_48 ^= (~1520839471);
                }
            }
        }
    }
    #pragma endscop
}
