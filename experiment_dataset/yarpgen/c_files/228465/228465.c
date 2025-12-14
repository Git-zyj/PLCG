/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_0 - -var_7);
    var_14 = (max(var_14, -21605));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, ((((arr_0 [i_0 - 2]) + -68)))));
        var_16 = (max(var_16, (~30149)));
    }
    var_17 = (12625660438512510929 > 8549);
    #pragma endscop
}
