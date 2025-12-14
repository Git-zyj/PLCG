/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] = (~(((var_6 / -2147483638) ? (min(var_5, (-2147483647 - 1))) : (arr_5 [i_2] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [2] [i_1] [2] = (-(arr_2 [i_0 + 1]));
                                arr_14 [8] [8] [i_2] [i_2] [i_2] = ((-(arr_4 [i_0])));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = var_3;
                                arr_16 [i_4] [i_1] [i_1] [i_4] [i_1] [i_1] [i_0] = ((((((((arr_0 [i_4] [i_0]) ? var_9 : 0)) > (2147483620 / var_3)))) >> ((((-(((-1 + 2147483647) >> (arr_1 [i_0]))))) + 1073741830))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_2 + 1]) ? var_8 : ((((((arr_10 [i_5] [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]) ? var_9 : 1))) ? (max(var_0, 2147483620)) : (var_5 | var_9)))));
                        arr_20 [i_0] [i_0] [i_2] [i_0] = var_4;
                    }
                    for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_25 [i_0] [i_6] [i_0] [i_6] [i_0] = (((((-25014 | (arr_23 [i_6] [i_2] [i_2] [i_6])))) ? (arr_5 [i_2] [i_0 + 1] [i_2 - 1]) : ((var_5 ? (max(-2147483604, 25013)) : -25024))));
                            arr_26 [i_7] [i_7] [i_7] = max((((var_6 ? (arr_3 [i_6 + 2]) : (arr_18 [i_0] [i_0] [i_0] [i_6 + 1])))), (arr_17 [i_1]));
                        }

                        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_8] = ((((max(var_3, (((arr_27 [i_8] [i_8]) / var_3))))) ? 25023 : (((arr_18 [i_0] [i_0] [i_0] [i_8]) & (~var_7)))));
                            arr_31 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6] [i_0] = ((-(((arr_10 [i_6 - 1] [i_2 + 1] [i_2 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_10 [i_6 - 4] [i_2 - 1] [i_2 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_10 [i_6 + 2] [i_2 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_9] [i_9] = ((+(max((arr_29 [i_9] [i_0 + 1] [i_2 - 1] [i_6 - 1] [i_6 + 1]), -64))));
                            arr_36 [i_0] [i_0] [i_0] [i_6] [i_0] [i_9] = var_5;
                        }
                    }
                    arr_37 [i_0] [i_1] [i_1] [i_0] = (min(((~(arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_2]))), (((arr_12 [i_0 - 1] [i_0] [i_0] [i_2 + 1] [i_2] [i_2]) ? (arr_34 [12]) : (-2147483647 - 1)))));
                }
                arr_38 [i_0] [i_0] = var_1;
                arr_39 [i_0] [i_0] [i_0] = ((~(((((var_9 ? (arr_17 [i_0]) : (arr_6 [i_0] [i_0] [i_0])))) ? ((min((arr_34 [2]), (arr_23 [6] [6] [6] [6])))) : (!var_2)))));
            }
        }
    }
    var_10 = ((((max(var_5, -64)))) ^ ((((var_3 ? 18446744073709551598 : -1)) ^ var_7)));
    var_11 = (var_9 + var_2);
    var_12 = var_0;
    var_13 &= ((var_5 ? 0 : (min(((2147483641 ? var_1 : -25024)), var_8))));
    #pragma endscop
}
