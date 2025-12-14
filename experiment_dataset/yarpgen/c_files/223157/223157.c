/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((+((min((var_9 >= var_4), (var_10 > var_2))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = ((2 & (arr_2 [i_0 + 1])));
        var_13 |= 73;
    }
    var_14 = (((((!8176) ? (((min(var_8, var_8)))) : var_4))) ? var_1 : (((((var_7 ? 32759 : var_5))) ? (1 != 7906) : var_4)));
    #pragma endscop
}
