/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, -3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (max(1013, 22337));
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = (min((((-3 ? 11 : 26719))), (max((arr_2 [i_0]), 3560698039))));
        arr_5 [i_0] &= ((1 ? 549755812864 : -32166943));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = 38817;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_14 = ((-(((arr_6 [i_1]) / (arr_10 [9])))));
            var_15 = (arr_8 [i_1] [i_2] [i_2]);
        }
        var_16 = (((-32767 - 1) ? ((var_0 ? (min(var_5, -606141046192550315)) : (((var_6 ? 2113495800 : var_8))))) : (((max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1])))))));
        var_17 = (~((max(1, (arr_6 [i_1])))));
    }
    var_18 = (min(var_9, 38));
    #pragma endscop
}
