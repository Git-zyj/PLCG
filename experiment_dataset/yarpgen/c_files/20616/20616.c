/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (min(var_5, 504154286));
                arr_6 [i_0] [i_0] = (((0 / 298) ? (min((((arr_5 [i_0] [i_1]) ? 12930867037685350410 : 6)), var_9)) : (!1)));
            }
        }
    }
    var_16 = var_4;
    var_17 |= ((var_10 / (var_6 - var_1)));
    #pragma endscop
}
