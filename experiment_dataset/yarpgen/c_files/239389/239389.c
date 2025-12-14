/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 123724168992545998));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = 16443227148405249287;
        var_14 = (min(var_14, 0));
        arr_2 [i_0] = 123724168992545998;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_15 &= -588907975599300009;
        var_16 = 32767;
        var_17 = 11;
        arr_5 [22] = -123724168992545994;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 *= -111;
        var_19 = -18879;
    }
    var_20 = 65535;
    var_21 = 52337;
    #pragma endscop
}
