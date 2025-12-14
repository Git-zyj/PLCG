/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 219;
    var_20 = (min(var_17, 255));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = var_3;
                        arr_12 [3] [i_1] [i_2 + 2] [3] [i_3] = 59047;
                        arr_13 [i_3] [12] [i_1 + 3] [i_0] = ((((((var_6 + 2147483647) << (((var_7 + 7869277118216595362) - 14))))) ? ((6494 ? 1023 : var_18)) : var_10));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_17 [i_4] [i_0] = ((~((59047 ? 200 : 15))));
            var_22 = ((var_3 ? (arr_14 [i_4 + 1]) : 241));

            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_23 = (arr_16 [i_0] [i_4 + 2] [i_5]);

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_24 [i_0] [i_4] [i_4] [i_4 + 1] = var_17;

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_24 = (min(var_24, -var_0));
                        arr_28 [i_0] [i_4 + 1] [0] = -4394018098576328052;
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        arr_33 [5] [i_4 - 1] [i_5] [i_6] [i_8] = 26131;
                        var_25 = (max(var_25, (((-30 ? 13663 : -7060844674972353983)))));
                        arr_34 [i_0] [i_8] [i_8 + 1] = 14;
                        var_26 = var_9;
                        var_27 = arr_31 [i_0] [i_8] [i_5 + 1] [8] [8];
                    }
                }
            }
            for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_0] [i_0] [1] = ((241 ? ((35117 ? (arr_15 [i_0] [i_4]) : 255)) : (arr_21 [i_0] [i_4] [i_4] [i_4 + 1] [i_0] [i_4])));
                var_28 = ((-(arr_35 [i_0] [8] [i_9] [i_9])));
                arr_39 [6] |= (((~1) ^ ((var_18 ^ (arr_20 [i_0])))));

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_29 = (min(var_29, (var_1 < var_16)));
                    var_30 = (arr_31 [i_4] [8] [i_4] [i_9] [i_4]);
                    arr_43 [i_0] [i_4 + 1] [i_9] [7] [i_0] = (var_0 ? (arr_16 [i_4] [i_10] [i_4 - 1]) : (arr_15 [i_9 - 1] [i_4 + 2]));
                }
            }
            var_31 -= var_9;
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_32 = ((!-9914) ? -16 : var_10);

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_51 [i_0] = (arr_26 [i_12] [7] [i_12] [i_12] [i_12] [i_12] [i_12]);
                var_33 = 248;
                arr_52 [i_0] [i_11] [i_12] = 1168015222;
                var_34 = (max(var_34, 1));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_59 [i_14] [i_13] [i_12] [i_0] [i_0] = (((2616376304 > 0) ? 14 : -99));
                            arr_60 [i_0] [i_0] [i_12] [i_12] [i_13] [i_14] = (arr_26 [2] [1] [i_12] [i_13 - 1] [i_12] [i_12] [i_13 - 1]);
                            var_35 = var_10;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {

                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    var_36 = (87 == 1);
                    var_37 = var_1;
                }
                var_38 = (max(var_38, ((((var_8 ? 2971658830637135996 : var_5))))));

                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_39 = var_7;
                    arr_68 [i_0] [i_0] [i_0] [i_0] [i_15] = var_9;
                    var_40 = (max(var_40, var_17));
                    var_41 = (((arr_30 [i_0] [i_11] [i_15] [i_15] [i_11]) ? (arr_30 [i_0] [i_11] [i_15] [i_15] [i_17]) : (arr_30 [i_17] [i_15] [i_15] [i_15] [i_0])));
                    var_42 = (max(var_42, (arr_27 [i_0] [i_11] [i_15] [i_17] [5] [i_15] [i_15])));
                }
                var_43 = (min(var_43, (((!var_2) ? ((var_8 ? (arr_48 [i_0] [i_11] [i_15] [i_11]) : var_15)) : (6566 == 65535)))));
            }
            var_44 = 18446744073709551615;
        }
        arr_69 [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? var_3 : var_17));
        var_45 = ((-1445566395 ? 0 : ((61460 ? (arr_42 [i_0] [i_0] [i_0]) : 191))));
    }
    var_46 = 1;
    var_47 |= (((((((var_0 + 2147483647) << (((var_18 + 1397022651) - 17)))))) ? (!32256) : var_12));
    #pragma endscop
}
