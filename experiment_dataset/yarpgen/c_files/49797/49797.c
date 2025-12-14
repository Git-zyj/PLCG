/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_8;
        var_16 = (min(var_16, (((~(arr_0 [14]))))));
    }
    var_17 = (max((min((3220805593263993853 ^ 122), var_14)), var_12));
    var_18 = (((((((var_0 ? 1831131572 : 10338823759872766520))) ? ((232 ? var_11 : var_10)) : (((3836289866 ? var_0 : 45))))) >> (((min(var_6, var_0)) - 57449))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            {
                var_19 = (min(var_19, (((((((min(var_1, var_0))) <= 24)) ? ((((((((arr_2 [i_2 - 2] [i_1]) % var_9)) + 2147483647)) >> (var_10 + 1770)))) : (((arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1]) % 162)))))));
                var_20 = ((1486804630 ? (((162 > 253) ^ (((-504067693 + 2147483647) >> (232 - 230))))) : var_4));
            }
        }
    }
    var_21 = (min(var_21, ((((max(2100050496, 8589934590)) <= var_12)))));
    #pragma endscop
}
