/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = ((+(((var_16 & var_15) ? var_3 : var_2))));
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) & (arr_0 [i_0] [0])));
        arr_3 [i_0] = (1141942559 % (arr_0 [i_0] [i_0]));
        var_21 = (min(var_21, ((((arr_1 [i_0]) ? -var_6 : (arr_0 [i_0] [i_0]))))));
    }
    #pragma endscop
}
