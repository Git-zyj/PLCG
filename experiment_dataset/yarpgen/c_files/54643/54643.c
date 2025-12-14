/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((var_8 ? ((((max(var_7, var_17))) ? ((var_17 ? 25977 : 32181)) : var_4)) : ((9319 ? -32163 : 11827925))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 2] = (min(-9690, (((arr_1 [i_0 + 1] [i_0 - 2]) ? var_13 : (arr_1 [i_0 + 2] [i_0])))));
        var_20 = 4858712482827412070;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_21 += 42898;
        var_22 = ((~(max(((105 ? -24 : var_8)), (24609 - 23772)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = -9770;
        arr_10 [i_2] [i_2] = ((((((4233161642 | (arr_4 [i_2])))) ? (((((arr_7 [0] [11]) + 2147483647)) >> (22403804 - 22403803))) : 650081728)));
    }
    var_23 = (((!(((var_13 ? var_18 : var_12))))));
    #pragma endscop
}
