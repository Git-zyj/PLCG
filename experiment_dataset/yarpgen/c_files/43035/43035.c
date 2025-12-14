/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = var_3;
        arr_4 [i_0] = ((~(((arr_1 [i_0]) ? -8192 : var_4))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_12 = (max(var_12, var_10));
        var_13 = ((!(arr_7 [i_1 - 2] [i_1 - 2])));
        var_14 = -1021;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 |= ((((((!var_4) ? ((var_9 ? (arr_10 [i_2] [9]) : var_5)) : (arr_6 [i_2])))) ? (arr_8 [i_2]) : 10));
        var_16 = (~1021);
    }
    var_17 *= (~122);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_3 + 4] = (((arr_14 [i_3 + 2] [i_4 + 1]) >> (-21532 + 21543)));
            var_18 += (~8191);
            var_19 *= 250;
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                var_20 = ((1035 ? var_10 : var_7));

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_21 = -1022;
                    var_22 = ((~(69 <= -997)));
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_32 [i_10] [i_8] = (arr_22 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                            var_23 += (((arr_11 [i_3 + 1]) / (arr_11 [i_3 + 2])));
                            var_24 = (((arr_28 [7] [i_5 - 1] [i_8] [i_3 + 1]) & 229));
                        }
                    }
                }
                var_25 &= (((((61 ? 1020 : var_0))) ? ((var_8 ? var_0 : (arr_11 [2]))) : (arr_24 [i_3 + 2] [i_5 + 1] [i_5 + 1])));
                var_26 = arr_24 [i_3] [18] [i_3];
                var_27 = (min(var_27, (!-8681)));
            }
            arr_33 [i_3] [i_3] = (((((-1021 ? (arr_17 [i_3] [6]) : 1035))) ? (((var_9 + 2147483647) << (((-7555 + 7561) - 6)))) : (((arr_16 [i_3] [13] [13]) ? (arr_21 [i_3]) : 5645))));
        }
        for (int i_11 = 3; i_11 < 20;i_11 += 1)
        {
            var_28 = (min(var_28, (-1021 ^ 1848)));
            var_29 = (((~10173) >= (!145)));
            arr_36 [i_3] = ((((((arr_25 [10] [10] [11] [i_11]) ? 1042 : 177))) ? ((210 ? var_5 : (arr_14 [i_3] [16]))) : (arr_31 [i_3] [i_3] [i_3] [i_11])));

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_39 [i_3] [17] [17] = ((var_3 ? (arr_38 [2] [i_12]) : (arr_29 [i_3 - 1] [i_11 + 1])));
                arr_40 [i_12] [i_3] = ((128 ? (arr_18 [i_11] [i_11]) : (arr_18 [i_3] [i_3])));
                arr_41 [i_3] [i_11] [i_12] = (!28);
                var_30 = (((0 / var_1) ? (((arr_26 [i_3] [9] [18]) ? 21251 : 210)) : (arr_37 [i_11 - 3] [i_11] [i_11])));
                var_31 = ((39 ? 53 : 240));
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_32 = (min(var_32, (arr_35 [i_3 + 1])));
                var_33 = (((arr_31 [i_3 + 1] [i_3 + 3] [i_3 + 4] [i_3]) ? (arr_31 [i_3 + 3] [i_3 + 4] [i_3 + 2] [i_3]) : var_4));
                arr_44 [i_3] [i_3] [i_3] [i_3] = ((12 ? var_1 : -8188));
            }
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_34 = ((~(arr_13 [i_3] [i_14 + 3])));
                    var_35 = var_1;
                    var_36 = (((arr_38 [i_3 + 2] [i_11 - 2]) & var_3));
                }
                arr_50 [i_14] [i_14] [i_11] [i_14] = arr_16 [i_3] [18] [18];
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_37 += (arr_47 [i_3] [i_11 + 1] [19] [i_3 + 3]);
                var_38 = (arr_14 [i_3 + 1] [i_11 - 2]);
                arr_53 [i_3] [i_11] [i_3] [i_16] = (((((arr_31 [i_3] [10] [7] [i_16]) ? 28312 : (arr_22 [i_3] [i_3] [7] [i_11] [6] [i_16]))) - var_0));
                arr_54 [i_16] [17] = 29636;
            }
        }
        arr_55 [i_3] [i_3] = (-var_5 >= 16);
    }
    #pragma endscop
}
