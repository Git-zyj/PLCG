/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 18014398509481968;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = (((~-8881568091031481426) ? ((0 ? (((arr_2 [i_0]) ? var_7 : (-9223372036854775807 - 1))) : var_0)) : (((-(arr_2 [i_0 + 1]))))));
        var_14 = (122 ^ -4699358568812013723);
    }
    #pragma endscop
}
