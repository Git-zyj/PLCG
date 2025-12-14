/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = max(((((max(var_7, var_8))) ? (((var_12 ? var_4 : var_6))) : ((var_14 ? var_7 : 2469361932)))), var_12);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), -19532));
        var_18 = (max((((((arr_1 [1]) | (arr_1 [i_0]))) - -757277573)), (((arr_0 [14] [i_0]) ? (arr_1 [i_0]) : var_12))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = ((~(arr_6 [5] [i_1] [5])));
                        arr_11 [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = (var_2 ? ((~(arr_7 [i_0] [i_2] [i_2]))) : ((~((~(arr_8 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))))));
                        var_20 = (~18446744073709551615);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_21 = ((((-1921124128 + 2147483647) << (var_5 + 81))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_4] = ((arr_4 [i_4] [i_4]) - 18);
                    var_22 = var_7;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_21 [i_7] = ((((((var_6 > var_8) + var_2))) > (max((arr_16 [i_7] [i_7]), (var_13 - var_1)))));
        var_23 = ((!(var_3 > var_2)));
        arr_22 [i_7] [i_7] = (max(((((max(3165143474087287656, var_0))) ? ((max((arr_14 [i_7] [i_7] [i_7]), (arr_13 [0] [i_7])))) : (((arr_14 [i_7] [i_7] [i_7]) + var_13)))), ((((arr_17 [i_7]) < var_4)))));
    }
    #pragma endscop
}
