/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_10 = ((+(((arr_1 [i_0] [i_0 + 4]) ? -14766 : (arr_0 [i_0] [i_0 + 2])))));
        var_11 += (arr_1 [i_0 + 1] [i_0]);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] = 6546414691988765904;
            var_12 = (((arr_1 [i_0 + 4] [i_1 - 1]) > (((((~1) + 2147483647)) >> (((65535 >> 1) - 32741))))));
            var_13 = (arr_1 [i_0] [i_1]);
            var_14 = ((1 >> (16337768950296085291 - 25)));
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_15 = (((16 + 1340) >> ((((12 ? (arr_1 [i_2 + 1] [i_0 + 4]) : (arr_1 [i_2 - 3] [i_0 + 3]))) - 1794406179))));
            var_16 = (max(1, 816624648521264410));
            var_17 = (((((((arr_3 [i_2 - 2] [i_0]) != 128)))) > (((1 / var_8) * var_0))));
        }
        var_18 = ((((max(65521, 4))) - (((arr_3 [i_0] [i_0]) | (arr_6 [i_0] [i_0] [i_0 + 2])))));
        arr_9 [i_0] [i_0] = (((((~5) ? (arr_1 [i_0] [i_0 + 1]) : (((~(arr_0 [i_0] [i_0])))))) | 1));
    }
    var_19 = (~var_6);
    var_20 = (26 >> 1);
    #pragma endscop
}
