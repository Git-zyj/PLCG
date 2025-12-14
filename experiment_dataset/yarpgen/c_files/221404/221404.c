/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((~(var_6 + var_0))) == (~5)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-(~var_4)));
        var_21 += var_2;
        var_22 = (min(var_22, (var_12 <= 250)));
    }
    #pragma endscop
}
