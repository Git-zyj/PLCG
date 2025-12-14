/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 9223372036854775807;
        arr_4 [i_0] [i_0] = var_10;
        var_11 |= (((arr_2 [i_0 - 2]) ? (arr_1 [i_0 + 1] [i_0 - 2]) : (arr_1 [i_0] [i_0 - 2])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_12 = var_0;
        arr_7 [i_1] = max(((((arr_5 [i_1 + 1]) ? var_0 : var_5))), (max((arr_5 [i_1]), (arr_5 [10]))));
        arr_8 [i_1] [i_1] |= (min((max(((var_5 ? var_8 : var_3)), (min((arr_0 [i_1] [i_1]), var_3)))), ((max((arr_1 [i_1] [i_1]), (var_3 > var_3))))));
        arr_9 [i_1 - 1] = 1;
    }
    var_13 = (max(var_13, var_7));
    #pragma endscop
}
