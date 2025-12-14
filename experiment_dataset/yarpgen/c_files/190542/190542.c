/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_14 [12] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = (max(((!((max(var_1, (arr_12 [i_4] [i_3] [i_2] [17] [i_1] [i_0])))))), ((!((min(-16275, 398069571)))))));
                            var_16 = (arr_10 [i_0]);
                            var_17 += ((arr_5 [i_2] [i_1] [i_0]) >> ((min((arr_8 [i_0] [5] [i_2] [9]), 142))));
                            arr_15 [i_4] [i_3] [i_2] [2] [i_0] = -var_1;
                        }
                    }
                }
                var_18 = (min(var_18, (~4294967285)));
                var_19 = (max(248, ((((((arr_1 [i_1] [1]) ? var_4 : 224))) & (min(111, 4294967285))))));
            }

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_20 = ((~(max(90175334, 4294967295))));

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_21 = ((!((min((((18542 ? 112 : var_7))), (-30753 - 13))))));
                        var_22 = (((~(arr_4 [i_0]))));
                        arr_24 [13] [12] [i_5] [i_6] [i_7] [0] [i_1] = 255;
                        arr_25 [4] [i_1] [5] [i_6] [i_5] = (((arr_3 [14] [i_5] [4]) < ((((max(2024084755, 0))) ? ((var_8 ? var_10 : (arr_21 [16] [i_5] [i_1] [i_5] [i_6] [i_7]))) : (arr_7 [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [8] [i_5] = (var_0 ? 157 : (arr_18 [i_8] [i_8 - 3] [i_8 + 1]));
                        var_23 += 3169;
                        var_24 -= (~var_11);
                        var_25 = ((-31 ? (~170) : (var_9 < 2270882523)));
                        arr_30 [i_0] [1] [i_5] [i_6] [i_6] [18] [i_5] = var_8;
                    }
                    var_26 = var_4;
                    var_27 = (min(248, (max((arr_12 [1] [6] [i_1] [3] [15] [i_6]), ((var_9 ? 3488577070 : var_1))))));
                    arr_31 [i_1] [10] [i_5] = var_6;
                }
                var_28 = (min(var_28, (((2147475456 ? (((min(16383, var_8)))) : ((var_5 ? 210 : 1108718280)))))));
            }
            arr_32 [i_0] [i_0] = 35;
        }
        arr_33 [5] [i_0] = (195 ? 0 : (((var_9 - ((max(var_3, 35)))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_37 [19] = 4294967295;
        var_29 = ((((-(min(var_13, var_15)))) == (((~((max(0, var_9))))))));
    }

    for (int i_10 = 2; i_10 < 15;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_30 = (min(var_30, 255));
            var_31 = (max((max(43, ((0 ? 1937812590 : (arr_5 [i_10] [8] [i_11]))))), var_0));
        }
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_32 = (min(var_32, (((-28138 && (!8))))));
                            var_33 = (min(var_13, -3));
                        }
                    }
                }
            }
            var_34 = (((((max(var_7, (arr_22 [i_10] [18] [i_10])))) ? (((min(var_4, (arr_8 [0] [16] [i_10] [i_12]))))) : ((43 ? 0 : var_8)))));
            var_35 = (max(var_35, (arr_1 [2] [i_12])));
            var_36 = (max(15, (((+((var_15 ? (arr_1 [i_10] [i_10]) : -13)))))));
        }
        var_37 *= var_10;
        var_38 = 3269749116;
        var_39 = (((((max(155, 3023616202)) ? 255 : ((var_6 ? -731 : var_13))))));
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_40 = (((((max(2818038780, (arr_34 [i_16] [i_16]))) < ((((arr_56 [20] [i_16]) | 0))))) ? var_0 : (((((((7 ? (arr_35 [i_16]) : -14512))) > 200))))));
        var_41 += (((min(((var_3 ? (arr_35 [i_16]) : var_11)), ((52 ? 14 : 15)))) + 2356857276));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        var_42 = (max(var_42, (((var_5 ? var_14 : 0)))));
        arr_59 [i_17] = ((var_9 ? (((arr_0 [i_17]) ? var_7 : var_9)) : (~var_14)));
        var_43 = ((13 ? ((-21574 ? 160 : var_6)) : (3933798439 > 0)));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 15;i_20 += 1)
                {
                    {
                        var_44 &= 2143136787;
                        var_45 = var_5;
                        arr_67 [i_17] [i_18] [i_19] &= (((((var_15 ? (arr_4 [i_17]) : var_14))) ? (arr_17 [6] [i_17] [8] [i_20]) : ((~(arr_66 [14])))));
                        var_46 *= (var_11 & var_0);
                    }
                }
            }
        }
    }

    for (int i_21 = 2; i_21 < 13;i_21 += 1)
    {

        /* vectorizable */
        for (int i_22 = 0; i_22 < 14;i_22 += 1)
        {
            var_47 += var_1;
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 11;i_24 += 1)
                {
                    {
                        var_48 = (max(var_48, var_4));
                        var_49 *= (~246);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        {
                            var_50 *= var_9;
                            var_51 = ((2176359563 ? 0 : (arr_68 [i_27])));
                        }
                    }
                }
            }
            var_52 -= 7285;
        }
        for (int i_28 = 0; i_28 < 14;i_28 += 1)
        {
            var_53 = var_13;
            arr_88 [i_21] [i_21] [i_28] = (arr_26 [i_28] [i_28] [i_28] [i_21] [8] [i_21] [i_21]);
            arr_89 [5] = (((max((((-(arr_61 [12] [5] [i_28])))), (((arr_43 [i_21] [i_21] [i_28]) ? var_9 : var_13)))) < (((((~var_8) < (min(var_7, 1555513629))))))));
        }
        arr_90 [i_21] [7] = var_0;
        arr_91 [i_21] = ((~((var_4 << ((var_0 ? 0 : var_6))))));
    }
    var_54 = ((!((min(var_10, ((103 ? 677574526 : 98304)))))));
    #pragma endscop
}
