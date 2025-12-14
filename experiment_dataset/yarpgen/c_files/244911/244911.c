/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 12));
                var_20 = (min(var_20, 18446744073709551615));
                var_21 = (min(var_21, (((max(var_17, 18446744073709551610))))));
                var_22 = 18446744073709551598;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_14, (max(var_2, (arr_11 [i_2] [i_4] [i_3] [i_5 + 1])))));
                                arr_18 [7] [i_3] [i_4] [i_4] [i_6] = (6 || 2248996394);
                                arr_19 [i_5] [i_5] [0] [i_5] [i_4] [i_5] = (max(var_1, (max(var_12, 12989459705451361122))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_24 -= var_15;
                        var_25 = arr_17 [i_2] [i_2] [15] [i_3] [i_4] [i_7];
                        var_26 = var_16;
                        arr_22 [i_2] [i_3] [i_4] [i_4] = 935818117;
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_26 [i_4] = (max((arr_16 [i_3] [3] [i_8 - 2] [i_2] [3]), 9));
                        var_27 = var_4;
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        arr_30 [i_2] [i_3] [i_3] [i_2] [i_4] [i_2] = (((max((arr_4 [i_9] [i_9 - 1]), (arr_17 [i_4] [i_9 + 1] [1] [i_9 + 1] [i_4] [i_9]))) == (max(18446744073709551614, 18446744073709551594))));
                        arr_31 [i_2] [1] [i_9] [1] [i_4] [i_4] = var_9;
                        var_28 = (arr_14 [i_4] [i_4] [i_4] [i_4]);
                        var_29 = var_6;
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_30 -= (max(30498, 35035));
                            arr_38 [i_11] [i_4] [i_4] [i_10] [14] = (((arr_12 [i_4] [i_10 - 1] [i_4] [i_4]) >> (var_0 - 2693400763)));
                            arr_39 [13] [i_4] = 58;
                            var_31 = (min(var_31, ((max(6, (((var_10 == (arr_34 [i_10] [i_10 - 1] [i_11 + 1] [i_2])))))))));
                        }
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            var_32 -= 7248276604954404855;
                            var_33 = (max(var_16, (arr_29 [i_4] [i_12 - 1] [i_12 + 1])));
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_34 = (arr_6 [i_3] [i_3]);
                            var_35 -= 18446744073709551594;
                        }
                        var_36 -= 1;
                        var_37 = (min(var_37, -1719930278));
                        arr_47 [i_4] = var_4;
                    }
                    var_38 -= var_13;
                    var_39 = (min(var_39, (arr_28 [i_3] [i_3] [i_3])));
                }
            }
        }
    }
    var_40 = var_7;
    #pragma endscop
}
