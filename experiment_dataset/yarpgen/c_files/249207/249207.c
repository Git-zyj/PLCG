/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max((65535 * 1073741823), ((3221225479 ? var_12 : var_1)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = arr_0 [i_0];

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [14] [i_1] [i_1] = ((1 ? (var_0 >> 0) : (arr_0 [i_0])));
                arr_8 [i_1] [i_1] [i_1] = var_1;

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        var_16 = 9223372036854775807;
                        var_17 = var_6;
                    }
                    arr_14 [i_1] [14] [4] [14] = 1;
                    arr_15 [i_1] [15] [12] [12] = ((((var_11 - (arr_9 [5] [i_2] [18] [i_2] [i_2]))) + (arr_3 [i_0] [i_1] [i_0])));

                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_18 = ((~((4294967295 ? (-32767 - 1) : 7))));
                        var_19 = (max(var_19, var_6));
                        arr_18 [i_0] [i_1] [10] [i_2] [i_3] [i_0] |= -15;
                        arr_19 [3] [12] [7] [8] [i_1] = ((var_8 / (((-(-127 - 1))))));
                    }
                    arr_20 [i_0] [i_1] [i_1] [i_3] = (var_13 - 1);
                }
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = 0;
                        var_20 += 1;
                    }
                    var_21 += arr_1 [i_0];

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_0] [14] [i_0] [i_1] = (-127 - 1);
                        arr_31 [5] [5] [i_1] [i_6] [i_6] [17] [i_1] = ((var_10 ? -12 : 249));
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        var_22 = (((arr_12 [i_0]) ? (16383 % 4294967280) : ((((arr_2 [i_1] [i_2]) | -16)))));
                        arr_34 [15] [i_1] [i_2] [i_2] [i_9 + 4] = 8;
                    }
                    arr_35 [i_0] [1] [i_1] [15] = var_11;
                }
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_39 [i_0] [i_0] = 65535;
            arr_40 [i_0] [1] = ((((!(-127 - 1)))));
            var_23 = (arr_25 [i_0] [9] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_24 = (min(var_24, (((!(arr_37 [i_11 + 2] [i_11 + 2] [i_11 + 2]))))));
            arr_44 [i_0] [0] [i_0] = (((arr_37 [i_0] [i_0] [i_0]) >> var_4));
        }
        for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_25 = (max(var_25, ((min(124, ((((arr_29 [9] [9] [11] [11] [9] [i_0] [i_0]) < ((var_7 ? -1 : 1073741830))))))))));
            var_26 -= ((-0 ? (max((-127 - 1), ((var_12 ? (arr_4 [1] [i_0] [i_0]) : var_0)))) : (((~(arr_16 [i_12] [3] [0] [4] [4] [i_12 + 2]))))));
            arr_48 [11] [0] [i_12] = 16383;
        }

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_53 [18] [i_13] = (arr_51 [7] [i_13]);
            arr_54 [4] [4] [i_13] = (arr_6 [i_0] [8] [i_13] [i_13]);
            var_27 &= (2 != 0);
        }
    }
    var_28 = var_8;
    #pragma endscop
}
