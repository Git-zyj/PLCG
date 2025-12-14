/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 201;
        arr_4 [i_0] = (min(((-(arr_0 [i_0] [i_0]))), ((min((arr_0 [i_0] [i_0]), var_6)))));
        arr_5 [i_0] [i_0] = (max(114, 3411910514));
    }
    var_11 = (max(var_11, ((min(var_1, (min((var_1 * var_6), var_0)))))));
    #pragma endscop
}
