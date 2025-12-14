/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = (max(var_12, (((((var_6 + (var_4 || var_3))) > var_1)))));
            arr_5 [i_0] = var_6;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_13 = (((-(var_4 + var_2))));
                            arr_15 [i_0] [i_3] [i_2] [i_2] [i_2] [i_4] = (((var_7 < var_1) ^ (~var_8)));
                            var_14 = var_0;
                            arr_16 [i_1] |= var_6;
                        }
                    }
                }
            }
            var_15 -= ((!(!-270455337)));
            arr_17 [0] = (~var_11);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_16 |= var_9;
            var_17 = var_5;
            var_18 = (max(var_18, var_1));
        }
        var_19 ^= ((~((var_6 << (((~var_9) + 42165))))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_20 = ((-(((!(!var_9))))));
            arr_26 [i_6] [i_7] = var_4;
            arr_27 [i_6] [i_6] [i_7] = (~-var_11);
        }
        arr_28 [i_6] [i_6] = var_0;
    }
    var_21 = (~var_6);

    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_22 |= var_8;
        arr_31 [i_8] = var_4;
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_23 = ((+((((!var_1) || var_0)))));
            arr_39 [i_9] = -var_6;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_24 = (-var_5 / var_4);
            arr_44 [i_11] = var_6;
            arr_45 [i_9] [i_11] [9] |= var_9;
            arr_46 [i_9] [i_9] [i_9] = (~var_7);
        }

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                arr_53 [i_9] [i_12] = var_6;
                arr_54 [i_9] [3] [i_9] = ((!(var_3 && var_4)));
            }

            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_25 = var_2;
                arr_57 [i_14] [13] = -var_10;
                var_26 = (var_4 ^ var_5);
            }
        }
        arr_58 [i_9] = (var_8 != var_10);
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_27 = -var_4;
        var_28 = (max(var_28, (((-(~var_3))))));
        var_29 = (var_5 - var_2);
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_30 = (min(var_30, (~-var_1)));
                                var_31 = var_5;
                                arr_77 [i_17] [14] = ((var_2 | (((!((((var_4 + 2147483647) >> (var_0 - 3147145354)))))))));
                                arr_78 [5] [i_17] [5] [i_17] [i_17] = (var_8 & var_7);
                            }
                        }
                    }
                    var_32 = var_4;
                    arr_79 [i_16] [i_16] [i_16] = var_3;
                }
            }
        }

        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {

            for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
            {
                arr_86 [i_21] = var_2;
                arr_87 [i_16] &= (((~(~var_3))));
            }
            for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
            {
                arr_92 [i_21] [i_16] [i_21] [i_21] = var_9;
                arr_93 [12] [i_21] [i_21] = -var_9;
            }
            var_33 = -2084536624;
            var_34 = (min(var_34, -var_3));
        }
        for (int i_24 = 0; i_24 < 15;i_24 += 1) /* same iter space */
        {
            arr_97 [7] = (((var_6 * var_1) / -var_6));
            var_35 = var_9;
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
        {
            var_36 = var_10;

            for (int i_26 = 0; i_26 < 15;i_26 += 1)
            {
                arr_104 [i_16] [5] = var_2;
                var_37 = var_5;
            }
            arr_105 [10] [10] = var_10;
        }
        arr_106 [i_16] = (!-var_9);
        var_38 *= (~-var_3);
    }
    var_39 = (-(var_11 + var_9));
    var_40 = (min(var_40, (~-19553)));
    #pragma endscop
}
