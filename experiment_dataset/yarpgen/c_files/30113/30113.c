/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((var_6 & (arr_8 [i_1]))) < (((min(16662, (((2290102163 < (arr_11 [i_0] [i_3] [i_0] [i_3] [i_0] [i_3] [i_1]))))))))));
                                var_16 = (((((var_10 ? var_2 : (arr_5 [i_0] [i_1])))) ? ((-(min(var_2, var_7)))) : (((2290102167 ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_4]) : 1520278796707505463)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = 36946;
                            var_17 *= var_2;
                            arr_19 [i_6] [i_5] [i_1] [i_1] [i_6] = (((((arr_13 [i_6 + 2] [i_1] [i_2]) ? 1520278796707505463 : (arr_3 [i_6 - 1] [i_6 + 2]))) + (var_0 | var_5)));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_18 += (max(((((1351848887383882275 << (((arr_20 [i_5]) - 35007)))) << (((var_0 > 25194) - 1)))), 28853));
                            var_19 = (min(var_19, (arr_5 [i_2] [i_1])));
                            var_20 = -20616;
                            var_21 = ((((((1 / var_0) << (var_11 - 15971)))) ? ((var_12 >> ((((var_10 ? var_11 : -75721224)) - 3358080581)))) : (arr_16 [i_0] [i_0] [i_2] [i_5] [i_5])));
                        }
                        var_22 = (max(var_22, (((((arr_1 [i_2] [i_0]) && (arr_1 [i_0] [i_0])))))));

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_23 = (min(var_23, ((((((max(var_8, 36946)) >> (((~var_0) + 32118)))) - (arr_21 [i_1] [i_0]))))));
                            var_24 += (((max((var_8 << var_5), 19661)) / var_5));
                            var_25 = (min(var_25, (((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_4 : ((((arr_2 [i_0] [i_8]) <= var_9)))))) ? (((min((arr_13 [i_0] [i_1] [i_0]), (arr_20 [i_0]))) ^ (!var_13))) : (arr_14 [i_5] [i_5] [i_8 - 1] [i_8] [i_8]))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((2290102163 > (((((arr_5 [i_1] [i_5]) && var_9))))))), (((((var_8 ? var_1 : 14228))) ? (arr_6 [i_1] [i_2] [i_8]) : (~var_3)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_26 = (max(var_26, (((~(arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))));
                        arr_28 [i_0] [i_0] = var_9;

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_9] [i_9] [i_0] = (arr_21 [i_9] [i_0]);
                            arr_33 [i_0] [i_1] [i_2] [i_9] [i_2] = (((6796098429061227038 | var_3) ^ var_9));
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_10] &= 9037767339141900064;
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = 1940916884556146852;
                            var_27 *= (((((~(arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? -1940916884556146828 : (arr_1 [i_0] [i_1])));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            arr_40 [i_0] [i_9] [i_2] [i_9] [i_9] |= (((arr_5 [i_12 + 2] [i_12 + 2]) ? 29361 : (arr_4 [i_0] [i_9])));
                            var_28 *= var_0;
                        }
                        var_29 ^= (~var_8);
                        var_30 = (min(var_30, (-45 * var_12)));
                    }
                    var_31 = (((var_0 ? var_0 : var_13)));
                }
            }
        }
    }
    #pragma endscop
}
