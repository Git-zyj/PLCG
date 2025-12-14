/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 ^= 1777390855;
        arr_4 [i_0] = (~1777390865);
        arr_5 [i_0] = ((((min((max(1777390855, 3123623079041611170)), -174460649))) ? ((~(arr_1 [i_0]))) : ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    var_14 *= (min(((-722502075 ? (~var_10) : ((var_4 ? var_2 : -1355050676)))), ((var_7 ? ((var_11 ? 12026 : var_0)) : ((var_3 ? var_6 : 170))))));
    #pragma endscop
}
