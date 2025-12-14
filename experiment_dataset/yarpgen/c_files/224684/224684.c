/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 48610;
    var_16 = (((((-18446744073709551612 ? var_12 : (((min(var_0, var_7))))))) ? var_3 : var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        arr_5 [i_0] = (((arr_3 [i_0] [i_0]) || (!251)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 += (((((~(arr_8 [i_1])))) ? (arr_8 [i_1]) : (arr_8 [i_1])));
        arr_9 [i_1] = var_13;
        arr_10 [i_1] [i_1] = ((~(((arr_8 [i_1]) & (arr_8 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_3] = arr_2 [16];
                    arr_19 [i_2] [i_2] [i_4] |= (((((arr_11 [10]) & (arr_15 [i_4 - 1]))) & (arr_14 [i_4 - 2] [i_4 - 1] [i_4 + 2])));
                }
            }
        }
        arr_20 [i_2] = ((+(max((arr_7 [i_2]), 992))));
        arr_21 [i_2] [i_2] |= (min((max((max((arr_15 [i_2]), (arr_8 [i_2]))), var_11)), (((!(arr_0 [7]))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_19 = ((!(arr_23 [i_7])));
                        arr_30 [6] [16] = ((!(arr_11 [i_5 + 1])));
                        var_20 = (max(var_20, (((-(((arr_8 [i_2]) & (max((arr_12 [1]), (arr_14 [i_2] [i_2] [i_2]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
