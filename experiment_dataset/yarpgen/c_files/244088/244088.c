/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((((arr_1 [i_0 - 3]) ? (arr_5 [i_0 - 1] [i_0] [15]) : (arr_4 [i_0] [i_0] [i_0 - 3])))) ? (arr_5 [i_0] [i_0] [6]) : (((arr_2 [i_0 + 1]) ? (((arr_5 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [1]))) : (arr_5 [i_1] [i_0] [i_0 - 3]))));
                var_16 = (arr_5 [i_0] [8] [i_1 - 1]);
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
