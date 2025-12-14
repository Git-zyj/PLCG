/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [3] = ((arr_0 [10] [i_0 - 1]) % (52318 >= -27668));
        var_18 = (max(var_18, (((48996 << (16368 - 16356))))));
        var_19 = (max((~27), ((27678 << (24 - 11)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (-(max(var_12, var_3)));
        arr_6 [i_1] = (max((min(49013, (arr_3 [i_1 - 1]))), ((min((min(var_2, var_2)), ((min(108, (arr_1 [i_1] [i_1])))))))));
        var_20 ^= (((~var_5) && (((3550578419 * (arr_4 [i_1 + 2]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] &= ((-2147483647 > ((min((arr_8 [i_2]), var_12)))));
        var_21 -= ((~(((-6 > 16381) >> (18 > -3)))));
        var_22 = (((-2147483641 || var_6) | (arr_8 [i_2])));
    }
    var_23 = (1 >= -980303073);
    #pragma endscop
}
