/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_13, (min((min(var_2, var_5)), var_7))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_17 += (arr_1 [i_0] [i_0]);
        var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
        var_19 *= arr_0 [i_0];
    }
    #pragma endscop
}
