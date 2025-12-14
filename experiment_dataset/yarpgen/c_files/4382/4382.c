/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((2104874219567341630 <= (((~((min(var_0, 64897))))))));
    var_16 &= (min(((80 ? -9073473491222995021 : 9162)), ((min((max(3, 0)), 212)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((min(654, 82))) ? ((2134902807 ? 9073473491222995021 : 8388607)) : (arr_1 [i_0]))), (min(((max(654, 9223372036854775807))), (max(6260585993121633434, 3910891418964696609))))));
        var_17 = 365256748;
        var_18 = (min(var_18, 125));
    }
    #pragma endscop
}
