/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 661444007;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 += 0;
        var_17 = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (min((((var_5 << (var_12 - 4505580661441732124)))), ((min((arr_0 [i_0]), var_1)))));
        var_18 |= (arr_1 [i_0] [i_0]);
    }
    var_19 = var_13;
    #pragma endscop
}
