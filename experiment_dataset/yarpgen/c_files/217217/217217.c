/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((616435098 - 81) == var_11));
    var_14 = (((-var_7 <= var_12) ^ (-151089779 != 16184)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 *= ((((-(arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_3] [3] [i_0])))) && (!16184));
                                var_16 = -18428719044150882014;
                            }
                        }
                    }
                    arr_13 [i_1] [1] [i_0] [i_1] = (((((0 ? 24 : 32767))) != (((arr_0 [i_1]) ? (!var_9) : var_12))));
                    arr_14 [i_1] [i_1] [i_1] [i_2] = (!210);
                    var_17 = (min(var_17, (arr_10 [8] [4] [4] [12])));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = ((-(((!(arr_4 [i_1]))))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] = (2045385478 - 1);
                        var_19 *= arr_6 [4];
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_20 = ((-((max((arr_16 [i_2 + 1] [i_6 - 2] [i_2 + 1] [i_7] [i_7]), 1)))));
                            var_21 *= (~16170);
                            arr_22 [i_7] [i_7] [i_1] [i_7] [0] = (3257029377 % 4294967291);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_2] [i_6 + 3] [i_8] = ((0 ? -16051 : 13));
                            var_22 ^= (!16192);
                            arr_26 [i_1] [i_1] [i_1] [i_6] [i_1] [i_2 + 2] [i_0] = (((min(((min(1037937919, 36))), ((-14864 ? var_11 : var_0))))) ? (min(var_2, (arr_19 [i_0] [i_1] [i_1] [i_2] [i_6] [i_1]))) : 1);
                        }
                        arr_27 [i_1] [i_1] = (-89 >= -1619619372);
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_9] = ((-107 ? (var_4 / 244600007) : (18446744073709551612 * 8112)));
                        arr_31 [i_1] [i_2 + 2] [i_1] [i_1] = (!-1590753118);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, -6519));
                        arr_34 [i_0] [i_1] [i_0] [i_2] [i_2] [i_10] = 207401069;
                    }
                }
            }
        }
    }
    #pragma endscop
}
