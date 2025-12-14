/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((-20826 > var_11) ? (110 || var_10) : var_9))), (max(var_3, var_7))));
    var_13 = (((!var_10) - (min(-4053820342444650884, (~var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_14 = ((~(((arr_7 [i_3] [i_0 - 1] [i_1 - 1] [i_0 - 1]) % var_5))));
                        var_15 = (var_6 > var_8);
                        arr_9 [i_0 + 1] [i_1] [i_0 + 3] [i_1] [i_3] [i_1] = var_6;
                        var_16 = (arr_7 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_17 = ((4053820342444650880 ? -var_7 : (arr_7 [i_0] [i_1 + 1] [i_2] [i_4 + 1])));
                        var_18 = (!var_0);
                        var_19 = ((var_7 / (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                        var_20 += var_7;
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_21 = ((~(~8046526154117839281)));
                        arr_14 [11] [i_1 + 2] [i_1 + 2] = (((((120 ^ (arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))) ? (arr_5 [i_5 - 2] [i_1 - 1] [i_0 + 3]) : var_9));
                        var_22 += (((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 1]) - (100 % -100)));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_17 [i_0 + 3] [i_6] [i_1] [i_6] = (((var_2 & var_2) >> (((max((~var_10), (arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) - 48))));
                        var_23 = (min((((arr_11 [i_1 + 2] [i_0 + 3]) ? (arr_11 [i_2] [i_2]) : var_6)), var_4));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_22 [i_7] = (221 > 20807);
                            arr_23 [i_7] [2] [i_2] [i_7] [i_1] [i_1] [i_0] = (min(20802, 1023));
                            var_24 += (min((((arr_0 [i_0 + 2]) - (arr_0 [i_0 + 2]))), (arr_0 [i_0 + 1])));
                        }
                        var_25 = (max(var_25, (arr_2 [i_0] [0] [i_6])));
                    }
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_26 = (min((min(((max(var_2, 1627452354))), (max(4270787249849734025, var_1)))), ((((-20835 + 2147483647) << (3294002022 - 3294002022))))));
                        var_27 = var_0;
                        arr_27 [i_2] [i_1 - 1] [6] = (-5282479219832886926 * var_1);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_30 [i_9] [i_1] [i_2] [i_1] [i_0] = (~-91);
                        arr_31 [i_9] [i_2] [i_1 + 2] [i_0 - 1] = (arr_25 [i_0 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_9]);
                        var_28 = var_4;
                        var_29 += ((var_6 ? var_4 : (arr_28 [i_9] [i_2] [i_1 - 1])));
                    }
                }
            }
        }
    }
    var_30 = (min((((!((min(var_7, var_4)))))), var_10));
    #pragma endscop
}
