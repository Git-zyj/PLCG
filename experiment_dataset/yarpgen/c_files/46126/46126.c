/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((!(((~(arr_9 [1] [i_0] [i_0] [i_2]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = ((+(((arr_15 [i_0] [i_0] [i_1] [i_0] [i_4] [i_1] [i_4]) ? (arr_15 [i_3] [i_1] [i_4] [i_3] [i_4] [i_2] [i_0]) : (arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_4])))));
                            arr_17 [i_2] [i_2] [i_2] [i_1] [i_2] = ((((((arr_8 [i_0] [i_1] [i_1]) ? var_15 : var_1))) ? 18593 : -12));
                            arr_18 [i_4] [i_4] [i_2] [i_2] [i_2] [i_0] [i_0] = (~var_15);
                        }
                        var_17 = ((-11 ? ((var_3 - (arr_0 [i_2]))) : 81));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_18 = min(-1898744603, -18601);
                        var_19 += (1 || 1);
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_20 = (min(var_20, (((var_15 != ((min((arr_22 [i_6 + 2] [i_6 - 2] [i_6 + 1] [i_6 - 1]), (arr_22 [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 - 2])))))))));
                        arr_24 [i_6] [i_2] [i_0] = (arr_22 [i_0] [i_0] [i_2] [i_6]);
                        arr_25 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] = var_0;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((min((448306772 / var_2), (var_15 / 32386)))) ? (((arr_7 [i_2]) ? (arr_7 [i_2]) : 5743152985813740709)) : (arr_13 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1])));
                        var_21 = (((-1898744590 + 2147483647) >> (((((-9778 + 2147483647) << (var_5 - 28945))) - 2147473849))));
                        var_22 = arr_2 [i_1];
                        var_23 = 4294967295;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {

                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_24 -= (((((!var_8) || 268435455)) && ((((!-18590) ? var_13 : (((arr_41 [i_8]) ? 1898744605 : (arr_12 [i_8]))))))));
                                var_25 = (max(var_25, (((((-1898744601 || ((!(arr_12 [i_10]))))) ? var_13 : (((arr_16 [i_8] [i_9] [i_10] [i_11] [20]) - (((2047 ? 54 : -1557583898))))))))));
                                arr_43 [i_8] [i_9] [i_10] [i_11] [i_11] = (arr_4 [i_10] [i_9]);
                                var_26 += ((!((!(arr_31 [i_10] [i_10] [i_10])))));
                                var_27 = (max(var_27, 65535));
                            }
                            arr_44 [i_11] [i_10] [i_9] [i_8] = (min((max((var_10 - 26219), (((arr_6 [i_8] [i_8]) ? (arr_35 [i_8] [i_9] [i_10] [i_11]) : -12)))), -9778));
                            var_28 = ((var_12 == ((((var_10 & var_3) == -var_4)))));
                        }
                    }
                }
                var_29 &= (((max((405774826 * 1), (arr_29 [5]))) > ((((((min(var_1, var_13))) && -var_7))))));
                var_30 = (max(var_30, (((((min(1557583901, var_15))) && (arr_16 [i_8] [i_8] [i_8] [i_8] [i_9]))))));
            }
        }
    }
    #pragma endscop
}
