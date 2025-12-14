/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (20999 ? 0 : 44532);
    var_17 = -29151;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        arr_3 [i_0] [i_0] = (!29150);
        var_18 = ((-(((arr_1 [i_0]) / (arr_0 [i_0] [i_0])))));
        var_19 = -21176;
    }
    #pragma endscop
}
