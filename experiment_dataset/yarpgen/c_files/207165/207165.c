/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_1 [11] [i_0]);
        var_12 = (max(((((((arr_2 [i_0]) ? var_3 : 4294967269))) ? -1972404206 : ((0 ? (-2147483647 - 1) : 0)))), -1972404224));
        arr_3 [4] |= ((-((((arr_2 [i_0]) >= ((((arr_0 [i_0]) != 898409784))))))));
        var_13 = (-2147483647 - 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 ^= (((arr_4 [4] [i_1]) || -20107));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_15 |= var_4;
            arr_10 [i_2] [i_1] [i_1] = ((-(arr_9 [i_2] [i_1] [i_1])));
            var_16 *= ((-(arr_7 [i_1] [i_2] [i_2])));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_17 *= ((var_0 ? (arr_11 [i_3 + 1] [i_3 + 1]) : var_6));
            arr_14 [i_1] = ((69 >= (arr_9 [i_3 - 1] [i_1] [i_3])));
            var_18 += (arr_4 [2] [i_3 - 1]);
            var_19 = (min(var_19, var_10));
        }
        var_20 = ((arr_8 [i_1] [i_1] [2]) ? (((arr_9 [5] [i_1] [i_1]) ? 7 : 189220343147834692)) : 12041);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_21 = 189220343147834702;
                                arr_27 [i_4] [i_4] [0] [i_4] [i_4] [i_1] [i_4] = (i_1 % 2 == 0) ? ((((((arr_23 [i_1] [i_4] [i_5] [i_6] [6] [i_7 + 1]) + 2147483647)) << ((((57547 ? var_2 : (arr_17 [i_1] [i_4] [i_5] [i_1]))) - 429086563))))) : ((((((((arr_23 [i_1] [i_4] [i_5] [i_6] [6] [i_7 + 1]) - 2147483647)) + 2147483647)) << ((((57547 ? var_2 : (arr_17 [i_1] [i_4] [i_5] [i_1]))) - 429086563)))));
                                arr_28 [6] [i_1] [i_5] [i_1] [i_1] = (arr_16 [i_1]);
                                var_22 |= 10241;
                                var_23 = (max(var_23, (27 % 189220343147834693)));
                            }
                        }
                    }
                    var_24 = (((arr_26 [i_1] [i_5] [i_4] [i_4] [i_1]) ? 4146 : 6885));
                }
            }
        }
        var_25 = ((-10241 ? (((var_5 ? (arr_9 [i_1] [i_1] [i_1]) : (arr_7 [9] [i_1] [i_1])))) : (arr_25 [0] [i_1])));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_26 = (min(var_26, -7185978148851792291));
                    var_27 = (min(((+(min((-32767 - 1), (arr_32 [i_8]))))), ((-(((arr_37 [i_8]) << (var_0 + 8380591327345662213)))))));
                    arr_39 [i_8] [i_10] [i_9] [i_10] = (arr_33 [i_9 - 1] [i_9 - 1] [i_8]);
                    var_28 ^= -57;
                }
            }
        }
    }
    var_29 = -1522085925;
    #pragma endscop
}
