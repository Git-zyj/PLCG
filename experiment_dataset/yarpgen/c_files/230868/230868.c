/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = 1887420922;
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 2] [i_0 + 1])))) ? ((((arr_1 [i_0 - 1] [i_0 - 1]) ^ (arr_2 [i_0 + 2] [i_0 + 2])))) : (-1 - 3510453810));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (min((arr_1 [i_1] [i_1]), ((var_1 ? var_12 : (arr_1 [i_1] [i_1])))));
        var_19 = (max((min((((var_15 | (arr_5 [i_1])))), 3510453810)), (((var_9 ? ((21 ? var_11 : 0)) : (~234))))));
    }
    var_20 = (min(var_17, (max((((784513485 ? 21 : var_14))), 784513486))));
    var_21 = min(var_15, (-0 / var_1));
    #pragma endscop
}
