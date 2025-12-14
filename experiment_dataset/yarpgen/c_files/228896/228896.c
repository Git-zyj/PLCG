/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 56585;
    var_12 = var_8;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((32 - ((var_8 & (arr_0 [i_0])))));
        var_13 = (((arr_1 [i_0 - 1]) ? 14248925168256469913 : (arr_1 [i_0 - 2])));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = max(((var_2 ^ (arr_0 [i_1 + 1]))), ((~(arr_0 [i_1 + 1]))));

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_7 [i_1] [i_1] [i_2] = (max((arr_4 [i_1 + 1]), ((-(arr_3 [i_2 - 3])))));
            var_15 = ((~(((arr_3 [i_2 + 3]) ? (arr_1 [i_1 - 1]) : var_1))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_16 = (arr_1 [i_1 - 1]);
            var_17 = (((arr_8 [i_1] [i_3] [i_3]) ? var_1 : (arr_4 [i_1 + 1])));
        }
        var_18 |= arr_10 [8];
        var_19 = (max(var_19, (arr_3 [i_1])));
    }
    #pragma endscop
}
