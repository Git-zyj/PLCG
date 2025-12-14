/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = ((65529 & (((((-31943 ? 10 : var_6))) ? 35184372088831 : (var_10 ^ 6)))));
        var_13 = ((var_4 || (((-1181946246 ? (arr_1 [8]) : (arr_0 [i_0 - 3]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_14 = (min(var_14, (~32245)));
            arr_6 [i_1] [i_1] = (((((-(arr_4 [i_0 + 2] [i_1] [i_0 + 1])))) ? (max(var_6, (arr_0 [i_0]))) : (~var_4)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = ((31943 ? ((~(arr_4 [i_0] [i_2] [i_0 - 2]))) : (19842 * 12887)));
            var_15 = (max(var_15, 0));
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_16 = (((arr_7 [10]) + (-1 & 106)));
        var_17 = (max(var_17, (((~(arr_7 [10]))))));
    }
    #pragma endscop
}
