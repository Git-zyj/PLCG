/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((!(-32767 - 1)));
    var_17 = (max(var_17, var_8));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((1 ? (arr_0 [i_0]) : (149 % var_14)));
        var_18 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = ((var_10 ? (-6187720089521776746 == var_4) : var_7));
        arr_6 [i_1] = (!(arr_5 [i_1] [i_1]));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_20 -= var_5;
        arr_11 [i_2] = ((-(((arr_7 [i_2] [i_2]) ? 11096979155610680878 : (((arr_4 [19] [19]) % var_10))))));
    }
    #pragma endscop
}
