/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = ((-19688 ? 255 : -1981564079));
        var_19 = (arr_1 [i_0]);
        var_20 = ((((((max(var_12, (arr_2 [i_0]))) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0])))) ? (((((arr_3 [i_0] [i_0]) - var_3)) * (((arr_3 [i_0] [i_0]) ? (arr_2 [i_0]) : var_9)))) : ((((var_11 ? (arr_3 [i_0] [i_0]) : var_4))))));
        var_21 = (min(var_21, (((((var_11 * var_0) ? (arr_1 [i_0]) : var_2))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 = ((((arr_4 [i_1]) ? ((min(34284, 2147483647))) : ((var_5 & (arr_0 [i_1] [i_1]))))));
        arr_6 [i_1] = (2662970546 < 1);
    }
    var_23 &= (~(((51239 + -2147483647) / (~var_9))));
    #pragma endscop
}
