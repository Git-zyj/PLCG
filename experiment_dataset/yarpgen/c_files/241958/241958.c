/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!(((((max((-2147483647 - 1), 1))) - var_5))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [1] = (min((max((max(140737484161024, var_14)), (arr_1 [i_0] [i_0]))), ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_19 *= ((((min((arr_1 [i_0] [i_0]), 32767))) ? (arr_1 [1] [1]) : ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = -13312;
        var_20 = (min(((((min(var_12, (arr_4 [i_1])))) ? var_0 : (((arr_3 [i_1]) ? var_16 : (arr_3 [i_1]))))), (((((min(var_12, (arr_4 [i_1])))) ? (arr_3 [15]) : 19843)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (arr_3 [i_2]);
        arr_8 [i_2] = ((!(arr_6 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_22 = ((!(((var_1 ? (arr_11 [i_3]) : (arr_6 [i_2]))))));
                    var_23 = ((-11332 ? (arr_13 [13] [3] [11] [i_4]) : (arr_9 [i_2])));
                }
            }
        }
        var_24 += (arr_13 [i_2] [i_2] [i_2] [i_2]);
        var_25 = var_0;
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 = (!-11317);
        var_27 = (((!14837) <= -11));
        var_28 = (arr_10 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_24 [i_5] = ((19842 ? (arr_4 [i_8]) : (arr_4 [i_6])));
                        arr_25 [9] [i_5] = (((((arr_14 [i_5]) + 9223372036854775807)) << (((var_2 + 5842) - 41))));
                    }
                }
            }
        }
        var_29 = ((!(arr_11 [i_5])));
    }
    #pragma endscop
}
