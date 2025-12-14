/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_1, ((var_3 ? var_8 : (min(var_13, var_2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_16 = (0 & 1);
                arr_8 [i_0] [i_0] [i_0] [4] = (!var_9);
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                var_17 = ((~((var_10 ? var_12 : var_1))));
                arr_11 [i_0] [i_3] [i_0] = var_2;
                var_18 ^= ((var_6 ? (!-3825314199244311961) : var_14));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [1] = -var_5;
                var_19 = (var_1 ? var_1 : 2147483647);
            }
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                var_20 &= ((var_1 >> (var_10 + 2763373063464630818)));
                var_21 = -20;

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    var_22 -= var_4;
                    arr_23 [i_6 + 1] [i_5] [i_1] [3] [i_0] = var_10;
                    arr_24 [i_0] [i_0] [i_0] = var_0;
                    arr_25 [i_0] [i_1] = var_3;
                    arr_26 [i_0] [i_1] [i_5] [i_5 + 2] [i_6] [i_6] = 1;
                }
                var_23 = ((var_14 ? ((47 ? 93 : 81)) : 0));
            }
            arr_27 [18] = var_5;
            arr_28 [i_1] = (~var_1);

            for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_24 = ((var_5 << (var_13 - 389932365)));
                    arr_34 [i_0] [i_0] [i_0] [i_8] [i_8] = (21 / 63);
                    var_25 = (var_5 ? 1 : 209);
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_37 [i_0] [i_0] [1] [i_0] [i_0] [i_0] = (((var_3 ? var_6 : var_10)));
                    var_26 = (min(var_26, (!18446744073709551590)));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_27 = (~2727420610);
                    arr_40 [i_0] [i_1] [i_7] [i_10] = (~1);
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_46 [i_12] [i_12] [i_12] [i_12] [i_12] = var_14;
                        var_28 = ((var_1 ? var_13 : var_7));
                        arr_47 [2] = (var_3 + var_11);
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        arr_51 [i_0] [i_13] [i_0] = var_9;
                        arr_52 [i_13] [i_1] [i_7] [i_11] [i_7] = var_14;
                        arr_53 [i_0] [i_13] [i_0] [i_0] [i_0] = (!var_11);
                    }
                    arr_54 [15] [i_7] [i_0] [5] [i_11] [i_0] = (var_6 >> (4227858432 - 4227858417));
                }
                arr_55 [i_0] [i_1] = var_11;
                var_29 = (var_8 & 4075186745);
                var_30 = ((2982519987 ? var_4 : (~var_1)));
                var_31 = (1 - 7153070617186960395);
            }
            for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_32 *= ((var_8 * (7070821189069151963 / var_9)));
                arr_59 [3] [i_14] [10] = ((var_11 ? var_11 : var_12));
                var_33 = ((5 ? var_14 : 1726492817));
            }
        }
        var_34 = (max(var_4, ((var_8 ? var_8 : var_10))));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 12;i_15 += 1)
    {
        var_35 = -var_7;
        var_36 = var_4;
    }
    var_37 = 2;
    var_38 = min(-1243575139, 197);
    #pragma endscop
}
