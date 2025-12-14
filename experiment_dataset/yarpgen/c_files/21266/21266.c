/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = ((((var_4 ? (var_18 * var_0) : var_10))) ? var_0 : var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_3] = (((((max(-1, var_13))) && ((((arr_4 [15] [i_1] [i_0]) ? var_16 : 0))))));

                            for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min(var_6, (max((max((arr_13 [i_0] [i_0] [i_0] [i_3] [11]), 64)), (arr_5 [i_3] [i_2]))));
                                arr_16 [i_2] [i_3] = ((((arr_10 [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2]) >> (((arr_10 [3] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2]) - 28685)))));
                            }
                            for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_0]);
                                var_21 = arr_1 [i_0];
                                var_22 = (arr_13 [i_0] [i_0] [i_2] [i_0] [i_5]);
                            }
                        }
                    }
                }
                arr_20 [5] [5] = 172;
                arr_21 [i_1] [i_1] [5] = (min(((min(-8, (arr_1 [14])))), 4294967295));
                arr_22 [i_0] = 1073741823;

                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_23 = (arr_17 [i_0] [i_1] [i_6] [i_6 - 2] [i_1] [i_6 - 2] [i_1]);
                    arr_25 [i_0] [i_0] [i_6 + 1] = max(0, 10303981653581132520);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_0] [i_8] [i_8] [i_7] [2] = 0;
                        var_24 = (max(10303981653581132520, ((((arr_18 [i_0] [i_1] [i_8] [i_8] [i_7]) ? 551525734 : 4294967291)))));
                        var_25 = (max((max((max((arr_28 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_1] [i_0] [i_7] [i_0]))), (arr_28 [i_8] [i_7] [i_1] [i_0]))), (max((arr_5 [i_8] [i_1]), (max((arr_11 [i_0] [i_0] [i_0] [i_8] [i_0]), var_3))))));
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        arr_35 [i_9] [i_7] [i_7] [i_0] [i_0] = 1073741823;
                        arr_36 [7] [i_0] [i_7] [i_0] [i_0] [i_0] = (arr_28 [i_0] [i_0] [i_0] [i_0]);
                        arr_37 [i_0] [1] [i_7] [i_0] [i_0] [i_9] = (arr_5 [i_0] [11]);
                    }
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_26 = (((arr_44 [i_0] [i_1] [i_7] [i_10] [2] [5]) ? (arr_28 [i_10 + 1] [i_10 - 2] [i_10 - 1] [i_10 + 2]) : (arr_39 [i_0] [i_0] [i_10 + 3] [i_10 + 3])));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = (!-10303981653581132520);
                            arr_46 [i_11] = (((arr_41 [i_11] [i_10 + 4] [i_7] [i_1]) ? (arr_26 [i_10]) : (((arr_23 [i_7]) ? (arr_18 [i_10] [i_10 + 2] [i_10 + 2] [4] [4]) : 1))));
                            arr_47 [i_0] [i_1] [i_7] [i_0] [i_11] = (arr_17 [i_0] [i_0] [8] [3] [3] [i_10 - 2] [i_11]);
                        }
                        var_27 = (arr_14 [i_0] [i_1] [i_10] [i_10] [i_0]);

                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            var_28 = (((((16769024 ? var_14 : (arr_29 [i_0] [i_10 - 1] [i_7] [i_12 - 1] [i_10 - 1] [i_12 - 1])))) ? -1073741844 : (arr_17 [i_0] [i_10 + 3] [i_10 + 3] [i_10] [i_12 + 2] [i_10 + 3] [i_0])));
                            var_29 = 229;
                            arr_50 [i_12] [i_10] [i_10] [i_7] [i_0] [i_0] [i_0] = ((~((var_5 ? 0 : (arr_14 [i_10 + 2] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 + 3])))));
                        }
                        arr_51 [4] [i_7] [4] [i_0] [i_0] [i_0] = (min((max(((((arr_27 [i_7] [i_7]) + 3743441569))), (arr_11 [5] [9] [i_7] [5] [i_7]))), var_2));
                    }
                    arr_52 [i_0] [i_0] [i_0] [i_1] = arr_7 [14] [i_7] [14] [i_7];
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    arr_56 [i_0] [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13]);
                    arr_57 [i_0] [i_0] [i_13] = (max((((arr_48 [i_0] [i_13] [i_1] [i_0] [i_0]) ? (arr_13 [i_13] [i_13] [i_1] [i_0] [i_0]) : (max(var_7, (arr_54 [i_0] [i_0] [i_0]))))), -780737205));
                    var_30 = ((-((min((arr_26 [i_0]), (arr_26 [i_1]))))));
                }
            }
        }
    }
    var_31 = var_16;
    #pragma endscop
}
