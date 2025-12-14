/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1384718356610877783;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 - 2] [i_0] [20] = ((((max(var_2, -18898))) ? -18898 : (arr_4 [i_0] [i_0] [i_0])));
                var_20 = (((~(arr_1 [i_1 - 2] [i_1 - 1]))));
                arr_6 [i_0] = (!1152921502459363328);

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_21 = (min((((arr_2 [i_2 + 2] [i_0]) ? (arr_2 [i_2 + 2] [i_0]) : (arr_2 [i_2 + 1] [i_0]))), (((arr_2 [i_2 - 1] [i_0]) ? (arr_2 [i_2 + 1] [i_0]) : (arr_2 [i_2 + 2] [i_0])))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_22 |= (((max((((var_17 != (arr_0 [i_3])))), (-18898 / 43))) & var_11));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_23 = (min(var_23, ((((((((min(26648, 1))) != (min(var_8, -49))))))))));
                            arr_17 [i_0] [i_1] [13] [i_3] [i_0] = 4294967295;
                            arr_18 [i_0] [i_0] [i_0] [i_1] [22] &= (arr_0 [i_0]);
                        }
                        arr_19 [i_0] [i_1 + 1] [i_2 - 1] [i_3 - 3] = (~0);
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_24 += (((((57815 ? 4449 : 18446744073709551615))) ? (((arr_14 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0]) ? (arr_4 [i_2 - 2] [i_1] [i_1 - 1]) : ((var_3 * (arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))) : var_5));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [7] [i_0] [i_6] = ((-(arr_21 [i_2 + 2] [i_1] [i_1 - 2] [i_1 - 2])));
                            arr_25 [i_0] [i_1] [i_1 - 1] [i_1] [i_1] = (~(arr_1 [i_5 + 2] [i_1 - 2]));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1 + 1] [i_2 - 1] [i_0] [i_7] = (((arr_14 [i_1] [i_1 - 2] [i_1 - 1] [i_0] [i_1] [i_1]) || ((max(var_9, -43)))));
                            var_25 *= (((arr_15 [i_2] [i_7]) * (((arr_15 [i_1] [i_1 - 1]) ? (arr_11 [i_2 + 1] [1] [i_2 + 2] [i_5 + 2] [i_7]) : (arr_11 [19] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [0] [i_0] [i_0] = (((max(((2138406534 ? 2138406534 : var_11)), -43)) & -49));
                            var_26 = ((arr_12 [i_1 - 2] [i_1] [i_2 + 1]) ? (((arr_13 [i_1 - 2] [i_1 + 1] [i_2 + 1] [i_5] [i_5 + 2] [i_5]) % 2929633440)) : ((((arr_13 [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_5] [i_5 + 2] [i_8]) - var_15))));
                            arr_34 [i_8] [i_8] [i_0] [i_8] [i_8] = 4294967295;
                        }

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_5] [i_5] [i_5] = arr_13 [i_0] [17] [17] [i_2] [i_1 - 2] [i_0];
                            var_27 = ((!((((arr_13 [10] [i_2 + 1] [i_2 + 2] [i_2 - 2] [i_2] [i_2]) ? (arr_13 [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_13 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 2] [10] [i_2]))))));
                        }
                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            var_28 = (min(var_28, ((max((arr_9 [i_1] [i_1 - 1] [i_2 - 2] [i_5 - 1]), (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))));
                            arr_40 [1] [1] [i_2] [i_2 - 1] [i_0] = (((arr_30 [i_1 - 2] [i_1] [i_2 - 2] [i_5 + 2] [i_0]) ? (((max((arr_30 [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_5 + 1] [i_0]), (arr_30 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_5 - 1] [i_0]))))) : (((arr_30 [i_1 - 1] [i_1] [i_2 - 2] [i_5 + 1] [i_0]) / 4294967295))));
                            var_29 += (arr_1 [i_0] [i_0]);
                        }
                    }
                    var_30 = (max(var_30, (arr_7 [i_0])));
                }
            }
        }
    }
    var_31 = (((max(var_0, (min(var_9, var_12)))) >= (!var_6)));
    #pragma endscop
}
