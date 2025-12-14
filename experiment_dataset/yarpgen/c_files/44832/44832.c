/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 ^= (((22668 ? 7680 : 7677)));
        arr_3 [i_0] [i_0] = (((((2147483643 ? (arr_0 [i_0]) : 2013265920))) ? (var_16 >= -28) : ((-21 ? (min((arr_0 [i_0]), -15)) : var_4))));
        var_19 = (max(var_19, ((((min((arr_2 [12] [i_0]), 0)) > 4294967292)))));
    }
    var_20 = (-(((((max(var_9, 8034699083465079945))) && var_17))));
    var_21 = (max((((7699 * 4294967288) / var_6)), (min(4294967294, 0))));
    #pragma endscop
}
