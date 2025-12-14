/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 ? ((1 ? var_7 : var_9)) : var_6);
    var_11 += min((((!281474976710655) ? (var_3 / var_1) : var_3)), var_6);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [0] [i_0] = (((arr_0 [i_0 - 2] [i_0 - 1]) < 18446744073709551599));
        var_12 = (max(var_12, ((-(arr_0 [i_0] [12])))));
        arr_3 [i_0] = var_2;
        arr_4 [3] = (var_8 ? (arr_0 [i_0 - 2] [i_0 + 1]) : ((((var_8 == (arr_1 [i_0] [i_0]))))));
        var_13 = arr_0 [i_0] [i_0];
    }
    #pragma endscop
}
