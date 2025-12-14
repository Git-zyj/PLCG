/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = (var_2 ? var_16 : ((~((max(var_5, var_13))))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = arr_1 [i_0 - 3] [i_0];
        var_22 -= (min(var_19, (arr_1 [i_0] [i_0 + 1])));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (((arr_2 [i_1]) ? 0 : 1));
        var_24 = (arr_0 [i_1]);
        var_25 = (min(var_25, 0));
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = var_4;
        var_26 = (max(var_26, (((1 ? 1 : 8)))));
    }
    #pragma endscop
}
