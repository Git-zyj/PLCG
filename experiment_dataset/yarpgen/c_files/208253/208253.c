/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = var_4;
        arr_2 [i_0] = ((-var_11 - (arr_1 [i_0])));
        var_17 += ((-(arr_1 [i_0])));
    }
    var_18 = ((((max(127, 65420))) ? ((1152912708513824768 ? (-2147483647 - 1) : 4294967295)) : var_15));
    var_19 = var_2;
    var_20 *= var_2;
    #pragma endscop
}
