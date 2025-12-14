/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_0 ? -113 : -var_11);
    var_14 -= var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((-127 - 1), -1970144862));
        var_15 -= (min(-var_7, (!8386560)));
    }
    #pragma endscop
}
