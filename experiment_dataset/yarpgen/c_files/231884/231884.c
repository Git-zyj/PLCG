/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_6, var_6))) ? var_12 : (((((7345468110797133874 ? -22655 : 60210))) * (~var_9)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 -= (((arr_0 [i_0 + 2]) && var_6));
        arr_2 [i_0] [i_0] = 7345468110797133874;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((~(arr_1 [i_1 - 1]))) & (min(var_8, ((max((arr_1 [2]), (arr_0 [i_1]))))))));
        arr_5 [i_1 - 1] = (max((min(29320, (arr_1 [11]))), (((!(arr_1 [i_1]))))));
    }
    #pragma endscop
}
