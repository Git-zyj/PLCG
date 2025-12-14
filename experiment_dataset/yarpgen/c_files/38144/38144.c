/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((1 >= ((((min((arr_0 [i_0] [i_0]), -14))) ? (32642 || 14) : (arr_1 [i_0 + 1]))))))));
        var_12 = (max(var_12, -14));
        var_13 = -14;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((max(566308709, 1514044821)) | -15)) > 59));
        var_14 = -35;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_15 += (-(arr_7 [i_2]));
        var_16 = (max(var_16, (((~(arr_1 [i_2 + 1]))))));
        var_17 = (arr_1 [i_2]);

        for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        var_18 = (((arr_0 [i_2 - 1] [i_2 + 1]) || (arr_0 [i_5] [i_4])));

                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (max(var_19, (((-(arr_14 [i_6] [i_4] [i_2]))))));
                            var_20 = (arr_0 [i_3] [i_6 + 1]);
                            arr_20 [i_4] [i_5 + 3] [i_4] [i_3] [i_3] [i_3] [i_4] = (((arr_2 [i_3 - 2] [i_2 + 1]) <= (((18558398 < (arr_11 [i_3]))))));
                            arr_21 [i_2] [i_3] [i_2] [i_5] [i_4] [i_2] = 127;
                        }
                    }
                }
            }
            var_21 = arr_4 [8];
            var_22 ^= -14;
            arr_22 [i_3] [i_3 - 2] = arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 1];
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_25 [i_2] = (arr_4 [8]);
            var_23 = ((!((((arr_19 [i_2] [i_2] [i_2] [i_7] [i_2]) >> (((arr_23 [i_7] [i_2] [i_2]) - 2880820594747907417)))))));
            var_24 = (arr_4 [4]);
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_25 ^= (arr_30 [i_2 + 1]);
                var_26 = 3;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_8] [i_8] [i_8] = (arr_3 [i_10]);
                var_27 = arr_15 [i_2 + 1] [i_2];
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_28 = ((127 ? (arr_5 [i_8] [i_8]) : (arr_37 [1] [i_8] [i_11] [i_2 - 1] [i_8])));
                            var_29 = (max(var_29, 43373));
                        }
                    }
                }
                arr_41 [i_2] [i_8] = ((!((((arr_30 [i_2]) ? (arr_19 [1] [i_2] [i_8] [i_2] [i_2]) : 8128)))));
                arr_42 [i_8] = (arr_30 [i_2]);
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_30 = (((arr_44 [i_8] [i_8] [i_14]) == ((26648 ? -113 : (arr_26 [i_14] [i_8])))));
                var_31 = 32763;
            }
            /* LoopNest 2 */
            for (int i_15 = 3; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 12;i_16 += 1)
                {
                    {
                        var_32 -= 22185;
                        var_33 = (min(var_33, (!21466)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        var_34 = ((!(((59287 - (arr_45 [i_8]))))));
                        var_35 *= (((arr_5 [10] [10]) || (arr_3 [i_2 - 1])));
                        var_36 = arr_44 [i_8] [i_2 + 1] [i_2 - 1];
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
        {
            arr_61 [i_2] [i_19] [i_19] = ((-26851 ? -124 : (arr_24 [i_2 - 1])));
            arr_62 [i_2] |= (arr_19 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 1]);
            var_37 = (((arr_34 [4] [4]) * (arr_32 [i_2] [i_2] [12] [i_2 - 1])));
            var_38 = -21466;
        }
        for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
        {
            var_39 = (((arr_35 [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_18 [i_20] [i_2]) : 1));
            arr_65 [i_20] = (arr_0 [i_2 - 1] [i_2 + 1]);
            var_40 &= (!1);
            var_41 += ((-(arr_63 [i_2 - 1] [0])));
        }
    }
    var_42 = var_9;
    #pragma endscop
}
