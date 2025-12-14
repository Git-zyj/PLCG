/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((var_3 ? (((166 - var_2) ? 0 : var_5)) : ((min(((min(190, 37347))), (~var_15))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 -= (min((var_10 * var_15), (min((arr_1 [i_0] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 - 2])))));
        arr_2 [i_0] = ((0 ? ((((max((arr_1 [i_0] [i_0]), var_12))) ? (arr_0 [i_0 + 1] [i_0]) : (min(var_0, (arr_0 [i_0] [8]))))) : (~var_12)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = (max(var_19, 0));

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_2] = (+-166);
            arr_9 [i_1] [i_2] = (~(max((var_2 / 165), 16978682325247382240)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_20 = ((arr_5 [i_3] [i_3]) ? (arr_3 [i_3]) : 8094690833335940091);
        arr_13 [12] = (((17295522102912433221 / var_0) ? ((var_2 ? (arr_0 [i_3] [1]) : (arr_3 [i_3]))) : (arr_5 [i_3] [i_3])));
        arr_14 [i_3] = var_3;
    }
    var_21 = ((var_0 - 4582730355044376583) >= 16978682325247382240);
    #pragma endscop
}
