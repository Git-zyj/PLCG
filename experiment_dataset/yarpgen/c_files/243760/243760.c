/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((var_6 <= (((((min(var_10, var_7)) <= (var_8 / 63439)))))));
    var_15 = (max((((var_6 ? ((-13019 ? -23273 : var_11)) : (!1)))), (((1 / 65535) ? (7826 * 65526) : (min(4211264471747434321, 0))))));
    var_16 = max((((!(148 != -13048)))), 706171038);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [1] = (arr_0 [i_0] [i_0]);
        var_17 = (((arr_0 [i_0] [i_0]) & 36580));
    }
    #pragma endscop
}
