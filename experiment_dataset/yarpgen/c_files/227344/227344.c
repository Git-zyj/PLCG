/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 ^= var_1;
        arr_3 [1] = ((~(arr_2 [i_0])));
        var_19 = (18446744073709551615 & 8500);
    }
    var_20 = (!var_2);
    var_21 = (max(var_21, var_14));
    #pragma endscop
}
