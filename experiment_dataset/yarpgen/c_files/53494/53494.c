/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (var_6 && var_7);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] = var_6;
        arr_8 [i_1] [i_1 - 1] = (max((arr_5 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 - 1] [i_1 - 1])));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((-(((((-(arr_10 [i_2])))) ? ((min((arr_1 [i_2]), (arr_5 [i_2] [i_2])))) : var_2))));
        arr_13 [i_2] = (!-1);
    }
    var_19 = (min(var_19, 0));
    var_20 |= (min(32755, 1));
    var_21 = (max((((!var_9) ^ var_17)), var_2));
    #pragma endscop
}
