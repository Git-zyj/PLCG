/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max(((-((min(var_11, var_15))))), ((((((1411766246961229544 ? var_13 : var_9))) != (var_4 % 11083195711811267163))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (((arr_2 [i_0 - 1]) % -13));
        var_18 += (max((((arr_2 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 1]))), (((17 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))))));
    }
    #pragma endscop
}
