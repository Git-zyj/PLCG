/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 ^= (max(((((max(3815720557, 396))) ? var_6 : var_6)), -7098246892087369345));
    var_16 += (!var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((1889360933807951699 ? 40 : 9223372036854775807));
        arr_4 [i_0] [i_0] = -7098246892087369345;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (~32114472)));
        var_18 = ((7098246892087369347 ? 8191 : -7098246892087369345));
        var_19 = ((524287 ? 7098246892087369361 : 65535));
        var_20 ^= 0;
        var_21 = (min(var_21, (((719986122 ? 13072764661546611901 : -6943)))));
    }
    var_22 = (((!2147483647) ? var_5 : (max((min(13072764661546611898, -4177)), ((min(-524288, 2147483647)))))));
    #pragma endscop
}
