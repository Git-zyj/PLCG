/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = ((((min((arr_1 [i_0]), var_12))) ? ((var_11 ? (arr_0 [i_0]) : 13)) : (arr_0 [i_0])));
        arr_3 [i_0] |= ((249 ? ((((!((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))))))) : (arr_2 [i_0] [i_0])));
        var_21 = (min(var_21, var_11));
        var_22 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_4))) ? (~2147483647) : (((!415252835435050601) * (arr_2 [1] [6])))));
        var_23 -= (((~(arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (min((((var_9 ? var_16 : (arr_0 [i_1])))), 1));
        arr_8 [i_1] = ((var_18 <= ((1 << (((arr_6 [i_1] [i_1]) - 83))))));
    }
    var_24 = (max(var_24, ((((((var_17 - ((var_10 ? var_14 : var_2))))) ? var_15 : var_16)))));
    var_25 = (((((var_7 ? (!var_13) : ((var_9 ? var_4 : -1))))) ? ((((!(var_17 && var_11))))) : (min(315956373, 1))));
    var_26 = var_15;
    var_27 = ((var_15 ? var_8 : (((((32767 ? 1 : 1))) ? -1151195006 : ((var_10 ? var_7 : var_0))))));
    #pragma endscop
}
