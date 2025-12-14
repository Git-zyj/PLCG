/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(((var_2 ? var_6 : var_11)), var_5)));
    var_14 = (max(var_0, (((((var_10 << (386434612841306981 - 386434612841306966)))) ? var_4 : (!var_9)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((18060309460868244634 ^ (arr_1 [i_0 - 3])));
        var_15 = (arr_1 [i_0 - 3]);
        var_16 = 1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (~var_7);
        var_17 -= (((min(((max((arr_4 [i_1] [i_1]), var_2))), (4 * var_12))) >= (arr_4 [i_1] [i_1])));
    }
    #pragma endscop
}
