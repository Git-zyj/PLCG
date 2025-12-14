/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_0, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [14] [i_0] &= (((((((var_12 ? (arr_4 [7] [i_1 - 1]) : 0))) <= (arr_7 [i_0] [i_1 - 1] [5]))) ? var_2 : ((-0 ? (min(9, (arr_6 [5] [i_1] [i_2]))) : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_4] [i_3] [9] [i_4] = (arr_5 [11] [i_2]);
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_3] [i_3 - 3] [i_4] = (!9);
                                arr_18 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (!var_15);
                                var_18 = (max(var_18, ((((min(((-1546901392460887578 ? (-9223372036854775807 - 1) : 9)), -var_14)) == ((((!(((9223372036854775807 ? (arr_4 [i_2] [i_4]) : var_15))))))))))));
                            }
                        }
                    }
                    var_19 = (max(var_19, var_5));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_20 = ((-(((arr_5 [i_0] [i_1]) + ((255 ? var_11 : var_6))))));
                        arr_23 [i_0] [i_1] [i_5] [i_5] = (~2980718922);
                        arr_24 [i_5] [i_5] [i_1] [i_5] = (min(((-(arr_1 [i_1 - 1]))), (((var_4 / (var_10 && 12))))));
                    }
                    var_21 -= -7;

                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_5] [i_5] [i_5] = 1546901392460887586;
                        var_22 ^= ((((((((arr_3 [3] [i_5]) ? 4294967284 : var_1)) * -9))) ? (((!((((arr_20 [10]) / var_9)))))) : var_4));

                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1 - 1] [0] [i_7] [2] [i_5] [i_7] = (max((max(var_11, ((11 ? 1502278519 : var_6)))), 217));
                            var_23 ^= ((~((~(12 ^ -1546901392460887578)))));
                            arr_32 [i_0] [i_1] [i_1] [i_5] [i_8] [8] = (arr_25 [i_0] [i_1] [i_0] [i_8 - 2]);
                        }
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_24 = -9223372036854775801;
                            arr_37 [i_9] [i_5] [13] [i_9] [i_5] [i_9 - 2] [i_9] = ((((var_8 ? -29327 : var_1)) / -var_0));
                            var_25 &= 1064030554;
                            arr_38 [i_0] [13] [i_5] [i_0] = (arr_21 [i_9 + 1] [i_5] [i_5] [i_5] [i_5] [i_0]);
                        }
                        var_26 &= ((191959205 > ((((var_10 / var_15) > (!var_2))))));
                        arr_39 [i_0] [i_1] [i_5] [16] = arr_15 [12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_43 [i_0] [i_0] [0] [i_10] = (((~-9223372036854775788) <= (~var_1)));
                    var_27 = (max(var_27, (~5993345882519693392)));
                }
                arr_44 [i_0] [i_1] = ((((var_7 ? var_0 : (arr_5 [i_1 - 1] [14]))) << (((((arr_13 [i_1] [i_1 - 1] [1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) & 9223372036854775807)) - 6084580675591216929))));
            }
        }
    }
    var_28 = (max(var_28, var_8));
    var_29 = ((-(((((var_15 ? var_2 : 8713888387374282948))) ? var_0 : var_3))));
    #pragma endscop
}
