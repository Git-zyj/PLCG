/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = ((-(~49)));
                var_13 = (((max((arr_2 [i_0]), ((-(arr_5 [24] [i_0] [11]))))) != var_4));
            }
        }
    }
    var_14 = var_10;
    var_15 = var_1;
    var_16 = max((((((max(var_0, var_11))) ? var_10 : var_6))), var_9);
    #pragma endscop
}
