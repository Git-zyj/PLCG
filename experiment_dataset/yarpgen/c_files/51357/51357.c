/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (+((var_9 ? (var_2 / var_0) : var_4)));
    var_16 = ((var_6 + (max((var_4 || var_13), ((var_6 ? var_9 : 28672))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 += (~-125);
        arr_2 [i_0] = min(((((((arr_0 [i_0]) == var_8)) || var_1))), (((arr_0 [14]) ? (min(511, 1119011310)) : 1119011310)));
        var_18 = (arr_1 [i_0 + 1] [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = (-1119011310 + -9);
        var_20 = -1119011295;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_21 = 6;
        arr_9 [i_2 - 1] = ((((var_11 | 1119011315) ? (((var_9 ? var_13 : 1119011315))) : 2435989169754129866)));
    }
    #pragma endscop
}
