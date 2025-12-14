/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [2] = ((((((arr_3 [17]) + var_12))) ? ((((var_5 ? (arr_1 [i_0]) : -60)) * (((arr_1 [i_0 + 1]) >> (arr_1 [i_0]))))) : var_16));
        var_18 = (arr_2 [10] [i_0]);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_5 [i_1]) ? ((max(-1, (((arr_0 [0]) | var_7))))) : (max((var_4 + 1879339430), (arr_1 [i_1])))));
        var_19 = ((144 ? var_4 : ((max(var_6, (arr_2 [i_1] [i_1]))))));
    }
    var_20 -= (var_7 / var_11);
    #pragma endscop
}
