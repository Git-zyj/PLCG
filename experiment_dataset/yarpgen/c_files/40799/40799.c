/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(max(var_0, var_11))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (((((min((min((arr_1 [i_0]), (arr_0 [i_0]))), ((~(arr_1 [i_0]))))) + 9223372036854775807)) >> (var_6 - 1570058938)));
        var_18 = (min(var_18, (((max(((((arr_0 [i_0]) >> 0))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : 9223372036854775807))))))));
    }
    #pragma endscop
}
