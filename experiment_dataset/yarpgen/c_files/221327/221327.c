/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 *= (max((((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))), (!-19)));
        var_19 = (min(var_19, (((!((((arr_0 [i_0 + 1] [i_0 + 1]) ? 1680346534 : 0))))))));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        var_20 -= (((arr_2 [i_1 + 1]) ? (max(0, ((var_7 ? (arr_0 [1] [i_1]) : 11519)))) : (max(-1013921003, (!4434383314623277329)))));
        arr_4 [i_1] [i_1] = (arr_2 [i_1 - 4]);
    }
    var_21 += ((6104 ? var_9 : (var_14 == 1)));
    #pragma endscop
}
