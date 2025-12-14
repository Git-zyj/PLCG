/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = (((((~(var_9 | var_9)))) ? var_10 : ((var_6 ? var_7 : (((~(arr_2 [i_1]))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_2] = (((((var_1 ? (arr_3 [i_0] [1] [i_2]) : var_5)) / ((max(var_4, (arr_1 [i_0])))))));
                    var_11 = (min(var_11, var_6));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_12 = var_9;
                    var_13 = ((!((!((min((arr_7 [1] [1] [1] [0]), (arr_0 [i_0] [i_1]))))))));
                    var_14 = (~-18);
                    arr_11 [i_0] [i_0] = ((-(!-var_4)));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_15 &= var_9;
        arr_14 [i_4] = (arr_3 [19] [i_4] [19]);
        arr_15 [i_4] [i_4] = arr_6 [i_4];
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_16 ^= (((arr_7 [i_5] [i_6] [6] [i_7]) <= ((var_8 ? var_10 : var_7))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_17 += (min((((((var_2 << (var_5 - 82)))) ? var_6 : (((var_9 >= (arr_26 [6] [i_6] [i_6] [i_5])))))), ((var_2 ? var_6 : -var_3))));
                                var_18 -= (((arr_25 [i_5] [i_5] [i_7] [i_8 - 3]) == (((arr_1 [i_5]) ? ((max((arr_27 [i_5] [i_5] [i_5]), (arr_7 [18] [8] [i_8] [18])))) : var_10))));
                                arr_30 [i_5] [i_9] [i_9] &= ((~(arr_19 [i_5] [i_5])));
                                var_19 = ((~(min((arr_13 [i_5]), var_9))));
                                arr_31 [6] [10] [i_7] [6] [4] [i_5] = ((-((55 ? 1 : 221))));
                            }
                        }
                    }
                    var_20 = (((var_6 >= var_5) ? ((((max(var_6, var_9))))) : (((arr_22 [i_7] [i_7] [i_6] [i_5]) ? ((var_4 ? (arr_9 [i_5] [i_6] [i_7]) : var_7)) : (arr_17 [i_6])))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_21 -= (min(var_8, (arr_21 [i_6] [i_7])));
                                var_22 -= (((min(((min(var_6, var_5))), -var_6)) << (!-var_6)));
                            }
                        }
                    }
                }
            }
        }
        var_23 -= ((!((max((arr_20 [i_5] [9]), ((max((arr_23 [i_5] [i_5]), var_6))))))));
        var_24 = var_3;
    }
    var_25 = var_8;
    #pragma endscop
}
