/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (1 + 1148417904979476480);
        var_15 = ((!(((0 * (arr_1 [i_0 - 1]))))));
        var_16 = (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 2]) : var_13));
        arr_5 [8] [8] = (!0);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [19] [i_1] = (0 ? (arr_8 [1] [1]) : -31128);
        arr_11 [i_1] = (arr_8 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = (!((!(((var_9 ? var_5 : (arr_6 [i_2])))))));
        var_17 = ((1843163999 < ((max(152, (7 <= var_2))))));
        arr_15 [i_2] = (arr_6 [i_2]);
        arr_16 [i_2] [i_2] = ((max(((max(var_2, (arr_12 [i_2] [i_2]))), (arr_13 [i_2])))));
    }
    #pragma endscop
}
