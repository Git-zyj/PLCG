/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [6] = var_10;
                var_16 = (max(var_16, (arr_6 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
