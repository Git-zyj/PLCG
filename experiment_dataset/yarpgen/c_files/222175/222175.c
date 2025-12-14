/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (6743836211084396046 & 105);
        var_16 = (min((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0] [3])));
        arr_3 [i_0 - 1] = 8;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 = var_9;
        arr_7 [i_1] = -var_9;
        var_18 = ((((var_10 ? var_13 : var_12))) ? var_12 : var_2);
        arr_8 [i_1] = ((var_0 ? ((53666 << (-9 + 9))) : (var_7 == var_3)));
        arr_9 [i_1] [i_1] = var_1;
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_12 [1] [11] = ((((((2016 || 67) ? var_2 : (arr_5 [i_2] [0])))) ? (((arr_10 [i_2 - 3] [i_2 - 2]) ? var_1 : var_12)) : (((-(!2147483647))))));
        arr_13 [i_2] = ((-((var_1 + (arr_5 [i_2 + 1] [2])))));
    }
    var_19 = ((261888 ? -9 : 3032287146));
    #pragma endscop
}
