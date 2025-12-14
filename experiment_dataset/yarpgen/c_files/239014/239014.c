/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = min(2146435072, var_7);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_1] [1] [i_2] = 20;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [10] [10] [i_2] [10] = arr_5 [1];
                        arr_13 [i_1] = (arr_4 [i_0]);
                    }
                    arr_14 [i_0] [10] [6] [4] &= ((((max(((var_2 ? (arr_1 [i_1]) : (arr_4 [i_0]))), (arr_11 [6] [i_1])))) ? (var_11 << 1) : (arr_11 [4] [i_1 - 1])));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [1] [i_5] [i_6] [i_4] = ((((-(arr_17 [i_1] [1] [i_1] [i_1])))) ? ((536870911 ? ((52554 ? (arr_10 [1] [i_1] [i_1] [i_1]) : (arr_15 [i_0]))) : (arr_5 [i_5]))) : ((min(0, var_16))));
                                arr_25 [i_0] [6] [i_1] [1] [i_0] = ((((((-1 ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : var_12)))) - 1769958959));
                            }
                        }
                    }
                    arr_26 [1] [1] [i_4] [i_1] = (12981 ^ 71);
                }
                arr_27 [i_1] [i_1] = (arr_17 [i_1] [i_0] [i_0] [2]);
            }
        }
    }
    var_17 = ((((var_8 ? ((var_14 ? var_14 : var_16)) : var_3)) <= ((((min(var_6, var_3))) ? var_2 : ((2169399652115465355 ? -117 : var_0))))));
    var_18 = var_13;

    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = var_11;
        arr_31 [i_7 + 2] = (min(((((arr_28 [i_7] [i_7 + 3]) / ((0 ? (arr_29 [i_7]) : var_13))))), (((((2672876938 / (arr_28 [i_7] [11])))) ? (2644387485 * var_11) : var_0))));
    }
    #pragma endscop
}
