/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((min(var_0, var_11)), (173 && 7))) != var_2));
    var_13 |= var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (var_5 > var_8);
        var_15 = ((((min(0, 1))) & ((min(15851, (arr_0 [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_16 = (arr_2 [i_0]);
        var_17 = (arr_0 [i_0]);
    }
    #pragma endscop
}
