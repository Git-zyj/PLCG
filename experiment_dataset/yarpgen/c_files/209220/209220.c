/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 > (!603)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((((min((arr_1 [i_0] [i_0]), 1745198274)) * ((-1745198275 ? 25470 : -1745198275))))) ? ((((-1745198275 ? 0 : var_8)))) : ((((min((arr_0 [i_0]), var_7))) ? ((-(arr_0 [2]))) : (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] &= (((((+((var_7 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))) ? (((max((arr_0 [i_0]), 805306368)))) : ((max((((!(arr_1 [11] [1])))), 31)))));
        var_17 = (~10846);
    }
    var_18 = ((var_9 ? var_10 : (((((var_14 ? var_15 : var_4))) ^ ((var_9 ? var_3 : var_8))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = ((var_5 > (arr_7 [i_1])));
        var_20 = (max(var_20, (((((((arr_5 [7] [15]) ? var_15 : -5626))) ? (arr_4 [i_1]) : (8087 != var_4))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_21 = (arr_5 [0] [i_4]);
                                arr_16 [i_1] [i_2] [i_3] [i_2] [i_4] [i_5] = (((65535 * var_7) ? (arr_5 [i_1] [i_2]) : (arr_12 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5])));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [6] = (((arr_7 [i_2]) ? (arr_7 [10]) : var_13));
                    arr_18 [15] [15] [i_3] [i_3] = -11645;
                    var_22 = (min(var_22, (5401 >= 45770)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 *= ((35 < (arr_11 [i_1])));
                                arr_25 [i_6] [i_6] [i_3] [i_6] [i_7] = ((!(arr_12 [i_1] [i_1] [i_3] [10] [i_6] [i_7])));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_1] [i_1] = ((((5625 ? (arr_22 [i_1]) : 18446744073709551615)) * (((var_14 ? 1240509188 : 40)))));
    }
    #pragma endscop
}
