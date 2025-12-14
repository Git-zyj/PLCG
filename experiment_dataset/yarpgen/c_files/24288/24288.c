/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = 109;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [1] [i_0] = ((((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_21 = (~var_17);
                    arr_12 [i_3] [i_1] = (arr_9 [i_1] [i_1] [i_1] [i_1]);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 += (arr_6 [i_3]);
                        var_23 = (arr_4 [i_3] [i_2]);
                    }
                    var_24 = (max(var_24, (-1 * 114)));
                }
                arr_15 [12] [i_2] [i_2] = (15 * 1);
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                arr_20 [i_1] [i_2] [i_6] [i_6] = (~var_1);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_25 = (var_17 == var_0);
                            arr_27 [i_7] [i_2] [12] [i_7] [i_8] [i_8] = var_7;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_26 = 124;
                arr_32 [i_1] [i_1] [1] = var_1;
            }
            var_27 = ((1 ? var_7 : (15 && var_15)));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_39 [12] = (((((var_3 ? var_2 : var_2))) ? (!var_3) : ((((arr_24 [i_1] [9] [i_1]) <= (arr_33 [i_1] [1] [i_1] [i_1]))))));
                        var_28 = 109;
                    }
                }
            }

            for (int i_12 = 2; i_12 < 11;i_12 += 1)
            {
                arr_42 [i_1] [i_1] [i_12] [i_1] = ((113 || (arr_23 [i_12 + 2] [i_12] [8] [i_12] [i_12] [i_12 + 2])));
                var_29 = var_14;
                arr_43 [i_1] [i_1] [i_1] = ((((((arr_8 [i_12] [i_1] [i_12] [i_12]) / var_10))) && (arr_25 [i_2])));
                var_30 = -1527;
            }
            arr_44 [i_2] = ((!(var_4 % var_0)));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            var_31 += ((arr_40 [i_1] [i_13]) % -26042);
            arr_47 [i_13] [9] [1] = -var_12;
            arr_48 [1] [i_13] [i_13] = 214;
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            arr_51 [i_1] [i_1] [i_14] = ((var_13 <= ((var_5 ? (arr_40 [1] [7]) : -26042))));
            arr_52 [i_14] = ((!(arr_50 [i_14])));
            arr_53 [i_14] = var_11;
            var_32 = (var_11 ^ var_16);
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_56 [i_1] [i_1] = (arr_38 [i_1] [i_1] [13] [2]);
            var_33 = (var_15 < (arr_8 [i_1] [12] [i_1] [i_1]));
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            arr_64 [i_18] [i_15] [i_17] [i_17] [1] = ((((((arr_63 [i_15] [i_16] [2] [i_18]) ? var_11 : var_18))) || var_0));
                            var_34 += (63 ? ((var_10 ? var_3 : 255)) : 0);
                            var_35 = (~4294967255);
                        }
                    }
                }
            }
            var_36 += ((!(arr_45 [i_1] [i_15] [i_1])));
        }
        /* LoopNest 3 */
        for (int i_19 = 3; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        var_37 *= (((var_17 ? var_12 : 1)));
                        arr_73 [i_1] [i_19 - 3] [13] [i_19 - 3] [i_19] [i_21] = (59905 || var_6);
                    }
                }
            }
        }
    }
    var_38 = (max(var_9, (var_0 & var_15)));
    var_39 += ((var_17 ? (((!(var_2 <= 569174975)))) : (((max(var_10, var_14)) / var_8))));
    #pragma endscop
}
