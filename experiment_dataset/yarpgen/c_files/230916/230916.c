/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (max((var_4 & var_5), (!var_5)));
    var_19 = (min(var_19, var_15));
    var_20 += (max(var_9, (13141 < 1)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = ((((((6323049186993632605 - 13155) / var_8))) ? (((543253054 ? 13141 : (!var_9)))) : var_6));
        var_22 = (max(var_6, -543253057));
        var_23 = (min(var_23, (max((max(8642078478565056330, (arr_2 [i_0 - 1] [i_0 - 2]))), ((-8642078478565056330 ? -8642078478565056302 : 33))))));
        arr_4 [4] = var_5;
    }
    #pragma endscop
}
