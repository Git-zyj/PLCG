/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-2112122025 + 2147483647) << (60162 - 60162)));
    var_12 = var_6;
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(((~(~1))), (arr_2 [i_0] [i_1])));
                var_14 = var_7;
            }
        }
    }
    #pragma endscop
}
