/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-127 - 1) && (-127 - 1));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 += (-127 - 1);
        var_21 += var_5;
        var_22 -= (((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_0)) + ((min(((min((arr_3 [7] [3]), 3))), (max(-5999413791864870594, 52677)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = ((-127 - 1) ? var_14 : (arr_5 [i_1] [1]));
        var_24 += (((arr_4 [i_1] [i_1]) ? var_0 : (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [5] = ((min((arr_8 [i_2 + 2]), 1167097584)));
        arr_10 [i_2] |= ((max(329831019, 52677)));
    }
    var_25 = var_16;
    #pragma endscop
}
