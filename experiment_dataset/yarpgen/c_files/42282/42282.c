/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_0 / var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_0 [4] [i_0]) ? (arr_0 [i_0] [7]) : (arr_0 [12] [12]))));
        arr_4 [i_0] = (~var_14);
    }
    var_20 = ((((24576 || ((max(var_16, var_15))))) ? ((-(~var_18))) : (((var_14 ? var_15 : (~var_13))))));
    #pragma endscop
}
