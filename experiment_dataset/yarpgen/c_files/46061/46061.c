/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = 61;
                arr_6 [i_1] = -1263537306;
                arr_7 [i_1] = 248;
            }
        }
    }
    var_20 = 248;
    #pragma endscop
}
