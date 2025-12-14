/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((arr_2 [i_0 + 2] [i_0] [i_0 + 2]) ? ((((!(arr_3 [i_0]))))) : (-5868062535098926104 < var_9)));
                var_18 = (max(var_18, (((~(((arr_1 [i_0 + 3] [i_0 + 2]) ? (~-31) : (((236 <= (arr_0 [i_0])))))))))));
                arr_4 [i_0 - 1] [i_0 - 1] = (((-473324151 / 11613) ? (arr_1 [i_0] [0]) : (((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : -1012814139))));
            }
        }
    }
    var_19 = (((-1607806286 ? var_3 : var_9)));

    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_20 |= (arr_2 [i_2] [i_2] [i_2]);
        var_21 = (((((-(arr_5 [i_2])))) ? ((var_7 ? var_9 : 473324151)) : (arr_3 [i_2 + 1])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_22 = var_9;
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_18 [11] [i_3 - 1] [i_4] [i_3 + 1] = -215;

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_6 [i_3 - 2]) || (((2147483647 ? 1273171923 : 11613))))))));
                            arr_23 [i_4] [i_4] [i_4] [6] [i_4] = (((arr_0 [i_4 - 4]) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3])));
                            var_24 = ((-723385640 ? (arr_15 [i_6 + 1] [i_6 + 1] [6] [i_6]) : (arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])));
                            var_25 = -1952174366;
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_26 -= ((var_1 ? (arr_20 [3] [i_4 - 1] [i_4 - 4] [i_4] [i_4 - 3] [i_4 + 1]) : (arr_20 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [11] [i_3 - 2])));
                            var_27 = -6376385775774140089;
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_28 -= (arr_21 [i_6 + 1] [i_6 + 1] [i_3] [i_6 + 1] [i_6 + 1]);
                            var_29 = var_5;
                        }
                        for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_30 = (arr_10 [i_10 - 2] [i_10 + 2]);
                            var_31 = (((((-1012814132 ? 743374040 : 3411413844))) ? var_2 : (arr_21 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1])));
                            var_32 = (min(var_32, (((127 ? (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_0 [i_3]))))));
                            var_33 = (max(var_33, var_11));
                            var_34 -= (arr_21 [i_3] [i_3] [i_3] [i_3] [8]);
                        }
                        var_35 = (min(var_35, (((-((1768905380 ? 1542468352 : 1567065046)))))));
                    }
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        var_36 = ((~(arr_27 [i_11] [i_11] [i_11 - 1] [11] [i_11])));
                        var_37 = (arr_15 [i_3] [i_3] [i_3] [i_3]);
                        var_38 = (min(var_38, (arr_22 [i_11 + 1] [i_11 + 1])));
                        var_39 = (min(var_39, 2147483647));
                    }
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        var_40 = (min(var_40, ((((-6376385775774140113 + 9223372036854775807) >> (-29 + 89))))));
                        var_41 = (((arr_13 [i_3 - 1] [i_3] [i_3 + 1]) ? -3 : (arr_12 [3] [i_4] [i_5 + 1])));
                    }

                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_42 = (arr_9 [i_4] [i_4 - 3]);
                        var_43 = (max(var_43, var_15));
                    }
                }
            }
        }
    }
    #pragma endscop
}
