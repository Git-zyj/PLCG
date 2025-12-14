/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [1] = ((26445 ? ((max(-26436, -26445))) : var_2));
        arr_3 [i_0] [i_0] = max(var_7, (((-((var_5 ? (arr_0 [i_0]) : var_4))))));
    }
    var_13 = ((!((!(3216732840 && var_1)))));
    var_14 = -var_6;
    var_15 &= ((((((min(var_1, var_5))) ? var_7 : ((var_1 ? var_12 : 1078234485)))) != var_4));
    #pragma endscop
}
