/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_3;
    var_12 &= ((((((!31) ? 9403306235975740113 : 58))) ? -32 : 1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(((((max(-7, -33))) ? ((((!(arr_1 [i_0]))))) : 18446744073709551615)), ((((((arr_2 [8]) ? 13623616646877985451 : -29))) ? (((arr_0 [i_0] [i_0]) ? var_5 : 4976357189737431114)) : (arr_1 [i_0])))));
        arr_3 [i_0] = (min(-18271, (-60 * 105)));
        var_14 ^= (min((min((arr_0 [i_0] [i_0]), ((1 ? (arr_1 [i_0]) : var_6)))), ((((min(6, -32))) ? (arr_0 [i_0] [i_0]) : 1))));
        var_15 ^= 0;
        var_16 *= (!43);
    }
    #pragma endscop
}
