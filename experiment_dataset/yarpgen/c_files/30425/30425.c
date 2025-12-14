/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(var_12, ((((max((((arr_3 [i_0 - 2]) ? var_5 : (arr_0 [i_0 - 1]))), (arr_0 [i_0]))) ^ var_6)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [4] |= ((0 ? (arr_5 [8]) : (arr_3 [i_0 - 1])));
            var_13 = ((0 ? ((var_4 ? 137338308 : var_8)) : (arr_2 [i_0 - 3])));
            var_14 = (((arr_5 [i_1]) ^ (arr_5 [i_1])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 = (min((max((-12 < 16777215), ((9223372036854775807 / (arr_5 [i_2]))))), 1097889197));
            arr_10 [i_2] [i_2] |= (arr_3 [i_0 - 3]);
        }
    }
    var_16 = (min(var_2, (min(var_8, var_9))));
    var_17 = 3509317153;
    #pragma endscop
}
