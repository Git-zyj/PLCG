/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) <= var_16));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) + ((((max(var_9, var_18))) ? ((32767 ? var_14 : 0)) : -32767))));
    }
    var_21 |= ((var_3 ? -32 : var_15));
    var_22 = 193;
    #pragma endscop
}
