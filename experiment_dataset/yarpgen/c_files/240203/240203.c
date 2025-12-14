/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-15 ? 805306368 : 2273668056));
        arr_3 [i_0] [1] = ((((max(805306376, (-18453 | 13555404006073580209)))) ? (~3489660939) : (((((max(32747, 80))) ? 1 : 225)))));
        var_13 = ((((((-558217828942988156 / 558217828942988159) ? -9223372036854775801 : (arr_0 [8] [7])))) ? (558217828942988148 - 50734) : -1));
        var_14 = ((((max(((18 ? 237 : var_1)), (!var_8)))) ? 111 : (((!(!4032))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = (max(var_15, var_5));
        var_16 = ((((min(80, 80))) ? 11879 : ((((min(-558217828942988156, var_1)) <= (((-9223372036854775807 - 1) ? -558217828942988154 : var_4)))))));
    }
    var_17 = 0;
    #pragma endscop
}
