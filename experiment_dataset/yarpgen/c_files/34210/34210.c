/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_3, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (~(arr_0 [i_0] [i_0 - 1]));
        arr_2 [i_0] = (arr_1 [i_0 + 3] [i_0 + 1]);
        arr_3 [i_0 + 1] = ((!(arr_1 [i_0] [i_0 + 1])));
        arr_4 [i_0 + 1] [i_0] = 2745023282;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1 - 1] [i_1 + 1] = (((arr_7 [20] [i_1 - 1]) ? 1549944013 : -70810817));
        var_17 = (max(var_17, (((max(56247, 9289))))));
        arr_9 [i_1] = ((arr_5 [i_1 - 1]) ^ (((arr_5 [i_1 - 1]) / (arr_5 [i_1 - 1]))));
    }
    #pragma endscop
}
