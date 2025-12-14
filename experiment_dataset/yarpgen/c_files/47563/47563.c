/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_14 >= 1) == 18446744073709551615)) ? (var_0 >> 1) : (~var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = arr_1 [i_0];
        var_18 = (min(var_18, (((~1) * (((arr_0 [i_0]) | (arr_1 [i_0])))))));
        var_19 = ((~((3 ? 0 : 0))));
    }
    #pragma endscop
}
