/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 17373711202214792592;
    var_17 += ((-((~(1073032871494759022 | 54041)))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_18 ^= 61108;
        arr_3 [i_0] = (((!1073032871494759024) << (872090081409289961 - 872090081409289936)));
        arr_4 [i_0] = ((1073032871494759024 != (((~17373711202214792607) | (0 ^ 1)))));
        var_19 = (~85);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (((((0 + 3355842173140706798) + -3191770169)) - 65535));
        arr_8 [i_1] = 17373711202214792596;
    }
    var_21 ^= ((!(16064 & 1793613609)));
    #pragma endscop
}
