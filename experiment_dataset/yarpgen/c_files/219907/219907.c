/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= min((~var_4), (!42));
    var_21 *= 1177725885056643913;
    var_22 ^= -1460717667;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_23 ^= 4294967295;
        var_24 = (((((((arr_1 [i_0]) & (arr_1 [i_0 + 1]))))) ? ((((((3121572207132404072 ? var_9 : 4294967295))) ? var_14 : var_12))) : ((-(max((arr_0 [i_0]), var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_25 = -32765;
        var_26 = (max(var_26, (((8712731762769625300 != (arr_1 [i_1 + 3]))))));
        var_27 = (((4294967295 ? 8712731762769625300 : 4849639234398580973)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_28 = (min((arr_3 [i_2]), var_2));
        var_29 = ((var_9 ? (max(((4294967295 ? 1760278887571152218 : 458062342)), ((1244622488 ? 4294967295 : 1177725885056643929)))) : -44));
    }
    var_30 = 2147483647;
    #pragma endscop
}
