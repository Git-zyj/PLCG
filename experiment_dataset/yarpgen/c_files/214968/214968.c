/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((arr_1 [i_0] [i_0 - 1]) & ((2826 ? var_10 : var_3)))) % (((((arr_2 [i_0]) ? 1 : 1)) * (arr_2 [i_0 - 1])))));
        var_11 = 1;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_12 -= 69;
        var_13 = 10818;
    }
    var_14 = var_0;
    var_15 = (max(var_7, var_6));
    #pragma endscop
}
