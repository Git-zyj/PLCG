/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = ((var_10 ? (arr_2 [i_0] [i_0]) : 0));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = 1;

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_14 [i_3] [i_2] [i_1] [i_3] = var_6;

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_18 = (min(var_18, (((((18446744073709551615 ? 2147483647 : 14336))) ? (arr_3 [i_0] [i_0]) : (((var_10 ? 1 : 4355)))))));
                        var_19 = (((arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_4]) - (arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_4])));
                    }
                    arr_19 [i_3] [i_1] [i_2] [i_3] = 1;

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_20 *= (arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]);
                        arr_22 [i_3] = (((1 ^ 117) ? 1 : ((-1 ? 1423927913 : var_6))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_26 [i_6] [i_1] [i_2] [i_1] [i_0] &= 18446744073709551612;
                        arr_27 [i_0] [i_6] [i_3] [i_2] [i_1] [i_0] [i_0] &= -var_8;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_21 = ((-(-32767 - 1)));
                        var_22 = ((var_3 ? (arr_16 [i_3 + 1] [i_1] [i_3] [i_3 + 1] [i_3]) : (arr_0 [i_0] [i_0])));
                        var_23 = var_7;
                        var_24 = (((~18446744073709551613) ? var_10 : (arr_1 [i_0])));
                    }
                }
            }

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_34 [i_0] [i_1] [i_8] = (var_14 != var_2);
                arr_35 [i_0] [i_1] [i_8] = ((2147483647 ? (arr_1 [i_0]) : (arr_31 [i_0] [i_0] [i_0])));
                arr_36 [i_1] [i_0] = var_8;

                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    var_25 = 16;
                    arr_40 [i_0] |= (((!4) ? ((~(arr_16 [i_0] [i_1] [i_8] [i_9] [i_1]))) : -var_1));
                    var_26 = var_9;
                    var_27 = var_1;
                    arr_41 [i_1] [i_9] = ((7 ? 0 : 1494203384));
                }
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        arr_48 [i_11] [i_10] [i_8] [i_8] [i_1] [i_0] [i_0] = 112;
                        var_28 |= (var_2 ? 2147483621 : 18446744073709551611);
                        arr_49 [i_0] [i_1] [i_8] [i_1] [i_11 - 1] = (arr_30 [i_11] [i_11] [i_11 - 1] [i_11 - 2] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_29 = ((0 ? 1 : ((var_2 ? 5 : var_1))));
                        var_30 = (min(var_30, (arr_32 [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_54 [i_0] [i_1] [i_8] [i_10] [i_13] = ((var_2 ? ((4070074768 ? (arr_44 [i_10] [i_8] [i_1] [i_0]) : (arr_53 [i_0] [i_1] [i_8] [i_10] [i_13]))) : (arr_13 [i_8] [i_13])));
                        arr_55 [i_8] [i_8] [i_8] = var_16;
                        var_31 = var_6;
                    }

                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        var_32 *= (((arr_11 [i_0] [i_14 - 1] [i_10] [i_10] [i_14] [i_0]) ? 7 : (arr_18 [i_0] [i_14 + 1] [i_8] [i_10] [i_14])));
                        arr_59 [i_0] [i_1] [i_1] [i_1] [i_8] [i_10] [i_14] = var_1;
                        arr_60 [i_14] [i_10] [i_8] [i_1] [i_0] = (arr_17 [i_10] [i_14 - 1] [i_0]);
                        var_33 = (max(var_33, 127));
                    }
                }
                arr_61 [i_0] [i_1] [i_8] = (arr_32 [i_0]);
            }
            arr_62 [i_0] [i_1] [i_1] &= ((var_5 ? 19 : var_8));
        }
        arr_63 [i_0] = ((1 ? 2147483640 : 1149119211));
        var_34 = (((arr_44 [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_9));
        var_35 = (~var_3);
        var_36 = (arr_31 [i_0] [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_37 = (((32767 || var_7) ? var_13 : 3221225472));
        arr_66 [i_15] = (((arr_3 [i_15] [i_15]) == 1));
        arr_67 [i_15] &= 38;
        var_38 &= (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15]);
    }
    var_39 &= (min(1, 549755813887));
    #pragma endscop
}
