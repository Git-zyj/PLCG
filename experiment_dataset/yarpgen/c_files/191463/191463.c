/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~2688822630);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-2861244441 % ((-(arr_0 [i_0])))));
        var_18 = var_15;
        var_19 = var_3;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (20 % 122);
        arr_8 [i_1] [i_1] = (~4294967295);
        var_20 = ((((max((((arr_4 [11] [11]) - var_10)), 1))) < ((437518153 ? var_3 : (max(-21, 47))))));
    }
    var_21 = var_5;
    var_22 &= (max(var_9, -var_16));
    #pragma endscop
}
