/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((2167 ? 1 : 76));
    var_13 = (min(var_13, -8551531667132124482));
    var_14 = (((((min(-602521052, -602521053)) + 2147483647)) << ((((1474057944 ? (max(-602521052, 0)) : (max(-602521074, 4294967295)))) - 3692446244))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (((((5150552367731667692 >> 1) && (((46286 ? 2126446860 : 2294099365))))) || -5150552367731667692));
        arr_4 [i_0] [i_0] = (-32767 - 1);
        var_15 = (max(var_15, var_2));
    }
    #pragma endscop
}
