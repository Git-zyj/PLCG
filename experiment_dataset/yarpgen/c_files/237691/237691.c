/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((max((max(-1836737200, -25184)), var_2))), 90539664));
    var_19 = (!23702);

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [14] &= 134209536;
        arr_4 [i_0] = (~(min(((1 ? var_16 : var_6)), 1)));
        arr_5 [i_0] = var_0;
        arr_6 [i_0] = (min((min((min((arr_1 [i_0]), -47)), var_4)), (min(var_0, (arr_1 [i_0])))));
    }
    var_20 = (~6874409333744441178);
    #pragma endscop
}
