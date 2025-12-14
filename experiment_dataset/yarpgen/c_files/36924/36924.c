/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [10] [18] = 243;
                arr_6 [4] [i_1] [i_0] = ((-((15291 ? 0 : 2147483647))));
                arr_7 [8] = (var_8 | 253);
            }
        }
    }
    var_14 = var_10;
    #pragma endscop
}
