/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1241846358;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (((~var_4) ? var_14 : (arr_1 [i_0])));
        var_20 = ((arr_1 [i_0]) ? -2147483629 : (arr_1 [i_0]));
        var_21 = (((arr_1 [i_0]) << (arr_1 [i_0])));
        arr_2 [i_0] = ((63416 ? ((65408 ? 1056964608 : (arr_1 [i_0]))) : 3238002676));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((var_17 << (((((arr_0 [i_1]) + 47)) - 18)))));
        var_22 = ((!(((((arr_0 [i_1]) / var_10))))));
        arr_7 [i_1] [i_1] = ((max((((-2147483647 - 1) ^ (arr_4 [i_1]))), (arr_4 [i_1]))));
    }
    var_23 = max((((!((max(var_1, var_13)))))), (((((0 ? var_11 : 2120))) ? (min(1193190223, 0)) : (var_13 ^ var_15))));
    var_24 = 2119;
    #pragma endscop
}
