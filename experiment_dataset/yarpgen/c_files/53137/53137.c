/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max((((var_11 < (384 % 31)))), 9223372036854775807));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = -9223372036854775789;
                    var_20 *= max(((-9223372036854775807 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2]))), (min(-9223372036854775807, (arr_3 [i_1 - 1]))));
                    var_21 = ((((((-1 ? var_16 : var_2))) ? ((var_16 ? 10803486722994445346 : 2594250024623264753)) : var_0)));
                }
            }
        }
    }
    var_22 = -1251181903;

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_23 = (max(9223372036854775806, (((-((-1251181905 ? 1 : var_11)))))));
        var_24 = ((((((-((31 ? (arr_9 [i_3]) : var_12)))) + 2147483647)) << (1 - 1)));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_25 = (min(var_1, (min(47771, (arr_13 [i_4 + 2] [i_4 + 3])))));
        var_26 = ((min((((var_8 ? (arr_14 [i_4 + 2] [10]) : 67))), ((var_11 ? var_10 : -670779042102164542)))));
    }
    #pragma endscop
}
