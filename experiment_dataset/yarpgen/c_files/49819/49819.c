/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((7005627419543199352 / (arr_1 [i_0])));
        var_18 &= (11441116654166352248 < var_8);
        var_19 = (!18446744073709551615);
    }
    var_20 = ((((var_7 < var_1) ? ((13988 ? 11441116654166352263 : 25948)) : (!var_10))));
    #pragma endscop
}
