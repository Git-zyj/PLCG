/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (((~(min(var_8, var_9)))) ^ ((1 ? 108 : ((var_3 ? 0 : 49520)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = 1012111215752452308;
                var_16 = (arr_3 [i_0 + 1]);
                arr_5 [i_0] = 3315313404;
                arr_6 [i_0] = arr_3 [i_0 + 2];
            }
        }
    }
    var_17 = (var_11 != 3831546295);
    #pragma endscop
}
