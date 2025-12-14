/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((min(var_5, -11748)))));
                arr_6 [i_0] = (max((arr_5 [i_0]), (((arr_4 [i_0] [i_0 + 4]) ? 2526611325 : ((2526611336 ? var_4 : -419319495493856404))))));
            }
        }
    }
    #pragma endscop
}
