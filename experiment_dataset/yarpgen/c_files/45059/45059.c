/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_6;
    var_20 = (max(var_20, ((((182993543 % var_18) ? 1 : -8204977160252895681)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 *= (((((!2147483647) <= var_8)) ? (((2147483647 ? (4294967295 <= var_10) : 33242))) : ((var_2 ? (arr_1 [i_0]) : -2135956024))));
        var_22 = var_0;
    }
    var_23 = var_3;
    #pragma endscop
}
