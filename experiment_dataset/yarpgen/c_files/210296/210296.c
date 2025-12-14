/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_15);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((!(arr_0 [i_0] [i_0])));
        var_19 = ((-44 ? 29 : (1 < var_6)));
        var_20 ^= (((((~(arr_1 [1] [i_0])))) ? 5103512438729113540 : (arr_1 [14] [i_0])));
    }
    var_21 = (var_9 > var_10);
    var_22 = (min(var_22, 1));
    var_23 = var_1;
    #pragma endscop
}
