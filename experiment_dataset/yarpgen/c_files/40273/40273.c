/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = (var_6 || 0);
                arr_9 [i_1] [i_1 - 2] = (14 ? (!-8260104759089820344) : (arr_7 [i_0] [i_1] [i_1]));
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
