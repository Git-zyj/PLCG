/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_11 ? (min(var_6, (((var_11 ? 0 : -64))))) : ((((((var_5 ? var_4 : var_2))) ? (((min(var_2, var_2)))) : ((63 ? 31400 : 0))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_14 = max((max((arr_4 [i_3] [i_3] [2] [i_3 + 1]), ((min(var_7, 1))))), (min((arr_8 [i_0] [i_0] [i_0]), ((var_1 ? (arr_0 [i_3]) : var_6)))));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [1] = (min(((max((arr_7 [i_0] [i_1 + 1] [i_0]), (arr_7 [i_0] [i_0] [i_0])))), ((var_8 ? 0 : (arr_7 [i_0] [i_0] [i_0])))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_4] |= (((arr_10 [i_3]) ? (arr_4 [i_3 + 1] [15] [i_3 + 1] [i_1 - 1]) : 1));
                            var_15 = (max(var_15, (((127 ? 64 : var_12)))));
                            var_16 += ((var_5 ? 0 : var_5));
                            var_17 = (((arr_3 [i_0] [i_0]) ? (arr_5 [i_0] [i_3 - 1] [i_3 - 2]) : ((var_6 ? 0 : (-9223372036854775807 - 1)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_18 = (((arr_0 [i_2]) ? (arr_0 [i_0]) : 128));
                            var_19 += (((arr_7 [i_0] [i_0] [i_3]) ? (((0 ? var_1 : (arr_5 [i_3] [i_3] [i_2])))) : ((0 ? 0 : (arr_1 [i_3] [i_1 + 1])))));
                            var_20 += (-50 ? -4096 : ((0 ? var_3 : -127)));
                        }
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((min(var_10, var_3))) ? (max((arr_11 [12] [23] [23] [12] [12] [i_2] [12]), -1)) : ((max(var_10, 0)))));
                        arr_17 [i_0] [1] [i_0] [i_0] [8] [i_0] = (min((min((((0 ? var_4 : var_7))), (arr_4 [23] [15] [i_1] [i_1 + 2]))), (((var_4 ? 39 : ((1 ? (arr_13 [i_0] [i_0]) : (arr_8 [i_0] [i_2] [i_0]))))))));
                    }
                    for (int i_6 = 2; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_21 *= (min((min(var_12, (arr_13 [i_6 - 2] [i_0]))), (max(2549632147184338988, (arr_13 [i_1 + 1] [i_6])))));
                        var_22 = (min(var_22, (((-1 ? 1 : 0)))));
                        var_23 *= (max(((min(39955, (arr_2 [i_0] [i_1] [i_2])))), (min(1, (-9223372036854775807 - 1)))));
                        arr_21 [i_1] [i_0] [i_6] = max((max((min(1, var_6)), ((min((arr_2 [8] [i_2] [i_6 - 1]), var_12))))), ((min(6598336961619094244, ((var_1 ? 1 : 9223372036854775807))))));
                        var_24 = (max((((arr_11 [i_1 + 1] [i_1] [i_2] [i_6] [0] [i_0] [i_6 - 2]) ? 140737488355072 : (arr_13 [i_1 + 1] [i_1]))), (((((max((arr_13 [i_0] [i_0]), 63))) ? ((max(-63, var_11))) : (min((arr_8 [i_0] [i_1 - 1] [i_2]), (arr_15 [i_0] [20] [i_2] [i_6] [i_6] [13] [i_6 - 2]))))))));
                    }
                    arr_22 [i_0] [16] [2] |= (((max(2305843008945258496, 65535))) ? ((1 ? var_7 : var_3)) : (((((var_5 ? 50 : 3659312433))) ? var_0 : (min(-63, (arr_13 [i_0] [10]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_29 [i_1] [4] [i_2] [i_8] [i_8] |= ((((((((var_6 ? var_8 : var_1))) ? (((min(-63, (arr_19 [i_0] [0] [i_0] [i_0]))))) : (((arr_6 [1] [1] [i_1 + 1] [1]) ? (arr_1 [10] [12]) : 0))))) ? (min((-9223372036854775807 - 1), 62)) : ((((((arr_14 [i_8 - 3] [i_8 - 3] [0] [0] [14]) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : var_2))) ? ((min(-121, (arr_1 [2] [i_1])))) : 8795958804480))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((8505393473921083997 ? 127 : 140737488355072)), ((((arr_26 [i_0] [i_8 - 2] [i_0] [i_7] [i_8 - 2]) ? (max(-1, (-127 - 1))) : (max((arr_15 [12] [12] [i_2] [i_7] [1] [7] [5]), 39)))))));
                                var_25 |= (max(16384, -39));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
