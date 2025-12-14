/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 |= ((var_13 ? (max(-1, (262143 > 7807325282385621557))) : var_14));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max(((min(var_9, 120))), ((-(arr_0 [i_0] [i_0 + 1])))))));
        var_20 = 262148;
    }
    #pragma endscop
}
