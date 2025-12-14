/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((-1188058230 ? 14372380393938036212 : 16025)) < (((239 ? var_7 : var_8))))) ? -var_1 : var_4));
    var_12 = var_5;
    var_13 = (((~var_3) / (min(1, -1910509414))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_14 = (var_4 * -7);
        arr_3 [i_0] [i_0 + 1] = (1910509404 >= 1);
    }
    #pragma endscop
}
