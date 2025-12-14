/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_9 == var_16) ? var_11 : var_14)) * (min(((var_11 ? 1 : -999906946)), var_9))));
    var_21 = ((-var_7 % ((var_15 ? 1 : (var_15 == 9588938480774520136)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = ((var_6 ? var_11 : 0));
        var_23 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((arr_1 [3] [4]) ? 8857805592935031454 : var_19);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = var_8;
        var_24 ^= (2147483637 & 57676);
        arr_7 [11] [5] = (min(-1023395512, 1));
    }
    var_25 = 101508374;
    #pragma endscop
}
