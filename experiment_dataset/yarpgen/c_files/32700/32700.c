/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((280772637 ? 32767 : 173)))));
        var_11 += (((61168 ? (arr_2 [i_0]) : var_10)));
    }
    var_12 = (((((var_3 + (!-1019195693)))) ? (((min(var_2, 2371432192)) >> (27008 >= 32758))) : ((((!((min(var_0, var_9)))))))));
    #pragma endscop
}
