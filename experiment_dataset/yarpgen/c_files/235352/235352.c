/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    var_12 &= ((-(((((var_0 + 2147483647) >> (var_8 - 58))) / (59688 % var_2)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((5848 ? 5842 : -6415481836512576720));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
