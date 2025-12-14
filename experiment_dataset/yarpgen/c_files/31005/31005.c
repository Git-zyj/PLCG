/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= (max((((((max(1884396198, 3177639321))) && ((min(17715537522140814330, var_5)))))), 254));
        var_16 = (min(var_16, ((min(var_13, ((2087479219 ? (min(0, var_10)) : var_9)))))));
    }
    var_17 -= ((((103 - var_2) ? (max(73, (-2147483647 - 1))) : var_2)));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = (min(var_18, (((var_0 ? 2147483647 : 1)))));
        arr_4 [i_1 - 1] = (!(-2147483647 - 1));
    }
    var_19 = (((~(max(var_14, 0)))) * ((max(((var_1 ? (-9223372036854775807 - 1) : -84594017)), 1492585662))));
    #pragma endscop
}
