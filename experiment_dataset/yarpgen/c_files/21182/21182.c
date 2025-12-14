/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_2);
    var_14 += ((((min(((195 ? var_0 : var_7)), var_2))) ? (((var_7 ? 1 : var_5))) : ((var_1 ? (~32767) : ((var_0 ? var_5 : var_12))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        arr_3 [i_0 - 1] = ((((((max((arr_2 [i_0]), var_11))) ? (((arr_2 [i_0]) / 2701382428)) : var_2)) != 1593584867));
    }
    #pragma endscop
}
