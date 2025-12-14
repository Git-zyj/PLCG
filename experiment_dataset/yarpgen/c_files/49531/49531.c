/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 *= (((var_4 && ((((arr_0 [i_0] [1]) + (arr_5 [10])))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (arr_0 [i_2] [i_0]);
                        arr_14 [i_1] [i_1] [i_0] [7] = (1 ? 524422272 : 1170235320);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_0] = (1 || 2777412598);
                        var_21 = ((var_15 << (arr_13 [i_4 + 1] [i_0] [i_2] [i_0] [i_0])));

                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_22 *= ((-(arr_16 [i_1] [i_4 + 1] [i_4] [i_4] [i_5] [i_5])));
                            arr_22 [0] [i_5] [i_4] [i_2] [i_0] = (0 >= 0);
                            var_23 = (arr_0 [i_0] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_24 = ((arr_16 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [9] [15]) >= (arr_16 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4]));
                            arr_25 [i_0] [i_0] [i_2] [i_4] [i_6] = (arr_20 [4] [i_1] [i_2] [i_4 + 1] [i_6 - 1]);
                            var_25 = ((2402103489 ? 16383 : 1551796114));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (min(var_26, (arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                            var_27 = (min(var_27, (((arr_19 [i_0] [i_1] [i_1] [i_1] [14] [i_7]) | ((49843 ? 568500982 : -1026573768))))));
                            var_28 = ((2017197907 ? (arr_0 [i_4 + 1] [i_0]) : -2147483647));
                        }
                    }
                    arr_29 [i_2] [i_1] [i_0] = ((arr_2 [i_0]) & var_6);
                    var_29 = (min((((arr_15 [i_0] [i_0] [i_1] [i_2]) ^ (arr_0 [i_0] [i_0]))), (arr_11 [i_0] [i_1] [i_2] [i_2])));
                    var_30 = min((arr_8 [i_2] [i_1] [i_2]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_31 = (min(var_31, (arr_7 [i_0])));
                    arr_32 [12] [i_0] [i_8] = (((((arr_1 [i_0] [i_1]) ? (arr_1 [13] [i_8]) : (arr_3 [i_0] [i_0]))) == (((!(arr_0 [i_1] [i_0]))))));
                    arr_33 [i_0] [9] [i_0] [i_8] = arr_8 [i_0] [i_1] [i_8];
                    arr_34 [i_0] [i_0] = ((2277769398 ? 0 : 1551796114));
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_32 = ((min(var_1, (arr_10 [i_0] [i_0] [7] [i_9 - 1]))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_33 = ((arr_10 [i_10] [i_9] [i_1] [i_0]) > (arr_15 [i_0] [i_0] [i_9] [i_10]));
                        arr_40 [i_0] [i_1] [i_0] = (((arr_12 [i_0]) << ((var_5 ? var_16 : var_5))));
                        var_34 = (min(var_34, (arr_39 [i_10] [14])));
                        var_35 = (arr_11 [i_10] [i_9 - 1] [i_1] [i_0]);
                    }
                }
                arr_41 [i_0] = 65535;
                var_36 = (min(((min((arr_19 [i_0] [13] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [8] [i_0] [i_0])))), (arr_9 [i_0] [i_1] [i_1])));
                arr_42 [i_0] [i_0] = (arr_21 [i_0] [i_1] [i_1] [i_0] [i_0]);
            }
        }
    }
    var_37 = var_13;
    var_38 = var_9;
    #pragma endscop
}
