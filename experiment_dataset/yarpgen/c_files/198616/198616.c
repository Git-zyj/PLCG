/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, ((((arr_1 [i_0 + 2]) < (((71119573 ? 10 : -71119570))))))));
        arr_4 [i_0] = ((!(arr_3 [i_0])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_19 *= ((-71119573 ? (((arr_7 [i_1 - 1]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 - 1]))) : -71119573));
        var_20 = (((max(var_7, (arr_5 [i_1] [i_1]))) >> ((-(71119560 < -71119574)))));
    }
    var_21 = var_0;
    #pragma endscop
}
