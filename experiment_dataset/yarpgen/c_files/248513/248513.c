/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_12 && (((var_15 ? var_9 : (1022 && var_10)))))))));
    var_17 = (max(var_17, var_14));
    var_18 = (min(var_18, ((min(var_9, (max((((var_1 ? -1039 : var_2))), (min(var_6, 1852110585)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 |= (min((arr_9 [1] [i_1] [i_3] [i_3]), (((((arr_5 [i_1] [i_2 + 2] [i_4]) && -123)) ? 0 : 60910))));
                                arr_13 [i_4] [i_4] [i_2] [i_3] = 1365226505;
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((min(1365226505, var_2)))) && (((((max(92, (arr_4 [i_1] [i_1])))) ? (arr_5 [i_0] [i_1] [i_2 - 1]) : (arr_10 [i_4] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                                var_20 = (min(var_20, ((min((((((arr_7 [i_0] [i_0] [i_2] [i_3]) ? 0 : var_11)) & (((min(123, -10527)))))), (max(var_6, ((var_13 ? -994131461 : (arr_12 [i_0]))))))))));
                                var_21 = (arr_0 [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((min(1, 1))))));
                            var_23 = ((((((arr_11 [i_0]) ? ((min(65535, var_8))) : -124))) * (((arr_7 [i_6] [i_6] [i_5 + 2] [i_5 - 1]) ? (arr_7 [i_6] [i_5] [i_5 - 2] [i_5]) : var_3))));
                            arr_19 [i_5] = ((var_9 % (min(var_11, (~76)))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_6] = ((((((var_4 && var_14) ? (((!(arr_11 [i_0])))) : ((((arr_9 [i_6] [i_5] [i_1] [9]) && (arr_8 [i_6]))))))) ? 16 : (((arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? ((min((arr_17 [i_6] [i_1] [i_6] [i_1] [i_1] [6]), var_4))) : 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_24 = (min(((((((arr_26 [i_0] [6] [i_0] [i_0]) ? -16 : var_8)) + -16))), (min(245, var_0))));
                            arr_27 [i_7] [i_7] = (arr_11 [i_0]);
                            var_25 = var_4;
                        }
                    }
                }
                var_26 = ((((((var_11 % 123) ? (-1365226506 % 5143721800356057891) : 0))) ? 266338304 : 29805));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            {
                var_27 &= (((124 && var_9) ? (arr_31 [i_10 - 1] [i_9 + 1]) : (!-4797375213148563277)));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_38 [i_12] [i_12] [i_12] [i_9] = ((min(64, 79)));
                            arr_39 [i_9] [i_9] [i_11] [i_12] [i_11] = (((arr_37 [i_9] [1] [i_9] [i_11] [i_11]) ? -4797375213148563277 : var_6));
                            var_28 *= (((~(arr_30 [i_9 + 2] [i_11 - 1] [i_12 - 2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
