/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 91;
        var_21 = (((((var_13 ? (arr_1 [i_0]) : -9223372036854775797))) ? (18446744073709551615 / 268435455) : var_0));
        var_22 += (arr_0 [2]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((max((max((-2147483647 - 1), var_7)), ((var_18 << (arr_4 [i_1])))))) ? (((arr_1 [i_1]) ? (((arr_5 [i_1]) ? 9 : 0)) : (arr_6 [i_1] [i_1]))) : (((!(arr_3 [i_1]))))));
        var_23 = 19;
    }
    var_24 = ((((((2147483647 ? var_16 : var_3)) << (var_0 - 222)))) ? ((((((var_19 ? var_8 : var_0))) ? var_3 : ((-3810527070470492664 ? var_1 : var_17))))) : ((var_3 ? ((max(-1998764967, var_14))) : 3)));
    var_25 = (48 | 255);
    #pragma endscop
}
