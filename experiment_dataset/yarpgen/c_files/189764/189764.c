/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-57707 ? var_11 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((min(-2304253410, 119)) - ((((!(((17187 ? var_12 : 56393)))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] [i_1] = var_7;
                        var_16 = ((168 <= (arr_9 [i_1] [i_1] [i_2] [i_1] [i_1])));
                        var_17 += (arr_9 [i_0] [5] [i_1] [i_2] [i_3]);
                        var_18 = (max(var_18, (((17187 * (((arr_5 [i_0] [3] [i_2] [i_3]) ? (arr_1 [3] [i_2]) : 103)))))));
                        arr_11 [i_0] [4] [i_1] [i_0] = 53056;
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (max(var_19, var_9));

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_20 = 3561553493;
                            var_21 += (max(36171, ((var_7 ? ((var_4 ? var_9 : var_10)) : var_3))));
                            arr_18 [6] [i_1] [i_4] [11] [i_1] [i_1] [i_0] = ((((!(((-1 ? (arr_15 [i_0] [7]) : 1465916417))))) ? (min(var_0, ((179 ? var_13 : (arr_6 [i_1]))))) : ((((957860654 ? 178 : 29343))))));
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_22 = (arr_2 [i_4 + 1]);
                            arr_21 [i_1] [i_1] [i_1] = 53076;
                        }
                        for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_23 = (min(var_13, (((arr_22 [i_7] [10] [i_7] [8] [i_7 + 1] [8] [i_7]) ? 3561553493 : var_8))));
                            var_24 -= ((((((arr_12 [i_4 - 1] [i_7 - 2] [i_7 - 3] [i_7]) ? 1990713885 : 87))) ? (arr_12 [i_4 - 1] [i_7 + 1] [i_7 - 1] [11]) : ((var_13 ? (arr_12 [i_4 - 1] [i_7 - 3] [i_7 + 1] [i_7]) : (arr_23 [i_1] [i_4 + 1] [i_2] [9] [i_7])))));
                            var_25 |= ((-(((arr_14 [i_4 - 1] [i_1] [i_7 - 1]) ? (arr_14 [i_4 + 1] [i_0] [i_7 - 2]) : 255))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_26 = ((((min(var_4, (((var_0 ? (arr_4 [i_2] [i_2]) : 52631)))))) && (((var_1 ? (~9) : (arr_3 [i_4 - 1] [i_4 + 1] [i_4 - 1]))))));
                            var_27 = var_14;
                            var_28 = 53975;
                            var_29 |= (((((var_8 ? var_2 : ((max(var_7, var_1)))))) / (max(3561553496, 51016))));
                        }
                    }
                    var_30 = (min(var_30, var_2));
                }
            }
        }
    }
    var_31 = (var_12 >= -3070839404);
    #pragma endscop
}
