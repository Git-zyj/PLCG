/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = ((((((((var_7 / (arr_0 [i_0] [i_0])))) ? (4055409479 / var_5) : (arr_0 [i_0] [i_0])))) ? (max((max(9238277412830164603, var_8)), 37839)) : ((((~340383894) >> (var_8 - 3993444054920171991))))));
        var_12 *= ((var_9 | (((15798441397895335516 > 239557834) ? (~var_1) : ((var_10 ? var_9 : var_6))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_13 = var_9;
        var_14 *= ((-(max(var_9, (arr_2 [11])))));
        var_15 = ((239557834 ? (min(3652561572282311280, -2291081346582085834)) : ((((arr_2 [i_1 + 1]) / var_10)))));
        var_16 *= (((37839 - 9208466660879387037) * (((arr_3 [i_1] [i_1]) * (min(1225531013, 9238277412830164575))))));
    }
    var_17 *= var_6;
    #pragma endscop
}
