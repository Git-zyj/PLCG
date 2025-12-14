/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+((((!32764) && -2823512519454435143)))));
    var_20 -= ((((max((var_3 - var_17), ((234 >> (51 - 50)))))) + (((max(var_13, 204)) / ((min(17, 1899420510)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_7 >= (arr_1 [i_0]))))) <= (((arr_0 [1] [i_0]) >> (var_11 - 15360630331148721164)))));
        arr_3 [i_0] = ((-(var_4 / var_5)));
        var_21 = (((1899420535 / var_9) + (arr_1 [i_0])));
    }
    #pragma endscop
}
