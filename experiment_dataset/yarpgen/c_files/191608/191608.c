/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    var_17 = -75;
                    var_18 = (var_13 & 0);
                    var_19 = (arr_5 [i_0] [i_2]);
                    var_20 = (((arr_6 [i_2 - 1] [i_2 - 1] [i_3 - 1]) <= var_11));
                    arr_10 [21] [i_0] [21] [i_0] [21] [i_2] = (arr_4 [i_2 + 1] [i_3 - 1] [i_3 - 3]);
                }
                arr_11 [i_2] = 247;
            }
            for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_14 [i_4] &= var_3;
                var_21 = ((var_4 && 17790799098032544866) > var_2);
            }
            var_22 = arr_8 [i_0];
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [3] [i_0] [i_5] [16] [i_0] = ((var_5 * var_12) && (arr_15 [i_6 + 3]));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            var_23 = (arr_12 [i_0] [12] [i_5] [i_5]);
                            var_24 += 2;
                        }
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            var_25 = (((arr_16 [7] [0] [i_5 + 1]) >= (9943072386449738846 | 18446744073709551615)));
                            var_26 = ((7 / ((var_4 ? var_2 : var_7))));
                            arr_26 [0] [i_5] [i_5] [7] [10] = ((((((arr_4 [i_1] [i_5] [i_5]) - var_13))) == var_6));
                        }

                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_27 = (135 > -840366203);
                            var_28 = (0 / 63193);
                            var_29 = (var_12 % 3024880315455775717);
                            var_30 = (!var_2);
                            arr_30 [i_0] [10] [i_5] [i_0] [i_0] = ((-17935 ? (arr_19 [i_5 - 1] [i_5 - 1] [8] [i_5 - 1] [i_5 + 1]) : (arr_12 [i_0] [i_1] [8] [i_5 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_31 = -3661;
                            var_32 = (((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_8));
                            var_33 = var_11;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_38 [i_5] [i_1] [i_1] [17] [8] = (((((arr_32 [i_0] [i_0] [i_0] [i_5] [i_0] [8]) / 65533)) << (((127 & var_8) - 120))));
                            arr_39 [4] [i_5] [1] [13] [i_0] [i_5] [i_0] = (((var_8 | var_6) ? (arr_13 [i_6 + 3] [i_6 - 1] [i_5 - 1]) : 1));
                            arr_40 [0] [i_5] [1] [16] = (arr_9 [i_0] [1] [i_5] [i_5 + 1] [i_6] [i_11]);
                        }
                        var_34 = 840366201;
                    }
                }
            }
        }
        for (int i_12 = 3; i_12 < 23;i_12 += 1) /* same iter space */
        {
            arr_45 [i_12] [i_0] [i_12] = (arr_2 [i_12 - 1]);
            var_35 = arr_20 [i_0] [i_0] [i_12] [i_12];
        }
        for (int i_13 = 3; i_13 < 23;i_13 += 1) /* same iter space */
        {
            var_36 = ((-var_3 << (arr_42 [i_13])));
            var_37 = ((62086 % (var_3 > var_9)));
        }
        var_38 = (((var_9 * var_12) * ((var_4 ? -8441 : (arr_47 [i_0])))));
    }
    var_39 = ((var_1 ? 1 : (840366203 == 107)));
    var_40 = var_11;
    #pragma endscop
}
