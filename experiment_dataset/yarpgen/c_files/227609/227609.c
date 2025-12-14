/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 *= (-((((((arr_0 [i_0]) / (arr_0 [i_1])))) ? 1152851135862669312 : var_9)));
                var_18 = (((((-304950761 ? var_6 : 2230448269103514405))) ? (arr_0 [i_0]) : ((65535 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_0 [i_0])))));
                var_19 = 0;
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
