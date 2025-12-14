/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_4 [i_1 - 1] [i_1 + 1]);
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] = (max((max(var_10, (arr_0 [i_0 - 3]))), (max(1, 7019966058971846741))));
            }
        }
    }
    var_22 = max(var_14, ((((~var_10) < ((min(var_0, var_9)))))));
    #pragma endscop
}
