/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [12] |= ((((((var_1 ? -113 : 236))) ? var_6 : (arr_0 [i_0]))) ^ ((((arr_1 [i_0]) ? (246 < 9) : var_7))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 &= (arr_5 [1] [i_1]);
            arr_6 [i_0] = 63983;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 ^= ((4 > ((var_7 ? var_1 : var_8))));
                        arr_16 [i_0] [i_2] [i_0] [i_4] = (8125597036682342183 <= var_9);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 = (max(var_19, 1));
                            var_20 = (min(var_20, ((((arr_7 [i_4] [i_3 - 1] [i_3 - 1]) ? 109 : (arr_7 [i_4] [i_3] [i_3 + 1]))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_21 -= ((1 ? var_14 : (arr_17 [i_0 - 1] [1] [i_0 - 1] [i_2] [i_3 - 1] [i_4])));
                            arr_22 [i_0 + 1] [i_0] [i_3] [i_4] [12] = (arr_5 [i_0 - 1] [i_3 - 1]);
                            var_22 = (min(var_22, (0 < 1)));
                        }
                        var_23 = ((var_12 ? ((-(arr_3 [i_2] [i_3] [i_0]))) : (arr_14 [i_0])));

                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            var_24 = (arr_7 [i_0] [i_2] [0]);
                            arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = var_8;
                            var_25 = (((arr_12 [7] [i_0 + 1] [8] [i_0 + 1] [7] [i_0]) ? -31 : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1])));
                            var_26 = (arr_9 [i_2] [1]);
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_27 -= -2334418930370780271;
                            var_28 = ((var_8 ? (((arr_21 [i_0] [i_0]) ^ var_9)) : ((-19 ? (arr_15 [10] [i_2] [i_2] [i_2]) : var_1))));
                            arr_28 [i_0] [i_2] [i_3] [i_4] [i_8 + 1] = (!17);
                            var_29 = -32765;
                            var_30 |= 150;
                        }
                    }
                }
            }
            var_31 = (min(var_31, ((((var_11 >= 1) ? var_7 : (arr_5 [i_0 + 1] [i_0 + 1]))))));
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {
                        var_32 = (var_15 ? (60698 ^ 146) : 8);
                        var_33 = (arr_33 [i_9] [0]);
                        var_34 = (max(var_34, var_16));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_42 [i_13] [i_10] [i_11] = -16;
                            var_35 = (max(var_35, var_2));
                            var_36 ^= ((arr_32 [i_10 - 2]) ? (arr_32 [i_10 + 1]) : var_8);
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_37 = (arr_35 [i_10] [i_10 + 2] [i_10] [i_10]);
                            arr_47 [i_9] = ((((max(158, 99))) ? ((175 ? (arr_35 [i_9] [19] [i_10 + 1] [i_10 - 1]) : var_4)) : (((var_9 < (arr_35 [i_10] [i_10 + 1] [i_10 + 2] [i_10 + 2]))))));
                        }
                    }
                }
            }
        }
        var_38 = ((112 ? 1 : 2334418930370780256));
    }
    var_39 = var_4;
    var_40 = (255 ? (-2147483647 - 1) : -31946);

    for (int i_15 = 1; i_15 < 22;i_15 += 1)
    {

        /* vectorizable */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_41 = (min(var_41, (arr_40 [i_15] [i_16] [7] [i_15 - 1] [24])));
            var_42 = (((((var_16 ? 0 : (arr_43 [i_16] [i_16] [i_15])))) ? (arr_44 [i_15] [i_16] [i_15 + 3] [i_16] [i_15] [i_15 + 3] [3]) : (var_7 >= var_0)));
        }

        /* vectorizable */
        for (int i_17 = 1; i_17 < 24;i_17 += 1)
        {
            var_43 = (arr_29 [15]);
            var_44 = ((var_13 ? var_4 : var_12));
        }
        var_45 |= ((~((((min(var_0, (arr_48 [i_15] [i_15])))) ? 3 : (((~(arr_35 [i_15] [i_15] [i_15] [0]))))))));
    }
    #pragma endscop
}
