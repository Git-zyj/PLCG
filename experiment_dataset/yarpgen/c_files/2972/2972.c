/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_19 = ((var_11 >= (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (~9223372036854775807)))));
        arr_2 [i_0] = (((min(9223372036854775807, 2776506157836959651)) % (var_7 & var_17)));
        var_20 += ((-3676377394536573888 >= (!1)));
    }
    var_21 = var_0;
    var_22 = (min(4446293625910986471, var_15));
    #pragma endscop
}
