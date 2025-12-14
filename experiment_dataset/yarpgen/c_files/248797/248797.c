/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, 1));
        arr_3 [i_0] = (!(arr_1 [i_0 - 2] [i_0 - 2]));
        var_17 = (((arr_1 [i_0 - 1] [i_0 - 2]) & -8672834037206778336));
    }
    var_18 = (max(var_7, var_10));
    #pragma endscop
}
