/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max((~var_1), (var_7 > 36188)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 += (15205 * 511);
        var_15 = (((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) >> (((((58494 ? var_8 : 3744)) >= (arr_2 [i_0]))))));
        var_16 = (min(var_16, ((max((((arr_3 [i_0]) ? (~-597649944) : (max(var_1, var_0)))), (arr_0 [i_0]))))));
    }
    #pragma endscop
}
