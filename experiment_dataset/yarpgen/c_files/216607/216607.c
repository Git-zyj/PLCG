/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -107;
        var_20 = (((((((arr_0 [i_0]) && (var_10 * 3))))) == (((arr_1 [i_0]) ? var_10 : (((arr_1 [i_0]) & 12))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (max(var_10, -3));
        arr_8 [i_1] = ((((max(var_9, 90))) << (((var_2 + 9468) - 14))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = (max((((arr_6 [i_2]) ? (-2147483647 - 1) : var_6)), var_16));
        var_22 = (((max(2147483647, var_6))));
        var_23 = 6;
        var_24 = 2147483647;
    }
    var_25 |= var_1;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 = (min((max(1, (9223372036854775807 | var_14))), (max((min((arr_13 [6]), -993031247279970177)), 2147483647))));
        var_27 = (max(var_27, ((min(var_11, -1539437729)))));
    }
    var_28 = (-((~((max(var_18, var_14))))));
    #pragma endscop
}
