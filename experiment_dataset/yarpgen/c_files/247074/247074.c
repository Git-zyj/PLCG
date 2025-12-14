/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 += ((6194947906949058473 & 59) == -59);
        var_12 -= ((-((((min(0, -1)) <= ((((arr_0 [i_0]) && var_6))))))));
    }
    var_13 = ((-var_8 ? ((((var_9 && 66846720) == var_2))) : (((!(~var_7))))));
    var_14 = (min(var_14, var_10));
    var_15 *= ((-5294885436665103471 ? 1 : 1727130195));
    #pragma endscop
}
