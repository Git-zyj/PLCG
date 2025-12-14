/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (max(var_15, ((((var_13 + (max(7704394188485210097, var_12))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((((192 * (arr_0 [i_0])))) ? (7704394188485210119 && -7704394188485210097) : (((arr_2 [i_0] [i_0]) | -7704394188485210119))));
        arr_4 [i_0] [i_0] = (~-5915201311556349985);
        arr_5 [0] [i_0] = (!828053548);
    }
    #pragma endscop
}
