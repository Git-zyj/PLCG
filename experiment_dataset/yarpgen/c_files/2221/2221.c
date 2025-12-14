/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2042603563;
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((-(arr_0 [i_0]))) % (arr_0 [i_0])))))));
        var_18 = ((((~(arr_1 [i_0] [i_0])))) ? ((2042603540 ? ((-1 ? (arr_1 [i_0] [5]) : (arr_1 [i_0] [i_0]))) : ((-2042603553 ? 1 : (arr_0 [i_0]))))) : (arr_0 [i_0]));
    }
    #pragma endscop
}
