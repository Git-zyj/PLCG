/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_6 ? ((((max(1035251047, 34))) ? ((((var_7 + 2147483647) << (((((arr_1 [i_0]) + 660170447)) - 25))))) : (min(var_10, (arr_0 [i_0]))))) : (((max((arr_2 [i_0 + 2]), (!var_5)))))));
        var_14 += -10393;
    }
    var_15 = var_3;
    #pragma endscop
}
