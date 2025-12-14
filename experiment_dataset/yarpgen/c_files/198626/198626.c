/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (18446744073709551615 ^ 1);
        arr_3 [i_0] [1] = (((!22) ? (((0 ? 1 : 3))) : (min((~0), (min(1, 1))))));
        var_13 += 16320;
    }
    #pragma endscop
}
