/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((~((((max(-6021042560746463987, 6021042560746463987))) ? -6021042560746463969 : -6021042560746463987))));
    var_11 = (max(var_11, 6442130168353154711));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_12 = ((((((502935504 * var_8) * ((((arr_0 [i_0]) ? (arr_1 [2]) : 127)))))) - 6021042560746463992));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (-1470330659940051488 ? (max(var_2, ((1 ? 28 : -2119662382321218464)))) : (min(-6021042560746463987, (arr_0 [i_1]))));
        var_13 ^= 4294967295;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_14 += var_3;
        var_15 += (((((arr_9 [11]) ? (!1954860107450711664) : (arr_8 [2]))) * 1));
    }
    #pragma endscop
}
