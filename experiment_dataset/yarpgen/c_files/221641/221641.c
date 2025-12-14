/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-var_2 >= (var_12 / -var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (4602678819172646912 != -32477);
        arr_3 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = (((var_0 * var_6) & var_8));
        var_17 = (((((-15819 ^ var_0) ? 224 : var_11)) & var_10));
        var_18 -= (3691179449617711244 > -1019603057);
    }
    #pragma endscop
}
