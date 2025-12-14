/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1712404662;
    var_11 = 1712404661;
    var_12 = ((16917395888861837504 ? (-32767 - 1) : 20));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (arr_5 [i_0]);
                var_14 = (min((min((arr_2 [i_0] [i_0]), 0)), var_8));
                var_15 += 34;
            }
        }
    }
    var_16 = min(var_5, 548087176466880098);
    #pragma endscop
}
