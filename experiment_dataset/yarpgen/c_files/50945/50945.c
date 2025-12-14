/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = var_7;
                var_13 = var_8;
                arr_6 [i_1] [i_0] = var_7;
                var_14 = var_3;
            }
        }
    }
    #pragma endscop
}
