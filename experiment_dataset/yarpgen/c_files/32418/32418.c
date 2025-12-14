/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0])));
        var_13 = (((arr_0 [i_0]) && (arr_0 [i_0])));
        var_14 = (max(var_14, ((-(max((arr_1 [i_0 + 2] [i_0 + 1]), ((var_6 ? var_3 : (arr_0 [6])))))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = 2099985657698902923;
        arr_5 [i_1] = arr_1 [i_1] [i_1];
        arr_6 [i_1] = (60 % 63);
    }
    #pragma endscop
}
