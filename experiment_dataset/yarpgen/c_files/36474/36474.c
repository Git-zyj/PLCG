/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 0));
    var_15 = 0;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = ((var_5 ? ((+(((arr_1 [i_0 - 2]) | var_12)))) : (arr_0 [i_0])));
        var_17 = (((-((var_13 ? var_10 : var_0)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (min(var_18, (~2147483647)));
        var_19 |= (((4294967295 | -1754282694) <= (arr_1 [i_1])));
    }
    var_20 = (min(var_20, ((((var_5 || var_0) ? -var_8 : ((6483174817714702047 ? 6483174817714702047 : 4294967295)))))));
    var_21 *= var_1;
    #pragma endscop
}
