/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_2 >= var_7);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = ((((min((arr_0 [i_0]), var_0))) ? (((arr_3 [i_0] [i_0]) ^ 16424324631495879442)) : (arr_3 [i_0] [i_0])));
        arr_4 [3] = var_18;
        var_22 = (arr_3 [6] [i_0]);
        var_23 = ((~(arr_1 [i_0])));
    }
    var_24 ^= (!var_4);
    #pragma endscop
}
