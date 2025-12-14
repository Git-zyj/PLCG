/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = var_18;
                                var_20 = var_15;
                                var_21 *= var_5;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = var_1;

                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        var_22 = (min(var_22, -15577));
                        var_23 = ((-(((!(arr_0 [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_0] = (222 && 9);
                        var_24 = (20 ^ var_12);
                    }
                    var_25 &= ((+(((arr_13 [4]) ? (arr_5 [0]) : (arr_7 [i_2] [i_1] [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_26 = (min((-4099364735332138730 / var_8), -var_2));
                            var_27 = (arr_11 [i_0] [i_1] [i_1] [i_8]);
                            var_28 &= ((var_14 / (((arr_22 [i_8] [i_8 - 1] [i_8 + 1]) ? (arr_22 [i_8] [i_8 - 3] [i_8 + 1]) : (arr_22 [i_8 - 2] [i_8 - 1] [i_8 + 1])))));
                            var_29 = (min((((var_6 || var_17) * var_0)), var_17));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    var_30 *= (min((~222), (((1 >= 222) ? (249 / 1368591127823665173) : (240 / var_4)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_34 [i_11] [i_0] [0] [i_0] [9] = (((arr_16 [i_0] [7] [4] [i_9 + 1]) & (((arr_30 [i_0] [3] [i_0] [i_9 + 1] [i_1]) ^ var_4))));
                                var_31 = (min(((((max(var_0, (arr_8 [i_0] [i_1] [i_0])))) ? (var_2 | 18446743798831644672) : (arr_23 [i_10] [i_1]))), ((min((arr_25 [i_0] [i_9 + 1] [8] [i_10]), 1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_32 = (min(var_32, (arr_44 [i_13 - 1] [i_13 + 3])));
                        arr_48 [9] [i_14] [i_13] = (min((((((arr_43 [i_14]) >= (arr_46 [i_12]))) ? (max(var_8, 1)) : (max(var_8, var_14)))), ((max((arr_36 [i_13 + 3] [i_13 + 3]), (arr_39 [i_13 - 3]))))));
                        var_33 = (min(var_6, 22));
                    }
                    var_34 = (min(var_34, var_18));
                    arr_49 [i_12] [i_13 - 4] = (arr_45 [i_12] [10] [i_14] [i_13 - 2] [i_12]);
                    var_35 += ((-1 ? 243 : -1957891701));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 23;i_17 += 1)
        {
            {
                var_36 = (arr_50 [i_17 + 1]);
                var_37 = (min(var_37, ((((-(var_15 + var_3)))))));
                var_38 *= (min(((((arr_50 [i_16]) + var_11))), (max(((max((arr_51 [i_17]), (arr_52 [14])))), (var_17 & var_5)))));
            }
        }
    }
    #pragma endscop
}
