/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_14 + var_12) ? ((var_10 ? 109 : ((8843 ? 61488 : var_6)))) : (max(var_12, -61488))));
    var_18 = ((~(9223372036854775794 - var_2)));
    var_19 = ((~((var_6 ? ((var_14 ? -105 : 32765)) : var_15))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [0] = (((((arr_0 [i_0 - 1]) == (arr_0 [i_0 + 1]))) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))) : (arr_0 [i_0 + 1])));
        var_20 = ((((min((arr_2 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (((-14 ? ((-(arr_1 [1]))) : 4048))) : (min((arr_0 [i_0 + 1]), 30293))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [1] [i_1] = (((~((min(35245, -14))))));
        var_21 -= arr_4 [i_1 + 1];
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (arr_5 [3] [i_2]);
        arr_11 [i_2] = (arr_2 [i_2 + 1]);
        var_22 = (((((-((min(var_12, 61488)))))) ? 13 : (max(((var_11 ? var_14 : (arr_4 [i_2]))), -109))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_6] [2] [i_4] [i_5] [i_6] = (arr_4 [i_2]);
                            arr_23 [i_6] [i_3] [i_3] [i_3] [7] [i_3] = ((18 * ((-(arr_4 [i_6 - 1])))));
                            arr_24 [i_2] [i_3] [i_4] [i_6] [i_6] [i_6] = max(((var_7 - (arr_15 [i_4 + 1]))), (35242 | -32766));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_27 [i_2 - 1] [i_3] [i_4 + 3] [i_5] [i_7] = (arr_25 [i_2] [i_2] [i_2 + 1] [3] [i_2]);
                            arr_28 [i_2 - 1] [i_3] [i_4] [1] [i_5] [i_3] [i_7] = (arr_14 [i_3] [i_4 + 2] [i_5]);
                        }
                        var_23 = (min(((((min((arr_26 [i_2] [i_2] [0]), var_15))) ? (max(var_1, -45)) : -21569)), ((((arr_17 [i_2] [i_4] [i_3] [i_2]) & ((min((arr_25 [5] [i_3] [i_4 + 2] [8] [i_5]), (arr_25 [i_2] [i_3] [i_3] [i_5] [i_3])))))))));
                        var_24 = 1;
                        var_25 ^= -33;
                    }
                }
            }
            arr_29 [i_3] = ((+(min((min((arr_21 [7] [i_3] [9] [i_3] [i_3]), (arr_25 [i_2 + 1] [i_3] [i_3] [i_3] [i_2]))), (arr_0 [i_2 - 1])))));
            arr_30 [10] = (((arr_13 [i_2 + 1] [i_2 + 1]) ? ((((arr_13 [i_2 + 1] [i_2 + 1]) <= (((arr_7 [i_2 - 1]) ? 124 : 13))))) : ((~((max(0, 32765)))))));
        }
    }
    #pragma endscop
}
