/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = -1;
            var_18 = arr_1 [i_1];
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_11 [i_3] [i_3] = (arr_2 [i_3]);
                arr_12 [4] = -var_16;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_17 [i_0] [i_2] [i_2] [i_2] = 283275257;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_26 [i_0] [i_5] = ((11733913016920503394 ? -11733913016920503390 : 1));
                            arr_27 [i_0] [i_2] [i_0] [i_4] [i_4] [i_6] [i_6] = var_14;
                            var_19 = ((((((arr_4 [i_0] [i_6]) ? 1023 : (arr_10 [9] [9] [i_4])))) ? (arr_0 [i_0] [i_5]) : (((arr_6 [i_0] [i_6]) ? 0 : -1828))));
                            var_20 += arr_21 [i_0] [i_0] [i_6 - 1] [i_6 + 1];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_32 [i_0] [i_2] [i_0] [i_7] &= (-742233073 - 1023);
                            var_21 = ((1 ? (((0 ? -16384 : 243))) : ((14181869187534470782 ? var_6 : (arr_22 [i_8] [i_7] [i_4] [i_4] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_22 ^= (var_14 != 254);

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_23 = arr_14 [i_0] [i_0] [i_9] [3];
                        var_24 = ((6712831056789048239 ? ((1 ? (arr_8 [7] [i_2] [7] [7]) : (arr_0 [i_0] [i_2]))) : ((1 ? 254 : (arr_33 [i_10] [i_11])))));
                        arr_44 [i_11] [i_9] [i_10] [i_9] [i_9] [i_2] [i_11] = (2 ? 28415 : (((arr_1 [i_0]) ? (arr_29 [i_0] [i_2] [i_9]) : 251)));
                    }
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_25 = (28415 == (var_6 && 1));
                    var_26 = var_10;
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_27 = (((1 ? (arr_9 [i_0]) : (arr_10 [i_0] [i_2] [i_9]))));
                    arr_50 [i_0] [i_0] [i_0] [i_0] [9] [i_0] = var_3;

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_28 = (max(var_28, 9496));
                        var_29 = (((arr_13 [i_9]) - (((arr_22 [i_0] [i_2] [i_9] [i_13] [i_13] [i_9] [i_2]) >> (var_9 - 115)))));
                        var_30 = ((37120 << (41070 - 41065)));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_55 [i_2] [i_9] [i_2] = 242;
                        var_31 = (min(var_31, ((1 ? (arr_0 [i_2] [i_0]) : (1 == var_1)))));
                    }
                    arr_56 [i_0] [i_0] [i_13] = (((arr_14 [i_13] [i_9] [i_2] [i_0]) ? 208 : 22024));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_32 = (min(var_32, (((3332180787360636672 ? (arr_24 [11] [11] [i_2] [i_9] [i_9] [i_16]) : 33151)))));
                    var_33 = (max(var_33, 30661));
                }
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_34 = var_13;
                            arr_63 [i_17] [i_17 - 2] [i_9] [i_0] [i_17] = ((!(20 || var_7)));
                            var_35 = (max(var_35, var_6));
                        }
                    }
                }
                var_36 = var_0;

                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    var_37 = (0 ? 10 : var_1);
                    var_38 = (var_2 ? (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_45 [i_19]));
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            arr_75 [i_21] [i_2] [i_0] = 5;
                            var_39 = arr_4 [i_0] [i_2];
                        }
                    }
                }
                arr_76 [i_0] [i_0] [i_0] [i_0] = (((arr_68 [i_0] [i_2] [i_20]) & 65523));
                arr_77 [i_0] [i_2] [i_2] [i_2] = 1;
                arr_78 [i_0] [i_0] [i_0] [i_0] = 1073741823;
            }
            var_40 = ((var_3 ? (arr_45 [5]) : var_4));
        }
    }
    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        var_41 = ((((((arr_79 [i_23]) >= (arr_79 [i_23])))) < ((var_2 ? var_2 : var_8))));
        var_42 = 1;
    }
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 17;i_25 += 1)
        {
            {
                var_43 = (min(((-2329266468224475294 - ((max((arr_83 [i_24]), 19))))), (arr_84 [i_24])));
                arr_88 [i_24] = var_5;
                var_44 = -84;
            }
        }
    }
    var_45 = (max((min(((var_6 ? var_1 : var_10)), var_1)), (~var_4)));
    #pragma endscop
}
