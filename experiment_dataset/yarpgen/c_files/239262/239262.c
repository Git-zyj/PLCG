/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(((!(~var_18)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!(~-529301820)));
        arr_3 [i_0] = (((~(arr_1 [i_0]))));
        var_20 = 26;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 = (((!(((-(arr_1 [i_1])))))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 = (((((!(arr_15 [i_1] [i_2] [i_1] [i_1 - 3] [i_5]))))));
                            var_23 = ((~((~(((!(arr_12 [i_1] [i_1] [i_1] [9] [9]))))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_4] [i_6] = var_5;
                            var_24 = ((!(+-15661)));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [10] [i_1] = ((!(((-(((!(arr_0 [i_1])))))))));
                            var_25 = ((~(~1)));
                        }
                        arr_22 [i_4] [i_4] [i_1] [i_4] = (~var_5);

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((~(((!(((-(arr_5 [6])))))))));
                            var_26 ^= -1001129398;
                            var_27 += (~-22780);
                        }

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_28 = ((-((~((~(arr_25 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_9])))))));
                            var_29 ^= ((~((-(((!(arr_19 [i_1 - 3] [2] [i_1 - 2] [4] [i_3]))))))));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((~(!-var_7)));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            arr_34 [i_1 + 1] [i_1] = var_3;
                            var_30 = (~-var_17);
                        }
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
        {
            var_31 *= ((-(~1)));
            var_32 = ((((~(arr_20 [0] [i_11 + 1] [i_11] [i_11] [10] [10])))));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_33 = (((~(arr_25 [i_1] [1] [i_1] [i_1 - 3] [i_1] [13] [i_1]))));

                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {
                    arr_46 [i_1 - 3] [i_11] [i_1] [i_11] = ((~(!-26958)));
                    var_34 -= (~-1778215009695422649);
                }
            }
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
        {
            var_35 = (((-((-(arr_12 [i_14] [1] [i_1 - 1] [i_1 - 1] [i_1]))))));
            var_36 *= (((-((~(arr_26 [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_1] [i_1]))))));
        }
        var_37 ^= (~1);
    }
    var_38 = ((~((~(~-605171385)))));
    var_39 = (-(+-2446297597372652548));
    var_40 = ((~(~55847)));
    #pragma endscop
}
