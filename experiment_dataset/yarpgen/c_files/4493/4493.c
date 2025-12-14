/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = min((arr_1 [i_0]), 5307);
        var_12 = (((-1 ? 2147483647 : 0)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 &= ((((128 ? -1 : (arr_1 [i_1]))) <= (((max(128, 65535))))));
        arr_4 [i_1] = (((((var_3 ? -24 : (arr_0 [5])) & ((max((arr_2 [i_1]), -2147483630)))))));
    }
    var_14 = (max((max(((min(-1, 115))), -0)), var_7));
    var_15 = ((max((((var_9 ? -93 : var_5))), ((121 ? 1 : var_8)))));
    #pragma endscop
}
