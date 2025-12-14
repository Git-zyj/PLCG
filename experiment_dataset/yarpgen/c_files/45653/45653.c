/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (6587737661376462812 + 11165)));
                arr_4 [i_1] [14] [i_1] = (arr_3 [i_1] [i_1]);
            }
        }
    }
    var_12 = ((max(var_1, var_8)));
    var_13 = (max(var_13, var_5));
    var_14 = var_10;
    var_15 = (min(var_15, ((-(max(-1789282965, (var_9 & var_7)))))));
    #pragma endscop
}
