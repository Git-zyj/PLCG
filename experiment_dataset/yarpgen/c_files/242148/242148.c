/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (1282904962 && -1282904962);
        var_14 = (max(var_14, var_8));
        arr_3 [i_0] = ((!((var_11 <= (arr_1 [10])))));
        arr_4 [i_0] [i_0] = ((arr_1 [i_0 - 2]) ? var_0 : ((var_12 + (arr_0 [10]))));
        var_15 = (((arr_1 [i_0 - 1]) + (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (min((max((arr_7 [i_1 - 2] [i_1 - 1]), (arr_5 [i_1 - 2] [i_1 - 1]))), ((max((((!(arr_7 [i_1] [i_1 - 1])))), var_12)))));
        var_16 &= ((((arr_5 [i_1 - 1] [i_1 + 1]) ? 260782574 : (arr_7 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 = ((!var_9) ? (!1282904962) : 4294967295);
        var_18 |= ((!(((32487 & (arr_9 [i_2]))))));
    }
    #pragma endscop
}
