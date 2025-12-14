/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0] [i_0])));
        var_15 += 2923326689563723882;
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0])));
        var_16 += (!15523417384145827744);
    }
    #pragma endscop
}
