/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((((var_8 | (var_8 | var_7))) & (((var_4 & var_4) ^ var_0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = -61450;
        var_12 = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 = ((~(arr_3 [i_1])));
        var_14 *= (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (~var_9);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_15 |= -262016;
            var_16 = arr_10 [i_2];
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_19 [i_2] = ((!(arr_16 [i_2])));
            var_17 |= ((~(((arr_18 [i_2] [i_4] [i_2]) & var_9))));
        }
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_18 = (arr_10 [i_5]);
        var_19 = (min(var_19, (((((((-(arr_14 [i_5] [i_5] [i_5 - 1]))) << (((~var_0) + 42375))))) || ((!((((var_1 + 2147483647) << (arr_15 [i_5] [i_5]))))))))));
    }
    var_20 = (max(var_20, (((~(((~var_0) ^ var_2)))))));
    #pragma endscop
}
