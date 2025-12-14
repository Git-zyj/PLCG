/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = ((var_2 ? (min((arr_0 [12] [i_0]), (((var_2 ? var_3 : var_15))))) : (((((var_1 ? 41096 : var_2))) ? (~188) : (min(1, var_8))))));
                    arr_10 [i_1] [i_0] = ((((((((var_6 ? 1 : var_1))) ? 24 : (max(24, 18446744073709551600))))) ? ((((arr_6 [i_1]) || var_7))) : var_16));
                    arr_11 [22] = (((((var_12 ? ((var_7 ? (arr_4 [i_2]) : (arr_7 [i_2] [11] [i_0] [i_0]))) : ((304554898 ? 304554898 : 0))))) ? ((18446744073709551615 ? var_17 : ((304554898 ? 0 : (arr_4 [i_1]))))) : (((var_3 ? var_1 : var_14)))));
                }
            }
        }
        arr_12 [i_0] [i_0] = (((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? 18446744073709551589 : 7732838482432624269);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_4] [i_5] [i_5] [i_6] [20] = 18446744073709551615;
                        var_20 = (min((min(var_10, (arr_13 [i_3 - 1] [i_3]))), ((((!(arr_9 [i_3] [i_3] [i_3]))) ? 12064631745609882017 : (arr_23 [8] [i_4] [i_5] [19] [i_6])))));
                    }
                }
            }
        }
        arr_25 [i_3] = (min((~18446744073709551615), (((arr_8 [i_3] [i_3 - 1] [i_3]) ? (arr_2 [i_3 - 1] [i_3 + 1]) : 18446744073709551589))));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_21 = var_1;
                    arr_35 [i_8] [i_8] [i_7] [i_7] |= arr_1 [12] [i_8];
                }
            }
        }
        var_22 *= (!1429875166870053176);
    }
    var_23 += min((~var_8), 12001716235937223417);
    var_24 = ((((((18446744073709551589 ? var_10 : var_15)) ? var_12 : var_7))));
    #pragma endscop
}
