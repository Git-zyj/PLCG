/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] &= (((arr_2 [i_0]) ? ((1 ? var_11 : ((-59 ? (arr_2 [i_0]) : (arr_0 [i_0]))))) : (((((var_6 < var_13) != (((arr_1 [i_0] [i_0]) + var_3))))))));
        var_18 = (((var_14 + 27) <= var_6));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = var_5;
        var_19 = (((((var_3 ? (arr_2 [i_1]) : var_10))) ? var_9 : (arr_2 [i_1])));
        var_20 = (((arr_0 [i_1]) ^ (arr_5 [i_1])));
        arr_7 [i_1] = (arr_4 [i_1]);
    }
    var_21 = (((~((var_16 ? var_12 : var_13)))));
    #pragma endscop
}
