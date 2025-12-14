/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (max(((max(var_3, 6))), ((var_13 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_3 [14] [14] = ((!((!((max(7, var_15)))))));
        arr_4 [15] = (((min(var_5, (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 255))))) ? ((((arr_1 [11] [i_0]) / (((-(arr_0 [i_0]))))))) : (((arr_1 [i_0] [i_0]) * var_13)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 = (((var_14 ^ var_7) ^ ((3231334428 ? (6913855120782636314 - var_8) : (arr_6 [i_1] [i_3])))));
                                var_19 -= ((max((227 * 2750190070), 131071)));
                                arr_19 [i_5] [4] [i_1] [i_3] [i_1] [i_2 + 1] [16] &= (((arr_11 [i_4] [i_3] [20] [19]) ? (((var_13 ? var_10 : (arr_10 [i_5] [i_4] [i_3] [i_1])))) : -255));
                            }
                        }
                    }
                    var_20 = (((((arr_9 [17] [i_2 + 1] [i_1]) ^ (arr_13 [19])))) ? ((7736585479563260963 ? (max((arr_6 [i_1] [i_1]), (arr_7 [i_1] [i_1]))) : var_13)) : ((8192820167965642677 ? ((~(arr_5 [i_1]))) : var_7)));
                    var_21 = (((((-((var_3 * (arr_17 [i_1] [2] [i_1] [i_1] [i_1])))))) ? (+-8149949378939010998) : (arr_17 [i_1] [i_1] [i_3] [i_1] [7])));
                }
            }
        }
        arr_20 [i_1] = var_13;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        arr_23 [i_6] = var_10;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = ((~(((arr_10 [i_6 + 1] [i_6] [i_6] [20]) * var_4))));
                    arr_31 [i_6] [i_7] [5] [1] = (arr_10 [i_6 - 2] [i_6 - 2] [i_8] [3]);
                    var_23 = var_10;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_24 += (-(arr_7 [i_6 - 2] [i_6 + 3]));
                                var_25 = (var_14 * var_6);
                                arr_37 [1] [i_9] [6] [i_9] [i_6] = ((var_2 ^ (arr_0 [i_6 + 3])));
                                var_26 = 2587563891;
                            }
                        }
                    }
                }
            }
        }
        arr_38 [i_6] = ((var_12 ? ((18446744073709551615 ? var_7 : (arr_28 [i_6] [4] [i_6 + 3]))) : (((var_12 ? var_15 : var_15)))));
        var_27 -= (arr_26 [i_6] [i_6 + 1]);
    }
    var_28 = (min(var_8, var_11));
    #pragma endscop
}
