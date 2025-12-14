/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((min(var_8, var_10)), ((min(var_9, var_0))))), var_9));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 |= (arr_2 [i_0]);
        var_19 = (max(((~(arr_2 [i_0]))), (arr_0 [i_0 - 2])));
        var_20 = ((max((arr_0 [i_0 - 2]), (arr_1 [18]))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0 + 2]);
    }
    #pragma endscop
}
