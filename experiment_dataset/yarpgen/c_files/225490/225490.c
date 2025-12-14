/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((1 | (!var_9))) / (var_1 - var_8))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 *= var_10;
        var_16 = (((((1947865668110753887 ? 9034 : 108)))) ? (((max((min(-2657, 110)), var_2)))) : var_0);
        arr_3 [i_0] = -86;
    }
    var_17 = ((((max(var_5, (-7772553685800080992 == var_10)))) ? var_10 : (max(1620173409, ((var_6 ? var_0 : var_12))))));
    #pragma endscop
}
