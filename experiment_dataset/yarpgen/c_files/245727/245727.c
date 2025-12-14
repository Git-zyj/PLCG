/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = 809876560;
        var_19 ^= (arr_1 [i_0] [i_0]);
        var_20 = (min(var_20, (((var_13 ? ((max((arr_0 [i_0] [i_0]), -809876562))) : 18218513051798968751)))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 ^= -1013891321;
            var_22 = (min((-9223372036854775807 - 1), (arr_3 [i_1 - 2])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_23 = ((((996717515 ? (-2147483647 - 1) : ((-(arr_4 [i_1]))))) < (max(var_7, (arr_6 [i_1 + 1])))));

            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                arr_14 [i_3] [14] |= ((((min((arr_13 [i_1 + 1]), 8706492990850962188))) ? (arr_10 [i_1 - 1] [i_1 - 1]) : (((arr_13 [i_1 - 2]) | (arr_11 [i_1 - 1] [i_1 - 2])))));
                var_24 = ((1 ? (arr_11 [i_1 - 1] [i_1 - 1]) : (min((-1859799902 - var_1), 126100789566373888))));
            }
            var_25 = (min(94, 18218513051798968761));
        }
        var_26 = (min(var_26, ((+(((arr_10 [i_1] [i_1 - 2]) % -7604185333191241890))))));
        var_27 = ((((min(-809876560, ((min(156, 94)))))) % (((!17844173269071896018) ? (67108863 * var_10) : (((0 ? var_5 : 996717503)))))));
    }
    var_28 = -6617412880384473945;
    var_29 = var_1;
    var_30 = var_5;
    #pragma endscop
}
