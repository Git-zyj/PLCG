/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((~((~(arr_1 [i_0])))));
        var_16 = ((59320 ? (arr_1 [8]) : (max((arr_1 [i_0]), var_1))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (max(var_17, ((min(var_10, var_12)))));
        var_18 = ((arr_4 [i_1] [22]) != (((!(!var_13)))));
        arr_5 [9] = ((((arr_4 [i_1] [i_1]) == (arr_4 [6] [i_1]))));
    }
    #pragma endscop
}
