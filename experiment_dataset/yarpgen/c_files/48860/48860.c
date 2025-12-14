/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (((((min(var_5, (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) % 1078342649)) : (((~(((arr_1 [i_0]) ? var_7 : 519840495))))))))));
        var_17 = (((arr_2 [i_0]) ? ((((arr_0 [i_0] [i_0]) || (arr_1 [i_0])))) : (arr_1 [i_0])));
        var_18 = ((((!((!(arr_3 [i_0]))))) ? (min(var_3, (arr_3 [i_0]))) : ((((((arr_1 [i_0]) + 2147483647)) << (((((arr_1 [i_0]) + 84)) - 11)))))));
    }
    var_19 = var_11;
    #pragma endscop
}
