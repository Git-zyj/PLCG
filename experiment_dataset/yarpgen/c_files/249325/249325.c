/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_7));
    var_16 = (((((max(var_10, var_10)))) >= ((var_4 ? ((-6983918360198291422 ? 1 : 7509354948283500149)) : (((12469 << (var_0 - 44605))))))));
    var_17 |= (~var_14);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((min((arr_0 [i_0 - 1]), 0))) ? ((((arr_0 [i_0 - 1]) >= 0))) : 1));
        var_18 = (max(var_18, (~1)));
        var_19 ^= (max(0, 0));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = var_6;
        var_20 = ((1 ? 1 : 1));
    }
    #pragma endscop
}
