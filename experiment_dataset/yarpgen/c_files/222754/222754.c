/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_4 ? var_2 : var_14)) - var_8)) <= var_4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_3;
        var_17 = (max(var_17, ((((((((min(1, -46))) & 14785))) ? (arr_1 [i_0] [i_0]) : ((var_14 ? ((max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) : (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = (((((arr_1 [2] [i_0]) * (((arr_1 [4] [4]) ? (arr_0 [9]) : (arr_1 [i_0] [3]))))) & (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 *= (arr_4 [1]);

        for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] = (min((arr_6 [i_2]), (65535 != -14785)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_19 -= ((14790 ? 19184 : ((((arr_16 [i_1] [i_2 + 3]) == 3026575461468117206)))));
                        arr_18 [i_1] [i_1] [i_3] [i_4] = (arr_11 [i_1]);
                    }
                }
            }
            arr_19 [i_1] [i_1] = (((arr_10 [2] [i_1]) ? ((((((arr_13 [i_1] [i_1] [i_2]) ? (arr_1 [i_1] [i_1]) : 1))) ? (14790 - 4) : (arr_5 [i_1]))) : ((((((~(arr_7 [i_1]))) + 2147483647)) >> (((((arr_8 [1] [1]) ? (arr_6 [i_1]) : 12588928578836836567)) - 1548530788))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
        {
            arr_22 [i_1] [i_1] [i_1] = (((arr_11 [i_1]) ? 13 : (arr_17 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_1])));
            arr_23 [i_1] [i_1] [0] = ((-2 ? 1 : ((var_5 ? (arr_16 [5] [i_5]) : var_15))));
        }
        arr_24 [i_1] = (~var_12);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        var_20 = 1;
                        var_21 = var_3;
                    }
                }
            }
        }
        var_22 = (min(var_22, var_4));
    }
    var_23 = (min(var_23, (var_1 - 27703)));
    #pragma endscop
}
