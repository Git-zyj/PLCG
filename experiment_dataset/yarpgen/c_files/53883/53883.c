/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -4643082562859907851;
    var_13 = 4643082562859907851;
    var_14 = (min(((((var_10 ? var_5 : var_2)))), (max(var_8, (((147 ? var_0 : var_4)))))));
    var_15 = ((((min(1072614544, (max(-1664, var_0))))) ? (max(1562553430, (-9223372036854775807 - 1))) : var_10));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 - 2] [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_17 *= (((~var_9) == (((-22042 + 2147483647) >> (var_2 - 10004)))));
        arr_7 [i_1] &= ((arr_4 [i_1 - 1] [i_1 + 4]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_5);
        var_18 = ((4643082562859907854 ? var_11 : (-122 / 4643082562859907852)));
        arr_8 [i_1] = (((arr_1 [10]) ? 32761 : (arr_1 [0])));
        arr_9 [i_1 + 2] = ((var_2 ^ ((0 ? 0 : (arr_1 [1])))));
    }
    #pragma endscop
}
