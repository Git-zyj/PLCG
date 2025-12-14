/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (arr_0 [i_0]);
                var_13 = -4159441764869806320;
                var_14 = -62;
            }
        }
    }
    #pragma endscop
}
