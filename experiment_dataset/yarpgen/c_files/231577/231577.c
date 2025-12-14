/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((((4589 && (8388544 / 1220457874))) ? ((max(((0 ? 855736735 : 0)), -1220457881))) : (((arr_1 [i_0] [i_0]) / ((2086311834 ? var_2 : -8869449048689484813))))));
        var_17 = -4;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = ((arr_2 [i_1]) & ((((arr_2 [i_0]) ? 4 : 8388532))));
            var_19 = (((((arr_2 [i_1]) || (arr_3 [i_0] [i_1]))) ? (arr_3 [i_0] [i_1]) : ((((arr_1 [i_0] [i_0]) > (~7011934442098888982))))));
            var_20 = -1;
            var_21 = (min((!-1220457872), (var_1 && var_11)));
        }
        arr_4 [i_0] = ((~(((251 & 5656752767383104780) ? (max(-1471692539, 0)) : (min(-335594855, var_0))))));
        var_22 = 2733365479;
    }
    #pragma endscop
}
