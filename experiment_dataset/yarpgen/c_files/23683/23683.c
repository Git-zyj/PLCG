/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_4 >= var_7) ? ((var_7 << (var_9 - 68))) : var_7)), ((min(var_2, (~31))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_11 = (60 ? (arr_0 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 1] [i_0 - 3]));
        arr_2 [i_0] = ((var_5 ? (!28221) : ((28214 ? -1 : -208604355))));
    }
    var_12 = (min((((((~var_2) + 2147483647)) >> (208604363 - 208604349))), ((15090 ? 217 : -28199))));
    #pragma endscop
}
