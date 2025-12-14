/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((998512418 ? ((((arr_4 [2]) ? -998512419 : (((arr_5 [3] [i_1] [i_2]) ? (arr_0 [i_1] [i_0]) : -998512418))))) : 144115188075855871)))));
                    var_14 = (((arr_2 [i_0] [i_0]) ? (arr_5 [i_1] [i_1 - 2] [1]) : (3049404200 / 3904)));
                }
            }
        }
    }
    #pragma endscop
}
