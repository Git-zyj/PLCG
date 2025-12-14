/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_2;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_0 [i_0] [i_0]), (arr_1 [i_0]));
        var_21 = (min(var_21, (arr_1 [i_0])));
        var_22 = -var_5;
    }
    var_23 = (((var_11 + 2147483647) << (((var_16 + 18829) - 8))));
    #pragma endscop
}
