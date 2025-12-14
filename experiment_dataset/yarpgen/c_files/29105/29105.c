/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!var_10) ? var_2 : var_5)) + ((var_3 / (max(var_8, 91))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-(!-5619256346833738512)));
        arr_4 [i_0] = ((~(((arr_1 [i_0]) ? (arr_2 [i_0]) : var_4))));
        var_12 = (max(-23, (arr_1 [4])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((~((116 ? (arr_1 [i_1]) : (arr_2 [i_1])))));
        var_13 = ((!(arr_2 [i_1])));
        var_14 = (min(var_14, ((var_10 == (arr_5 [i_1] [18])))));
    }
    var_15 = -44;
    #pragma endscop
}
