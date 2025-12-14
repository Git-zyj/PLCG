/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_12, (4294967285 <= 4294967281)));
        var_13 = 224;
        var_14 |= ((-(arr_3 [i_0])));
    }
    var_15 &= (((~(var_2 / var_6))));
    #pragma endscop
}
