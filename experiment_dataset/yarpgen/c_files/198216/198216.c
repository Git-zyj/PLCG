/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (min(var_8, var_8));
    var_22 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = ((!(!var_0)));
        var_24 = (max(var_24, (((~(arr_2 [i_0]))))));
    }
    #pragma endscop
}
