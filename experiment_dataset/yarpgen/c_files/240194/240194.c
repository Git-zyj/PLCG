/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (var_3 + 33552384);
    var_18 = (max(var_18, 1));
    var_19 *= ((((((!(((127 ? 1425724741 : var_15))))))) != ((((max(17535, var_1))) ? 149 : ((var_5 ? var_15 : -12))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 *= (((787269325 / 14025) ? ((-5 ? -5 : var_3)) : (((570627960 ? 4294967168 : var_1)))));
        var_21 = ((!(4294967183 % 496574829266249331)));
        var_22 = ((((2568728237201905219 ? var_11 : var_1))) + (((-11 + 9223372036854775807) << (107 - 107))));
    }
    var_23 = ((!(((((min(1677149392963306939, 29))) ? (max(4294967168, -24)) : 4294967179)))));
    #pragma endscop
}
