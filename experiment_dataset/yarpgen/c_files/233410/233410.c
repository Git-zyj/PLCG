/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((var_12 ? (-793 + -792) : 62020)))));
    var_16 &= var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_17 = 808;
        var_18 = (!var_2);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = ((~(arr_2 [i_0 - 1])));
            var_20 = ((-(arr_3 [i_0] [i_0 - 1] [i_0 + 1])));
            var_21 = 1022;
            arr_5 [i_0 - 2] [i_1] = (arr_4 [i_0] [21] [i_0]);
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = -790;
            var_22 = (arr_0 [i_0] [i_0 + 1]);
            var_23 = (((-(arr_6 [i_2] [i_0 - 2]))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                var_24 += (arr_10 [i_0] [i_0 - 2] [i_0]);
                var_25 = (arr_7 [i_2]);
                arr_11 [i_3] [i_0] = var_10;
                var_26 = (((arr_3 [i_0] [i_0] [i_3]) % 790));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                var_27 = (((-6 / 4096) || ((!(arr_9 [i_0] [i_0] [i_0 - 1] [i_0])))));
                arr_15 [i_4] [i_4] [i_0] [i_0] = (((arr_14 [i_0] [i_2]) >= -797));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_28 = var_8;
                    var_29 = 790;
                    var_30 += (((arr_13 [i_0 - 1] [i_0 - 1] [i_0]) ? var_8 : (arr_17 [i_0] [i_0] [i_0] [i_0])));
                    arr_21 [i_0] [1] [i_0 - 3] [i_0] [12] [i_0] = ((((arr_6 [i_2] [i_0 - 1]) ? var_0 : (arr_17 [i_0 - 1] [i_2] [i_5] [i_5]))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_31 &= 832;

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_27 [i_0] = (arr_7 [i_0 - 3]);
                        var_32 -= ((-(arr_17 [i_0 - 1] [i_2] [3] [i_7])));
                        var_33 = var_3;
                    }
                    arr_28 [i_0] [i_5] [1] = var_4;
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_34 = (~793);
                    arr_31 [i_0] [i_0] = (arr_7 [i_0 - 1]);
                }

                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    var_35 = (((arr_22 [i_0 + 1] [i_0 - 3] [i_0 - 2] [i_0 + 1]) != (arr_34 [i_0 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_0])));
                    var_36 = (min(var_36, 34844));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_37 = (arr_25 [i_0 - 2] [i_10 + 2]);
                        arr_37 [6] [i_2] [i_2] [i_2] [i_2] = (arr_34 [i_0] [i_2] [i_5] [i_10] [i_11]);
                        var_38 = (((arr_1 [i_10 - 2]) ? (arr_1 [i_10 - 1]) : (arr_1 [i_10 - 1])));
                        var_39 += ((~((var_9 + (arr_3 [i_11] [i_2] [i_5])))));
                    }
                }
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    arr_40 [14] [i_2] [i_5] [i_12] = (arr_10 [i_0] [i_2] [i_5]);

                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {
                        var_40 &= (arr_13 [i_2] [i_2] [i_13]);
                        var_41 = (((~var_7) ^ (arr_9 [i_12 + 1] [i_0 - 3] [i_0] [i_0])));
                        arr_43 [i_0] [i_0] [i_0] [i_0] = (arr_32 [i_0] [i_2] [i_5] [i_5] [i_13] [i_0 - 1]);
                        var_42 = (arr_1 [i_0 - 1]);
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        var_43 = (var_7 + 811);
                        arr_48 [i_0] [i_2] [i_12 - 2] [i_12 + 1] [i_14] = var_12;
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        var_44 = (((arr_9 [i_0 + 1] [i_12 - 1] [i_5] [i_12]) != (arr_9 [i_0 + 1] [i_12 - 2] [i_2] [i_0])));
                        var_45 = 8384512;
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            arr_54 [i_0 - 1] [i_16] [i_16] = var_9;

            for (int i_17 = 4; i_17 < 23;i_17 += 1)
            {
                var_46 = ((-(arr_47 [i_0] [i_16] [i_0])));
                var_47 = (min(var_47, (((((((arr_41 [i_0] [i_16] [i_17] [i_16] [i_16]) ? (arr_35 [i_0] [i_16] [i_16] [i_0 - 1] [0] [i_16] [i_17]) : (arr_45 [i_0] [i_0] [i_17] [19] [i_17])))) ? -13690 : (arr_55 [i_0]))))));
            }
            var_48 = var_13;
        }
        var_49 = (min(var_49, (arr_35 [20] [i_0] [i_0] [i_0] [i_0] [i_0] [9])));
    }
    #pragma endscop
}
