/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_11 ? (((var_6 ? var_7 : var_15))) : 1673204184))) ? ((((var_16 ? 1439186213 : var_3)))) : (max((~-1), ((var_1 ? -122 : var_5))))));
    var_21 = var_14;
    var_22 = (min(var_22, var_2));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_23 = ((-(max((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [15] [15]))), ((max(31647, (arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_24 = (max(var_24, (((((max((arr_2 [i_0] [i_2 + 1]), (arr_4 [i_2 + 1] [i_2 + 1])))) ? (((arr_1 [i_0]) ? -2878 : (arr_3 [i_2 + 1] [i_2] [i_2 - 1]))) : ((2596 ? 151 : 4620)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_25 -= ((2855781081 ? (arr_7 [i_4 + 1]) : (((arr_11 [5] [1] [12] [i_3] [i_4 + 2] [i_0]) ? (arr_2 [7] [i_4]) : (max((arr_12 [15] [15] [i_2] [15] [i_2] [i_2 - 1]), var_0))))));
                                arr_14 [i_0] [9] [i_4] [i_4] [2] = ((((((arr_5 [i_4] [11]) ? (arr_8 [i_4 + 2]) : ((var_5 ? (arr_6 [11] [i_1]) : (arr_8 [i_3])))))) ? (arr_10 [i_0] [i_1]) : ((((((arr_1 [i_4]) ? -16059 : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0])))) ? (arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) : (((var_5 ? (arr_1 [i_2 + 1]) : -4606)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] = (arr_4 [i_2 - 1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = (((((1299918947 ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) ? (((arr_5 [i_0] [i_0]) ? 26887 : (arr_5 [i_0] [i_0]))) : (arr_5 [i_0] [i_0])));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_26 += ((((max((arr_17 [2]), (arr_17 [8])))) ? (((((((arr_17 [16]) ? 576460752303423487 : 1470169043))) || (arr_19 [i_5] [i_5])))) : (((arr_19 [i_5 + 2] [i_5 + 2]) ? (arr_19 [i_5 + 1] [i_5 + 1]) : (arr_19 [i_5] [i_5 + 1])))));
        arr_20 [i_5] = (((((max((arr_19 [8] [i_5]), 2855781082)) < ((((arr_19 [i_5 + 1] [i_5]) ? 4623 : (arr_19 [i_5 + 2] [i_5 + 2])))))) ? ((((((arr_19 [i_5 - 1] [i_5]) ? (arr_18 [i_5] [i_5 + 2]) : -3298))) ? -4623 : (((arr_19 [i_5] [i_5 - 1]) ? (arr_18 [i_5] [i_5]) : (arr_19 [8] [i_5]))))) : var_5));
        var_27 = 4606;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_28 = (min(var_28, ((((((((117 ? 69 : (arr_19 [i_6] [11])))) ? (((max(-13887, (arr_19 [i_6] [i_6]))))) : (max(32512, -1))))) ? (arr_22 [i_6] [i_6]) : (((max((arr_19 [i_6] [i_6]), (arr_18 [0] [i_6]))) ^ (arr_19 [i_6] [i_6])))))));
        arr_24 [i_6] = ((((((arr_23 [i_6] [i_6]) ? 4606 : (arr_23 [i_6] [i_6])))) ? (((arr_23 [i_6] [i_6]) ? (arr_23 [i_6] [i_6]) : (arr_23 [i_6] [i_6]))) : (arr_23 [i_6] [i_6])));
    }
    #pragma endscop
}
