/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_13 = (min((((((arr_1 [i_0 + 3]) <= (arr_3 [i_0 - 2]))))), (((var_11 ? 125 : (arr_3 [i_0 - 1]))))));
        var_14 -= (((((min(var_6, var_9))) ? 0 : (~var_2))));
        var_15 = (max(28828, (18446744073709551595 % 17458874578374399069)));
        var_16 = ((~((16 ? (((arr_3 [i_0 - 2]) ? 1 : -95)) : 1608227371))));
    }
    #pragma endscop
}
