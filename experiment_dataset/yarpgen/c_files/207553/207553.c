/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] |= 46826;
            var_11 -= (arr_2 [i_0] [i_0 + 2] [i_0]);
            var_12 = (arr_0 [i_1]);
            arr_6 [i_0 - 2] [i_1] = var_8;
            var_13 = 255;
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_14 ^= (((arr_4 [i_0]) ? var_3 : var_10));
            var_15 = (~826156941);
            var_16 = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])));
            var_17 ^= ((var_5 && (((1048575 ? var_4 : (arr_7 [i_2]))))));
            arr_10 [i_2] [i_0 + 1] [i_2] = (~var_5);
        }

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_0 + 2] = 1048559;
            var_18 = ((var_5 ? var_6 : (arr_13 [i_0] [i_0] [i_0])));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_19 = (min(var_19, var_0));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_20 = (max(var_20, -var_0));
                var_21 = (-(((arr_3 [i_0]) | (arr_9 [i_5] [7]))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_23 [i_4] = (arr_12 [i_0 - 1] [i_4] [i_4]);
                    arr_24 [i_0] [i_0 - 1] [i_5] [i_0 + 1] = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])));
                    var_22 = (max(var_22, (arr_11 [i_0 + 1] [i_0 + 1] [i_0])));
                    var_23 = (arr_11 [i_6] [i_0] [i_0]);
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_24 += ((((!(arr_31 [i_7] [i_4])))) * (arr_30 [i_0]));
                        var_25 -= 2;
                        var_26 -= (~var_2);
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_27 = var_4;
                        var_28 = var_6;
                        var_29 = (arr_28 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 2]);
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_30 *= ((~((-(arr_11 [i_0] [i_4] [i_0])))));
                        var_31 -= var_0;
                        var_32 = (max(var_32, 3989412412));
                        var_33 = (24757 - 1048558);
                    }
                    arr_39 [i_0] [i_4] [i_0] [i_0] [i_7] = ((~(arr_38 [i_0] [i_0 + 1])));
                    var_34 = (max(var_34, (((((~(arr_17 [i_7])))) ? (arr_8 [i_0 - 1]) : ((~(arr_7 [i_0])))))));
                    var_35 = (((arr_26 [i_0 + 2] [i_7] [6] [i_0 - 2] [i_5]) << (((arr_9 [i_0 - 1] [i_7]) + 751292307))));
                }

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_36 = (~var_1);
                    var_37 = (arr_36 [i_5]);
                    var_38 = (min(var_38, var_5));
                }
            }
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_39 -= ((40757 ? 1 : 300916130));

            for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                {
                    var_40 -= (!var_4);
                    var_41 = var_6;
                    var_42 = (549755813887 - 23);
                }
                for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                {
                    var_43 = (max(var_43, -2783316930));
                    var_44 |= var_7;
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                {
                    arr_55 [i_0] [i_16] [i_13] [i_16] = var_10;
                    var_45 *= (arr_35 [i_0] [i_12] [i_0] [i_16] [i_0 - 2]);
                    var_46 = -var_8;
                }
                var_47 = var_3;
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {

                for (int i_18 = 4; i_18 < 12;i_18 += 1)
                {
                    var_48 = (max(var_48, (arr_44 [i_0] [i_18 - 4] [i_17] [i_0 - 2])));
                    arr_61 [i_0] [i_0] [i_0] [i_18 - 3] = (((arr_27 [i_0] [i_18 + 1] [i_12] [i_0 + 2] [i_17] [i_0]) ? (arr_59 [i_18 - 2] [i_0 - 2] [i_0 + 1]) : (arr_50 [i_0 - 1] [i_0 + 2] [i_18 - 2])));
                }
                var_49 = var_8;

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    arr_64 [i_19] [i_17] [i_12] [i_19] = (((var_9 ? 1 : 3526974727)));
                    var_50 = (min(var_50, (913232856 || 787245754)));

                    for (int i_20 = 3; i_20 < 12;i_20 += 1)
                    {
                        var_51 *= (((arr_54 [i_17]) ? (arr_48 [i_17] [i_20 - 1] [i_20 - 1] [i_20] [i_20 + 1] [i_20]) : var_5));
                        var_52 = (arr_62 [i_0] [i_19] [i_19] [i_19] [i_20 - 3]);
                        var_53 = ((+(((arr_35 [i_20] [i_19] [i_17] [i_12] [i_0]) ? (arr_3 [i_17]) : (arr_50 [i_12] [7] [i_17])))));
                    }
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        var_54 |= (((((arr_40 [i_0] [i_0] [i_0 + 2] [4] [i_21]) + 2147483647)) << (((arr_48 [i_0] [0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1]) - 1799773119))));
                        var_55 = (((arr_54 [i_19]) % var_9));
                        arr_70 [i_19] [i_19] = (((arr_21 [i_0 + 2]) ? (arr_21 [i_0 - 1]) : -18));
                        var_56 = (arr_40 [i_0] [i_12] [i_0] [i_0 + 2] [i_17]);
                    }

                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        var_57 = (max(var_57, var_2));
                        var_58 = (min(var_58, (~17)));
                    }
                    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                    {
                        var_59 = 246;
                        var_60 = (((arr_11 [i_0] [i_0] [i_0 + 1]) ? var_1 : 3));
                        arr_76 [0] [i_19] [i_17] [i_19] [i_0] = arr_8 [i_0];
                        var_61 = ((!(arr_35 [i_0 + 2] [i_0 + 2] [i_0] [i_19] [i_0])));
                    }
                }
            }
        }
        var_62 = var_0;
    }
    for (int i_24 = 2; i_24 < 11;i_24 += 1) /* same iter space */
    {
        arr_80 [i_24 - 1] [i_24 - 1] = (max((min(5, var_5)), (arr_52 [i_24 + 2] [i_24] [i_24] [i_24] [i_24 + 2] [i_24 + 2])));
        arr_81 [i_24] = var_8;
    }

    for (int i_25 = 2; i_25 < 18;i_25 += 1)
    {
        arr_86 [i_25 - 1] [i_25] &= ((1937674341 ? 6 : 14069));
        var_63 = ((-(((var_1 != (arr_85 [i_25 + 1]))))));
    }
    #pragma endscop
}
