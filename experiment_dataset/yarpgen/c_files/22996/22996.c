/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_10 || var_5) ? ((((!322) < var_17))) : var_0));
    var_21 = var_11;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_22 = -322;
        var_23 = ((-((~(arr_2 [i_0 + 1] [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 = (!((min(322, 15010410921596082992))));
        var_25 ^= (arr_3 [16] [i_1]);
    }
    var_26 = (max((~29194), -2454));
    #pragma endscop
}
