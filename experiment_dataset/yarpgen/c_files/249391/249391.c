/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+(((29935 + var_16) ? var_1 : var_5))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = var_6;
        var_19 = var_11;
        var_20 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_21 = (max((((!((min((arr_5 [i_1]), (arr_4 [i_1]))))))), var_8));
        arr_6 [i_1] [i_1] = ((-((max(var_3, var_3)))));
        arr_7 [i_1] [i_1] = (max(((((((((arr_3 [i_1] [i_1 - 2]) + 2147483647)) << (var_8 - 7025236355130809313))) | var_3))), 939673534));
        arr_8 [i_1] [i_1 - 2] = var_3;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_22 = (-29935 | 9909);
        var_23 = var_5;
    }
    #pragma endscop
}
