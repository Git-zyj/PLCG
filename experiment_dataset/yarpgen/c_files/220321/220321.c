/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((~((+((max((arr_3 [i_0 - 1]), 77))))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_17 [i_0] [i_4] [4] [i_3] [10] = (min(((min(4, (min((arr_15 [i_0] [i_0] [i_4 + 2] [i_0] [i_4 + 3]), 247))))), var_11));
                            var_16 = min((min(var_13, 236)), (((!(arr_2 [i_0 + 1])))));
                            arr_18 [i_0 + 2] [i_4] [i_2] = ((-((min((min(var_13, 28)), (max(248, (arr_4 [i_0] [i_1 + 1] [5]))))))));
                        }

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_17 = (min(((-((max(var_13, 247))))), ((min((arr_15 [i_0] [i_1 + 2] [i_2] [i_3] [i_5 - 1]), 4)))));
                            var_18 |= (((-(arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_0]))));
                        }
                        var_19 = ((max(((max(var_6, 8)), -4))));
                        var_20 = min(100, 100);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_21 = (min(5, ((min(251, (min(var_10, (arr_12 [i_0 + 1] [i_1]))))))));
                        arr_23 [i_6] [i_1] [9] [i_6] = (min((max(((min(250, 167))), ((~(arr_12 [i_0] [i_0]))))), ((min((arr_6 [i_1 - 2] [i_0 + 1]), (arr_6 [i_1 + 3] [i_0 + 2]))))));
                        var_22 *= (min(((max((arr_1 [i_0 - 1]), 220))), -0));

                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [i_6] [i_6] = (min(-252, -90));
                            var_23 = ((-(~11)));
                            var_24 = ((!((max(180, 250)))));
                            arr_27 [i_2] &= min((max(var_0, var_5)), (max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_7 + 2] [i_0] [i_0 + 2]), var_11)));
                            var_25 = (!5);
                        }
                        var_26 = min((min((min(var_14, 232)), (min(var_7, 74)))), (min((min(185, 186)), 8)));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = (min(-120, ((min(var_9, (max((arr_5 [i_0] [i_1] [i_1]), (arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [i_8]))))))));
                        arr_30 [i_8] [i_1] [i_2] = (min(-8, 203));

                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            var_28 = ((+((min((arr_9 [i_9 + 1] [i_1 + 4] [i_1 + 2] [i_0 + 1]), var_11)))));
                            var_29 = (~-6);
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_30 = ((~((min(254, (arr_25 [i_1 + 2] [i_8] [10] [10] [i_8] [i_8]))))));
                            arr_35 [i_0] [i_0] [i_8] [i_0] = (min(((~(arr_15 [i_0] [i_0 - 1] [i_1 + 4] [i_1] [i_1 + 4]))), ((max((arr_15 [i_0] [i_0 + 2] [i_1 - 2] [16] [i_1 - 1]), var_11)))));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_31 = (!-var_5);
                            var_32 = ((~(((max(155, 253))))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_33 = min(67, 124);
                            var_34 = max(27, 0);
                        }
                        var_35 *= (min(((max(var_6, var_9))), (arr_11 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0])));
                    }
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        var_36 ^= max(245, 145);
                        var_37 = (min(((min(167, var_13))), (~var_3)));
                        arr_44 [i_2] [i_1] [i_0] = (min(-var_6, (~111)));
                        arr_45 [i_0 + 2] [i_1 + 4] [i_2] [i_13] = (min(((max((min((arr_1 [i_0]), 156)), 127))), (min(var_5, 0))));
                    }
                    var_38 = ((-((min(var_5, (arr_22 [i_0 + 1] [i_0 + 1]))))));
                    arr_46 [i_0] [21] [i_0] [i_2] = ((-(arr_5 [21] [i_0 + 2] [i_2])));
                }
            }
        }
    }
    var_39 = ((-((-((max(216, var_11)))))));
    #pragma endscop
}
