/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = var_0;
        var_14 = (((((((max((arr_3 [i_0]), 375984248613549275))) ? ((((arr_1 [i_0]) && var_4))) : ((-(arr_1 [i_0])))))) ? ((max(4, 1))) : (((arr_3 [i_0 + 1]) * var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = ((4 > (arr_5 [i_1])));
        arr_6 [i_1] = ((arr_5 [i_1]) <= (arr_5 [i_1]));
        arr_7 [i_1] = (((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1]))) + (arr_4 [i_1])));
        arr_8 [i_1] [i_1] = (((arr_4 [i_1]) + 4));
    }
    var_16 = (var_12 >= var_8);
    var_17 = ((var_0 * ((((!(~var_9)))))));
    #pragma endscop
}
