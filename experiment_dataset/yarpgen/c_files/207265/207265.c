/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = max((min(15267267055120287521, (var_5 + 7631441218578106590))), ((-10778 + (var_6 - var_7))));
                    arr_6 [i_2] [i_1] = ((~(max(((min(var_10, 3650613866))), (~var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (max(((var_13 ? (arr_11 [i_0] [i_1] [i_4] [i_4 + 1] [i_1] [i_3] [i_4]) : 805306368)), (var_9 > var_8)));
                                var_18 = (min(var_18, ((((((var_13 ? var_8 : 805306368))) | (~var_15))))));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0] = (min(805306368, 5173756863218226896));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_16 [i_5] |= ((((max(((((arr_3 [i_5]) - (arr_3 [i_5])))), 47148))) ? ((var_6 & ((7427 ? (arr_7 [i_5] [i_5] [4]) : var_5)))) : (((((((var_4 ? var_10 : 1351070641))) != (max(var_2, var_3))))))));
        arr_17 [i_5] = (min(1, ((~((max(var_11, var_7)))))));
        var_19 = (arr_10 [6] [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_20 = ((((7427 >= ((((!(arr_11 [2] [i_6] [i_7] [i_5] [i_6] [5] [i_5]))))))) ? ((((min(7416, 10258947656069065998))) ? 748796023 : var_7)) : (((var_11 ? var_5 : ((var_3 ? var_7 : (arr_1 [i_5]))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_21 |= (max(-2131688557760171138, ((((((var_10 ? var_6 : 1))) ? (((max(var_10, var_3)))) : ((805306393 ? -59 : 2215111497)))))));
                                arr_29 [i_5] [6] [i_7] [i_8] [i_8] [i_9] = (min(((max(var_14, (arr_12 [i_6] [i_6] [i_8] [20] [i_7] [i_9] [i_9])))), (max((arr_12 [15] [i_5] [i_8] [1] [i_6] [i_9] [i_9]), var_4))));
                                var_22 = (((((((11329 ? var_10 : var_1)) % (((~(arr_28 [i_7] [i_8]))))))) ? ((59 ? (0 == var_0) : (max(10258947656069065991, 80)))) : var_2));
                                var_23 = var_2;
                                var_24 = ((28397 & (max((var_4 != var_13), var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-(min(0, 134217727))));
    #pragma endscop
}
