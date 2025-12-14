/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(max(212, 1797232434)));
    var_18 *= var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [7] = (((arr_1 [i_0] [i_0]) & 186));
        var_19 = (!16383);
    }
    var_20 = var_4;
    #pragma endscop
}
