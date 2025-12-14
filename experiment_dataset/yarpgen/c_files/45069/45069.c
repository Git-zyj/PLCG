/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_11);
    var_20 += var_17;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_21 = (max(var_21, (arr_0 [i_0] [i_0])));
    }
    var_22 = (((~var_0) << (((-var_6 + 153) - 8))));
    #pragma endscop
}
