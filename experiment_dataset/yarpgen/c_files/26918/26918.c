/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(-1180427537, 5));
        arr_4 [i_0] = (((((694128798 < (arr_1 [i_0])))) >> (((((arr_0 [i_0] [10]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) - 75))));
        var_16 = (43951 ^ 228);
        var_17 |= var_15;
        var_18 -= min(((min((((arr_1 [i_0]) ? 43928 : 1)), (var_0 <= 1)))), (((arr_0 [i_0] [i_0]) ? (((arr_1 [i_0]) & var_12)) : ((((arr_1 [i_0]) ? 230 : (arr_0 [i_0] [i_0])))))));
    }
    var_19 = var_3;
    #pragma endscop
}
