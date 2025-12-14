/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_3 * ((max(var_13, 8192)))))) ? (~17605) : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_16 += (arr_0 [i_0]);
        var_17 = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0]) - 14822526824668918545));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = max(((((arr_5 [i_1]) ? (arr_2 [i_1] [i_1]) : 17609))), (min(-9223372036854775807, (((var_3 ? (arr_1 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))))));
        arr_7 [i_1] = (arr_2 [i_1] [i_1]);
    }
    #pragma endscop
}
