/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = var_14;
    }
    var_21 ^= (((max((9568066184709969360 | var_0), (((14895980769148323054 ? 9223372036854775807 : var_5))))) * (5326564893836087262 != 8878677888999582267)));
    #pragma endscop
}
