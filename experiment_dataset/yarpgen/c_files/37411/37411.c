/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_5;
    var_13 = ((-(max((~116561194), (((32764 ? var_2 : var_4)))))));
    var_14 -= (min(266287972352, (var_6 & var_10)));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= (min(4178406102, (~464734399577893228)));
        var_15 = (((((arr_0 [i_0] [i_0 - 2]) ? (arr_0 [i_0] [i_0 - 1]) : var_0)) + -16383));
    }
    #pragma endscop
}
