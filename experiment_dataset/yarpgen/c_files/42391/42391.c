/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 += var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] [i_0] = ((var_17 * (arr_1 [i_1] [i_0])));
                arr_7 [i_1] = (max((((805306368 ? (arr_4 [i_1] [i_1] [i_0]) : (arr_5 [i_1])))), (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}
