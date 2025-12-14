/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (~(((arr_2 [i_0]) + -1689853425)));
        arr_3 [i_0] = arr_2 [i_0];
        var_19 = (64512 ? -699443282 : 1048568);
    }
    var_20 = (~(min(((2147483647 ? var_3 : -1689853425)), ((var_8 ? 2043364554 : -1894790151)))));
    var_21 = (-1322390117 ? (max(var_5, ((-699443282 ? 699443304 : 2147483647)))) : 1689853413);
    var_22 = (max(var_22, (max(var_9, ((~(682718351 | 210576545)))))));
    #pragma endscop
}
