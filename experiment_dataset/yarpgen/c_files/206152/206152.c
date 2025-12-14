/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = arr_0 [i_0] [i_1];
                    arr_10 [i_0] = ((var_2 - (arr_0 [i_0] [i_2])));
                }
            }
        }
    }
    var_19 = ((var_0 ? (((min(var_8, var_3)))) : (max(var_11, (max(62640, var_9))))));
    var_20 -= var_10;
    var_21 = ((!(((100 ? 255 : 3)))));
    #pragma endscop
}
