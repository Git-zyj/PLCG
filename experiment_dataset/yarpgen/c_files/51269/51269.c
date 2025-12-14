/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 && 3);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, 7733199871296024869));
        arr_3 [i_0] = 2147483633;
        arr_4 [i_0] = (min((-7733199871296024884 != 155703193), (-7733199871296024870 == -7733199871296024854)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 ^= ((((min(231, 203)))) <= -12821018140879555974);
        arr_9 [i_1] = ((((min(-7733199871296024870, 1755431216))) || 1156496752));
        var_22 = ((-(-9223372036854775807 - 1)));
    }
    #pragma endscop
}
