/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = arr_0 [i_0 + 1];
        var_13 ^= (((!0) / var_9));
        var_14 -= var_10;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = ((!(arr_0 [6])));
        var_15 -= (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = (arr_8 [i_2]);
        var_17 = (((arr_0 [i_2]) ? 3221225472 : -1));
        var_18 = (((((-1 ? var_3 : var_6))) + 0));
    }
    var_19 = (min((max(((var_1 ? 8 : var_6)), var_8)), var_6));
    var_20 = var_7;
    var_21 = (max(-17, var_5));
    var_22 = (max(var_22, (((var_8 < (min(3558980823, var_8)))))));
    #pragma endscop
}
