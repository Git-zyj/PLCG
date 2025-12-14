/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 168;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!((((arr_4 [0] [i_0 - 1]) ? (arr_4 [6] [i_0 - 1]) : var_10)))));
                var_18 = ((!(arr_1 [i_0 + 2] [i_0 - 2])));
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
