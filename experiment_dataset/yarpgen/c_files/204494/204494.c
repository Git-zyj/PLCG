/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~13981209287382516777) ? (min((((var_14 ? var_13 : var_4))), var_8)) : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 = ((-57 ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0])));
            arr_8 [i_0] [17] = var_4;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_11 [i_0] = (((((arr_2 [i_1 - 1]) + 2147483647)) << (((((arr_3 [i_0]) + 24448)) - 31))));
                var_17 = ((((((arr_0 [i_0] [i_0]) ? var_7 : var_2))) && 8160));
            }

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_15 [i_0] = var_10;

                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_18 = (arr_0 [i_4 + 1] [i_0]);
                    var_19 = var_7;
                    arr_18 [5] [i_0] = var_9;
                    var_20 = (((((arr_3 [1]) < (arr_13 [6] [i_0] [1]))) ? 11720447321948572184 : (arr_14 [i_0] [i_1 - 1] [i_3] [i_3])));
                }
                var_21 = 54;
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 = (((arr_20 [i_0] [i_1] [3]) == (!var_0)));
                arr_21 [i_0] [i_0] = (arr_7 [i_0]);

                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [i_0] = (((arr_10 [i_1 - 1] [i_6 + 1]) & (arr_10 [i_1 - 1] [i_6 + 1])));
                    var_23 = var_8;
                    var_24 = (arr_9 [i_0] [i_1 - 1] [i_5]);
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                {
                    var_25 = ((~(arr_13 [i_1 - 1] [i_0] [i_7 + 1])));
                    var_26 = var_7;
                    var_27 = ((-1 ? 1 : 18446744073709551615));
                }
                arr_30 [i_0] [i_1 - 1] [i_0] = (((arr_28 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? var_9 : (arr_28 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                var_28 = (min(var_28, -52));
            }
            arr_31 [i_0] [i_0] [i_0] = (((((0 ? 0 : 56289))) ? ((((arr_2 [i_0]) <= 1))) : 63));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_0] = (arr_9 [i_8 - 1] [15] [i_8]);
            arr_35 [i_0] [i_0] [i_0] = (((arr_32 [1] [1] [1]) - (arr_27 [i_8 - 1] [i_8] [i_8] [11])));
            arr_36 [i_0] = var_5;
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_29 += (arr_38 [2]);
                var_30 = (arr_22 [i_0] [1] [i_9] [i_9 - 1] [i_0]);
            }
            for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
            {
                arr_46 [i_0] [i_0] [i_9 - 1] [i_11 + 3] = ((!(((var_7 ? (arr_14 [i_0] [i_9] [i_0] [i_0]) : var_2)))));
                arr_47 [13] [i_9 - 1] [i_11] [i_0] = var_9;

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_31 = ((((arr_22 [i_0] [10] [13] [10] [i_0]) | 103)));
                    arr_50 [i_12] [13] [i_0] [i_0] [i_9 - 1] [4] = ((var_1 | (arr_27 [i_0] [i_9] [i_9] [i_12])));
                    arr_51 [i_0] [i_0] [i_0] [i_0] = (1 * var_7);
                    arr_52 [i_0] [i_0] [i_9 - 1] [4] [i_12] = (((0 / -1) ? ((var_0 ? var_10 : (arr_0 [i_0] [i_0]))) : ((7680 ? 0 : var_4))));
                }
                var_32 = (((arr_16 [i_11 + 1] [i_9 - 1]) | (arr_16 [i_11 + 3] [i_9 - 1])));
            }
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                arr_56 [i_0] [10] [i_13] = arr_33 [i_0];
                var_33 = (((((var_5 > (arr_25 [i_0] [i_9 - 1] [i_0] [11])))) > (((12 && (arr_12 [i_0] [i_9] [i_9]))))));
            }
            var_34 = (var_5 || (arr_44 [i_9] [i_9 - 1] [i_0] [i_9 - 1]));
        }
    }
    #pragma endscop
}
