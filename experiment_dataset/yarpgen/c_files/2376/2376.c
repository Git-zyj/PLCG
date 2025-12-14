/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_0 [i_0] [i_1]);
                var_18 = (((((~(((arr_3 [i_0] [i_1]) ? 2731 : (arr_1 [i_1])))))) ? (max((((arr_2 [i_1]) + 0)), (arr_1 [i_0]))) : var_2));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = (min((!-92), (min((max((arr_12 [i_4] [i_3] [i_3] [i_2]), (arr_10 [i_2] [i_2]))), (arr_0 [i_4 + 1] [i_3 - 1])))));
                    var_19 = -0;
                    arr_16 [i_4] [i_3] [i_3] [i_2] = (arr_2 [i_2]);
                    var_20 = (max(var_20, (((15899097729705460890 >= (((0 << (32767 - 32754)))))))));
                }
            }
        }
    }
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_22 = (((arr_20 [i_5] [i_5] [i_6]) ? 6328178771305016429 : ((max(4294967295, ((((arr_19 [i_5] [i_5] [i_6]) || (arr_20 [i_5] [i_5] [i_6])))))))));
                arr_21 [i_6] [i_6] [i_6] = var_8;

                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_23 |= (min(0, (22348 != 4294967295)));
                    var_24 = (((!((((arr_18 [i_5] [i_6]) * var_15))))));

                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_25 = (~15167719678468539868);
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_7 + 1] [i_8] |= (max(-32767, -0));
                        arr_27 [i_5] [i_6] [i_6] = (arr_17 [i_5]);
                        arr_28 [i_6] [i_6] [i_6] [i_8] = -5085099883521410717;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_26 *= (8367026394033718833 / 4128768);

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            arr_33 [i_6] [i_6] [i_7] [i_7 + 1] [i_10] = ((!(arr_22 [i_5] [i_9] [i_6])));
                            var_27 = -64885;
                        }
                        arr_34 [i_5] [i_6] [i_6] = (arr_29 [i_5] [i_5]);
                    }

                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        var_28 = ((15074 ? 1849190772 : 54659));
                        var_29 *= (arr_30 [i_5]);
                        var_30 -= (((arr_25 [i_5]) | (((-(arr_24 [i_5] [i_7] [i_7 + 2] [i_11 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_31 = (((var_7 ? (arr_19 [i_5] [i_5] [i_5]) : (arr_30 [i_6]))));
                        var_32 += (((arr_19 [i_7 + 2] [i_7 + 1] [i_7 + 1]) ? (arr_17 [i_7 - 1]) : var_15));
                    }
                }
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    arr_42 [i_6] = (arr_25 [i_6]);

                    for (int i_14 = 2; i_14 < 17;i_14 += 1)
                    {
                        arr_45 [i_6] [i_13] = (((((arr_37 [i_14 + 1] [i_14] [i_14 - 1] [i_14]) ? (arr_39 [i_14 + 1] [i_14]) : (arr_37 [i_14 - 2] [i_14] [i_14 + 1] [i_14 + 1]))) - (((arr_37 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 2]) * (arr_37 [i_14 + 1] [i_14] [i_14 - 1] [i_14 + 1])))));
                        arr_46 [i_5] [i_5] [i_13] [i_14] [i_6] [i_6] = (max(7, 0));
                        var_33 |= ((min(0, 7)));
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_50 [i_6] = (arr_38 [i_5] [i_6] [i_6] [i_13] [i_6]);
                        arr_51 [i_6] [i_6] [i_6] [i_15] = ((-((min(var_8, (arr_35 [i_5] [i_6] [i_5] [i_13] [i_5] [i_13]))))));
                    }
                    var_34 &= ((2125734335 << (7916 - 7916)));
                    arr_52 [i_5] [i_5] [i_13] [i_6] = (((((!var_11) && (127 - var_2))) ? (min(847495108, 109)) : (!var_7)));
                }
                var_35 -= ((-((((arr_18 [i_5] [i_5]) || ((((arr_44 [i_5] [i_5] [i_6] [i_5]) - var_15))))))));
            }
        }
    }
    #pragma endscop
}
