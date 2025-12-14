/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((237 / 6951) & var_9));
    var_14 -= ((-(var_0 * var_9)));
    var_15 = 44093;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = (max((max(var_6, var_5)), (arr_2 [i_0 + 3] [i_1] [i_1])));
            var_16 = (arr_4 [i_0 + 4]);
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_17 = -var_12;

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                arr_10 [i_0] [i_0] = (((arr_3 [i_2 - 2]) >= var_7));
                arr_11 [i_0] [i_2] [i_0] [i_3] = var_9;
                arr_12 [i_0] [i_0] [i_0] = (arr_8 [i_0]);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    var_18 &= 3;
                    arr_20 [i_0] [i_0] = var_4;
                    var_19 = 3;
                    var_20 ^= ((((var_3 + (arr_19 [i_4] [i_4] [22] [i_4]))) & (arr_9 [i_0 + 4] [i_0 + 4] [i_4] [i_0 - 1])));
                }
                var_21 = (((arr_17 [i_0] [i_2 - 1] [i_2] [i_4]) >> (arr_17 [i_0 + 4] [i_0 + 1] [i_0 + 1] [i_0])));
                var_22 -= (arr_3 [i_0]);
                var_23 = 15;
            }
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_0] [i_2 + 1] [i_2 - 1] [i_0] = min(32750, 1);
                var_24 = (((((var_5 && (arr_18 [i_0] [i_2] [i_2] [i_6])))) ^ (arr_16 [i_0 + 4] [i_2 - 1] [i_6] [i_2 - 1] [6] [i_0])));
                var_25 = ((+(max(((32767 ? (arr_8 [i_0]) : (arr_14 [i_0 + 1] [i_2 + 2] [i_6 - 1]))), (arr_15 [i_0] [i_0 + 4] [i_0] [i_6])))));
                var_26 = var_3;
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_27 = (arr_18 [i_0] [i_2 - 2] [i_0] [i_2 - 2]);
                        arr_30 [i_0] [i_0] [i_7] [11] = ((-((max(((((-2147483647 - 1) == 7854124930596211926))), 194)))));
                        arr_31 [i_0] [10] [i_0] [i_0] = ((var_8 | ((((63 ? 1 : 11553261527791112488)) >> 1))));

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            var_28 = (var_5 ? (arr_21 [i_7] [i_0] [i_8] [i_9 - 1]) : (arr_21 [i_7] [i_0] [1] [i_9 + 2]));
                            var_29 = var_7;
                            var_30 = (((arr_26 [i_0 - 1] [i_7] [i_9 + 1]) && 0));
                        }
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_7] [i_8] [i_10 + 1] = (arr_23 [i_0 - 1]);
                            var_31 = var_2;
                        }
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            var_32 = (0 & 249);
                            var_33 -= var_9;
                            var_34 &= (((~(arr_26 [i_2] [i_2] [i_0 - 1]))));
                        }
                    }
                }
            }
        }
        arr_40 [i_0] = (((((((arr_16 [3] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0]) / (arr_35 [i_0 + 1] [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 2]))) * (((max((arr_9 [i_0] [i_0] [i_0 + 3] [i_0]), 0)))))) / 22259));
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 11;i_12 += 1)
    {
        var_35 -= (((arr_36 [i_12 + 1] [16] [i_12 - 2] [i_12 - 2] [16] [4]) < var_2));
        arr_43 [i_12] = (arr_18 [i_12] [i_12 + 1] [i_12 - 3] [i_12 + 1]);

        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    {
                        var_36 = ((~(arr_1 [i_13 + 2] [i_13 - 1])));
                        arr_52 [i_15] [i_14] [i_15] = (((~(arr_14 [i_15] [i_14] [i_13]))));
                        arr_53 [i_15] = 32751;
                        var_37 = (arr_13 [0] [i_13] [0] [i_15]);
                        arr_54 [i_12 - 1] [i_14] [i_15] [i_15] = (arr_42 [i_12 + 1]);
                    }
                }
            }
            var_38 = ((~(arr_17 [i_13] [i_12 + 1] [i_12 + 1] [i_12 - 1])));
            arr_55 [i_13] = var_8;
            arr_56 [i_12] [i_13] [i_13] = var_10;
            arr_57 [i_12] = (arr_26 [i_12] [i_12] [17]);
        }
    }
    #pragma endscop
}
