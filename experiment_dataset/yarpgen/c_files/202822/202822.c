/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((221 ^ var_17) ? (var_3 && 44) : var_1);

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_19 = (i_0 % 2 == 0) ? ((((((((var_14 ? 1 : 11351433184056930139)) >> ((((~(arr_0 [i_0] [i_0]))) + 221))))) ? (((189 ? (((arr_2 [i_0] [i_0]) << 1)) : ((~(arr_3 [i_0])))))) : ((73 ? (arr_0 [i_0] [i_0]) : -var_8))))) : ((((((((var_14 ? 1 : 11351433184056930139)) >> ((((((~(arr_0 [i_0] [i_0]))) + 221)) - 91))))) ? (((189 ? (((arr_2 [i_0] [i_0]) << 1)) : ((~(arr_3 [i_0])))))) : ((73 ? (arr_0 [i_0] [i_0]) : -var_8)))));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        var_20 = ((+(((arr_0 [i_0] [i_0]) ? ((183 ? 0 : 102)) : (~var_9)))));
        var_21 = 8388607;
        var_22 ^= 109;
    }
    #pragma endscop
}
