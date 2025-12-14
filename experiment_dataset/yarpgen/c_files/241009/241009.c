/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((((((18446744073709551615 ? 13 : 14608))) * (min(0, 17144368341867823980))))) ? ((((255 ? 236 : 18446744073709551610)) / var_7)) : ((((min(220, 6971641416164615037)) / (181 * 74))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max((min(-0, (1 / 1399582201))), 3956));
        var_15 = (min((max((2393 ^ 14623767218702965290), (!70))), ((((((-32767 - 1) ^ 6971641416164615037)) & (!80))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_5 [0] |= (((((min(18446744073709551603, 176)) ? (-32762 ^ -32757) : 7792715389785126273))));
        arr_6 [i_1] = (max((7352676009967821348 < 255), (min(18446744073709551594, 18446744073709551614))));
    }
    var_16 = ((~(((min(18446744073709551610, 1)) >> (!-668838037)))));
    #pragma endscop
}
