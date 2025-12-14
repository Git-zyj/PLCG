/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = 79;
        var_21 = 15116819250844807564;
        arr_2 [i_0] = 176;
        arr_3 [i_0] = 65535;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_22 = 176;
        arr_7 [0] [9] = 3332892369;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = -2503046986666992967;
        arr_13 [i_2] [i_2 - 1] &= 1;
        var_23 = 0;
        var_24 = 4294967295;

        for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                var_25 = (max(var_25, -810002642));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_24 [i_2] [i_4] = -2503046986666992978;
                            var_26 = (min(var_26, 1));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                arr_27 [12] [i_2] [i_2] [i_2 + 1] &= 33554432;
                arr_28 [i_7] [i_7] [i_7] [i_3] = 426635822;
                var_27 = -35;
                var_28 = (max(var_28, -98));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_37 [3] [i_10] [5] [i_2 + 1] [i_3] [i_10] [i_2 + 1] = 2199023255551;
                        arr_38 [14] [14] [i_9] [i_9] [14] [i_10] [i_9] = 1;
                        var_29 = (max(var_29, -6807455468815158993));
                    }
                    var_30 = -2503046986666992972;
                }
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    arr_41 [i_2] [i_3] [i_8] = 2503046986666992971;
                    arr_42 [i_2 + 1] = -24561;
                    var_31 = 5756797417469608431;
                    var_32 -= -15123;
                }
                var_33 = -2503046986666992969;
            }
            arr_43 [i_2] = 3332892367;
            arr_44 [12] [12] = -4870405174338776509;
        }
        for (int i_12 = 3; i_12 < 17;i_12 += 1) /* same iter space */
        {
            arr_47 [i_2] [i_12] = -2503046986666992948;
            arr_48 [10] [i_12] = -1;
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {
                    {
                        arr_59 [i_13] [i_13] [i_13] [i_15] [i_13] [i_15] = 255;
                        var_34 = 1;
                        arr_60 [i_13] [i_14] [i_15] [i_15] = 962074926;
                    }
                }
            }
        }

        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {

            for (int i_18 = 2; i_18 < 22;i_18 += 1)
            {
                var_35 = 2503046986666992972;
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        {
                            arr_73 [i_13] [i_17] [i_19] [i_19] = -19403;
                            var_36 = -2503046986666992961;
                        }
                    }
                }
                arr_74 [i_18] = 1;
            }
            for (int i_21 = 1; i_21 < 22;i_21 += 1)
            {
                var_37 = (min(var_37, -2503046986666992969));

                for (int i_22 = 1; i_22 < 22;i_22 += 1)
                {
                    arr_79 [i_13] [i_13] [i_13] [17] = 122;
                    arr_80 [13] |= (-127 - 1);
                }
                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {

                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        var_38 = (-127 - 1);
                        var_39 = 962074926;
                    }
                    arr_86 [i_23] = 32767;
                    var_40 = -107;
                    var_41 = (min(var_41, 1185667347));
                }
            }
            var_42 = 4294967295;
        }
        for (int i_25 = 0; i_25 < 23;i_25 += 1)
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 23;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    {
                        arr_94 [i_13] = 1051236022;

                        /* vectorizable */
                        for (int i_28 = 0; i_28 < 23;i_28 += 1)
                        {
                            var_43 -= 2004429991;
                            var_44 = 2;
                            var_45 = -5641880050333202246;
                        }
                        arr_98 [i_13] = 2503046986666992968;
                        var_46 = (max(var_46, 3332892369));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_29 = 1; i_29 < 21;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 23;i_30 += 1)
                {
                    {
                        var_47 |= 1556200516;
                        arr_105 [i_29] [i_25] [i_25] = 14987;

                        /* vectorizable */
                        for (int i_31 = 1; i_31 < 22;i_31 += 1)
                        {
                            var_48 = (max(var_48, 65535));
                            var_49 = -2215417016564768621;
                            var_50 = (min(var_50, 255));
                        }
                        arr_109 [i_13] [4] [4] &= 22149;
                    }
                }
            }
        }
    }
    #pragma endscop
}
