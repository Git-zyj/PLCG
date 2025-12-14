/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(~25096)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -10;
        arr_3 [i_0] = ((((min((~var_6), (arr_1 [i_0])))) ? ((((arr_1 [i_0]) & (arr_0 [i_0])))) : ((((((arr_0 [i_0]) ^ var_9))) ? ((((arr_0 [i_0]) ? var_6 : var_6))) : var_11))));
        var_14 = (min(var_14, (((-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [5]))))))));
    }
    var_15 += var_2;
    #pragma endscop
}
