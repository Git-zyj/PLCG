/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_13));
    var_20 = (((var_14 | var_13) ? var_14 : ((((!(((var_0 ? 30225 : var_0)))))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 = (min(var_22, ((((((((arr_1 [i_0]) | (arr_0 [8]))) | (((arr_1 [i_0 - 1]) & (arr_1 [i_0]))))) | (((arr_1 [i_0]) ^ (~-681757640))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] &= ((((((2523095449246324703 == (arr_3 [6]))))) >= (arr_3 [i_1])));
        var_23 = (min(var_23, -16306335753429814596));
        var_24 = ((~(arr_3 [i_1])));
        arr_5 [i_1] = (arr_3 [i_1]);
    }
    var_25 = var_10;
    #pragma endscop
}
