/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_10 = (((arr_1 [i_0]) <= var_5));
        var_11 = (min(var_11, ((((((!(arr_1 [i_0])))) % var_0)))));
        var_12 = (((max((max(29, (arr_1 [i_0]))), ((((arr_1 [i_0]) < (arr_0 [i_0] [i_0]))))))) ? (arr_0 [i_0] [i_0]) : 65535);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_1]);
        var_14 = ((var_0 ? (max(1, ((var_6 << (((arr_2 [i_1] [i_1]) + 12143)))))) : 15592));
    }
    var_15 = var_3;
    #pragma endscop
}
