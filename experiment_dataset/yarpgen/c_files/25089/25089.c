/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (!var_7)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, 0));
        var_14 = (arr_1 [i_0 - 1] [i_0 + 4]);
    }
    var_15 = (min((min(var_2, ((var_4 ? var_6 : 1)))), 17888));
    var_16 = (min(var_7, (((((var_4 ? var_10 : var_1))) ? (1 <= 1) : 29314))));

    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = (((arr_3 [i_1 - 2]) ? (var_5 > var_2) : (~var_1)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_17 = (min(var_17, (((-(17104 == var_10))))));
            arr_8 [i_1] [i_1] [i_1] = ((var_0 ? (arr_3 [i_1]) : var_2));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] = (arr_2 [i_3]);
        arr_12 [i_3] = ((~(arr_9 [i_3])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = (arr_5 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_18 = (min((!var_3), ((var_10 ? 0 : (arr_18 [i_6 + 1] [i_6] [i_6])))));
                    var_19 = (min(var_19, (((-9670 ^ (arr_15 [i_6 + 1]))))));
                }
            }
        }
        var_20 = (min(var_20, var_6));
    }
    #pragma endscop
}
