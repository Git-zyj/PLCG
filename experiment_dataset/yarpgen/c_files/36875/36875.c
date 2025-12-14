/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = ((((~(arr_0 [i_0 + 1]))) << ((((((var_7 ? -36 : 5729698727074837989)) & ((max(1033741276, (arr_1 [i_0])))))) - 3405239481417985857))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((var_9 * ((((((arr_2 [7] [i_2]) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_6 [2] [i_1 + 1] [2] [19]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_0] [1] [9] [i_2])))))));
                    var_15 = var_8;
                }
            }
        }
        var_16 = (((arr_3 [4] [4]) ? (arr_0 [i_0]) : (((max((arr_5 [i_0 + 2] [5]), 1)) - ((((arr_5 [i_0 + 3] [18]) ? 60923 : var_11)))))));
        var_17 = (((((arr_2 [8] [i_0 + 1]) ? var_5 : (arr_2 [i_0] [i_0 + 1]))) * (((arr_2 [i_0] [i_0 + 1]) - (arr_2 [i_0] [i_0 - 1])))));
    }
    #pragma endscop
}
