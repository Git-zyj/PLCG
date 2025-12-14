/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 16907;
    var_21 = 1919586042;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = 7;
        var_23 *= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] &= (arr_1 [i_0] [i_0]);
        var_24 = (-982994096401582922 - 76);
    }
    var_25 = var_18;
    #pragma endscop
}
