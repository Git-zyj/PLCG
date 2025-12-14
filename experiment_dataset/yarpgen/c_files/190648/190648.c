/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((9223372036854775807 | 4071215082) ? (1056964608 | var_4) : var_7)) >> ((((~(var_11 & 0))) + 14))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (max(var_20, ((((~var_16) ? ((-((var_4 / (arr_1 [i_0]))))) : (-14893 ^ -1))))));
        arr_3 [i_0] = (min(1, 1056964600));
    }
    #pragma endscop
}
