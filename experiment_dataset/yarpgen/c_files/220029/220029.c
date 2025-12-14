/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += (((-1 % (arr_4 [i_0]))));
                    var_16 += (arr_3 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 += (((!-var_5) ? (((-((1 ? var_2 : 96))))) : (max((((var_8 ? 996224329 : var_12))), (arr_9 [i_2] [i_1] [i_2] [i_3 - 1])))));
                                var_18 -= (((arr_8 [i_0] [i_4] [i_2] [i_3 - 1] [i_0]) ? 3926330163 : ((((min(var_1, 1))) ? (arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_0]) : var_12))));
                                var_19 += var_2;
                                var_20 = ((-(1 | var_8)));
                                var_21 = (var_11 ? var_13 : (((~-29) | (var_14 ^ 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_22 ^= (~(((arr_23 [i_5 - 1] [i_7 + 3] [i_9] [i_9]) - (arr_23 [i_5 - 1] [i_7 + 3] [i_9] [i_9]))));
                                var_23 -= (!var_5);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_24 = (arr_19 [i_5 - 1] [i_5 - 1] [i_5]);
                            arr_30 [i_6] [i_6] [i_10] = -752277441;
                            arr_31 [i_11] [i_6] [i_6] [i_5] = (arr_28 [i_5] [i_6] [i_10] [i_11]);
                            var_25 ^= (max((arr_13 [i_10]), (((1 ^ ((~(arr_23 [i_11] [22] [i_6] [i_11]))))))));
                        }
                    }
                }
                var_26 = (min(var_26, ((((!var_12) || ((((arr_26 [i_5 - 1] [i_5 - 1]) ? (arr_22 [i_5 - 1]) : 1))))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_27 ^= (((((62363 | (arr_37 [i_5] [14] [i_6] [i_12] [i_13])))) ? (max(var_3, var_11)) : ((((arr_37 [i_5] [i_5 - 1] [i_6] [i_12] [i_13]) % (((arr_19 [i_6] [i_12] [3]) ? var_14 : var_10)))))));
                            arr_39 [i_5 - 1] [i_6] [i_6] = ((+(((arr_35 [i_5] [i_5 - 1] [i_5 - 1]) ? (arr_14 [i_5 - 1]) : (arr_35 [i_5] [i_5 - 1] [i_5 - 1])))));
                            var_28 = (max(var_28, var_14));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
