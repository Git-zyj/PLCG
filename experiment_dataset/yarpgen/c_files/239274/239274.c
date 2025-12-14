/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 *= (~var_10);
        var_19 = -var_3;
        var_20 += ((!((!(arr_3 [i_0] [i_0])))));
    }
    var_21 = (max(((-(max(-9223372036854775803, var_13)))), ((max((!1), (max(-1151410652, var_17)))))));
    var_22 = (min((max(var_7, (~var_16))), ((min((max(var_7, 52643)), (min(var_6, var_16)))))));
    var_23 = (max(((max((max(var_4, 1184432108)), (!var_15)))), (max(((min(var_0, var_4))), (max(var_13, 1))))));
    #pragma endscop
}
