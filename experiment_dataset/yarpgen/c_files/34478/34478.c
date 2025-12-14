/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34478
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
                var_20 += (arr_7 [i_1] [8] [8]);
                var_21 = min((!1086099317), (arr_7 [i_0] [i_0] [i_0]));
                var_22 = (max(var_22, var_15));
                arr_8 [i_1] = 1086099330;
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
