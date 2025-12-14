/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (((((var_2 << (((arr_4 [5] [i_0]) + 9335))))) ? (arr_0 [i_1]) : var_3));
            var_15 = (min(var_15, (!var_5)));
            var_16 = (((arr_1 [i_1] [i_0]) != 50224));
        }
        var_17 = (~var_1);

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_18 = (arr_1 [0] [5]);
            arr_8 [i_2 + 2] &= ((var_12 - (arr_7 [i_2 - 2] [0] [8])));
            arr_9 [i_0] [i_2 - 2] [i_2 - 1] = ((!(((229 ? 17907520129411467121 : -64)))));
            arr_10 [1] [2] = (27263 ? (arr_0 [i_2 + 1]) : var_0);
            var_19 = (min(var_19, (~27247)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 = ((var_12 && (!var_1)));
            arr_13 [i_3] [i_0] [i_0] = var_11;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_21 = arr_7 [i_0] [8] [i_0];
            var_22 = (((arr_15 [i_4]) ? (arr_3 [i_4] [i_4] [i_4]) : (arr_3 [i_4] [1] [i_0])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 8;i_7 += 1)
                {
                    {
                        var_23 = (arr_18 [i_5] [i_5] [i_7 - 3] [i_6]);

                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_24 = 1;
                            var_25 = ((~(arr_2 [i_8])));
                            arr_25 [i_5] [i_8] [i_7 + 1] [i_6] [6] [i_5] [i_5] = (((arr_20 [8] [i_7 + 2] [1] [8]) * var_2));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_26 = (((!-49) && (arr_12 [i_7 + 2] [2])));
                            arr_28 [i_0] [i_0] [i_5] [1] [1] [9] = ((var_7 % (arr_3 [i_0] [i_0] [i_0])));
                            arr_29 [8] [1] [6] [0] [i_0] [i_9] |= -var_5;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_27 = (((arr_12 [4] [3]) / ((~(arr_12 [6] [i_5])))));
                            var_28 &= ((var_5 | ((var_12 ? var_5 : 63))));
                        }
                    }
                }
            }
            var_29 ^= 38289;

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_30 = (((38300 - 38312) * (arr_27 [i_5] [i_13] [i_5] [i_5] [i_5])));
                var_31 = var_9;
                var_32 = ((arr_7 [i_0] [i_5] [i_13]) ? (arr_7 [i_0] [i_5] [i_13]) : var_1);
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
            {
                var_33 = -var_12;
                arr_43 [i_5] [i_5] [9] = (arr_22 [1] [i_5] [i_5] [i_0]);
                var_34 = 66;
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
            {
                arr_48 [i_5] [2] [3] [i_5] = 3003661775;
                arr_49 [i_5] = (((arr_16 [i_0]) ? (arr_16 [i_15]) : (arr_16 [i_15])));
                var_35 |= 130048;
                arr_50 [i_5] [i_5] [i_15] = (!-var_10);
            }
            arr_51 [i_5] [5] [i_5] = (((arr_31 [1] [i_5] [i_5]) ? ((var_11 * (arr_11 [i_0] [i_0] [1]))) : 28672));
        }
        var_36 = ((arr_35 [i_0] [i_0] [i_0] [i_0]) ? ((0 ? (arr_23 [8] [i_0]) : (arr_45 [7] [i_0] [i_0]))) : var_1);
        arr_52 [i_0] = (((~130029) ? ((var_13 ^ (arr_36 [i_0] [i_0] [i_0] [i_0] [7]))) : (arr_32 [2] [6] [i_0] [2])));
    }
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            {

                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_60 [i_16 + 1] [i_17] [i_16] = var_10;
                    var_37 = (arr_53 [1]);
                }
                var_38 = ((((-32760 ? 92 : -1367074327))) || (arr_56 [i_16 - 1] [17]));
            }
        }
    }
    #pragma endscop
}
