/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = var_7;
    var_22 = 0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_23 ^= (max((~var_5), (((var_9 + -573754145) ? (var_2 / 2097151) : (arr_0 [i_0])))));
        var_24 = (((((72 ? 15379 : 26467))) ? ((max(-115, 62062))) : (max(var_7, ((9223372036854775807 ? var_14 : var_7))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_25 *= var_11;
        var_26 = (max(var_26, var_14));
    }
    var_27 = var_18;
    #pragma endscop
}
