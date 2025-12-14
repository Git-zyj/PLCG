/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_15;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = var_1;
            arr_6 [i_0] [i_1] [i_1] = var_1;
            var_19 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, var_11));
                        var_21 = (min(var_21, (arr_9 [i_0] [i_2])));
                        arr_13 [i_1] [i_2] [i_1] = var_14;
                        var_22 += (-(arr_10 [0] [i_2] [i_2] [i_0]));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_4] [i_0] = (max(var_4, var_10));
                            arr_25 [i_4] = var_0;
                            var_23 = (arr_4 [i_5] [i_0]);
                        }
                    }
                }
            }
            arr_26 [i_4] [i_4] = -3247750941512627041;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_33 [i_4] [i_4] [i_8] [i_9 - 1] = var_4;

                        for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_4] [1] [i_8] [i_4] [i_4] = (max((0 && 41), var_16));
                            arr_37 [17] [i_4] [i_4] [i_4] [i_9 - 1] [i_10] [i_10 - 1] = (max(var_9, var_0));
                        }
                        for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_4] [i_8] [i_9] [i_4] [0] = var_8;
                            var_24 *= (((((var_13 + 2147483647) << (28304 - 28304))) >> (((arr_23 [1] [i_9 - 1] [i_8] [i_11 - 1] [i_11] [i_11] [i_4]) - 1222466662))));
                            var_25 = (min(var_25, ((min(var_11, 1)))));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_44 [i_0] [i_4] = (arr_27 [i_4] [i_4] [i_4] [i_4]);
                            var_26 = var_4;
                            var_27 = (max(var_27, var_0));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_13] = var_15;

            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                arr_52 [i_13] [i_13] [i_14 + 1] = (arr_34 [i_14 + 2] [i_14 + 2] [i_14] [i_14] [i_13]);
                arr_53 [i_0] [i_0] [i_13] [i_0] = (arr_22 [i_0] [i_0] [i_14] [1]);
                var_28 = var_6;
            }
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                arr_57 [i_13] [i_13] [i_0] [i_13] = (((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) / (~var_13)));
                arr_58 [i_0] [i_0] [i_0] [i_13] = var_15;
            }
            for (int i_16 = 2; i_16 < 16;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    arr_64 [i_16] [i_13] [i_16] [i_13] = 1;
                    arr_65 [i_0] [i_0] [i_0] [i_13] [i_0] = ((var_16 / (arr_7 [i_16 + 1] [i_16 - 2] [i_16 - 2] [i_16 + 1])));
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_69 [i_0] [i_13] [i_13] [i_16] [i_16] [i_16] = var_9;
                    arr_70 [i_13] [i_13] = var_2;
                    arr_71 [i_13] [i_13] [i_16 - 1] [i_0] [i_0] = var_7;
                }
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    arr_76 [i_0] [i_0] [i_13] = 0;
                    arr_77 [i_13] [i_13] = (var_9 + var_17);
                    arr_78 [i_16] [i_16] [i_16] [i_13] = var_12;
                    arr_79 [i_13] [i_13] [i_13] [i_13] = var_4;
                }
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    arr_83 [i_13] [i_13] = var_4;
                    var_29 += var_4;
                    arr_84 [i_13] [i_13] = var_10;
                }
                var_30 -= var_5;
            }
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                arr_88 [i_0] [i_13] [i_21] [i_13] = var_12;
                arr_89 [i_0] [i_13] [i_13] = -var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 11;i_22 += 1)
    {
        for (int i_23 = 1; i_23 < 10;i_23 += 1)
        {
            {
                var_31 ^= (3247750941512627041 > var_12);
                arr_97 [i_23] = var_3;
            }
        }
    }
    #pragma endscop
}
