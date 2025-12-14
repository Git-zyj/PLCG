/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1, (max(((max(54, 101))), -1545507456))));
    var_13 = ((0 ? ((-((-698962339 ? 32767 : -2)))) : -698962344));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 1;
        var_15 = ((!((min((max(4294967295, 0)), ((max(1, -2))))))));
    }
    #pragma endscop
}
