/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(var_1 < var_17)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = var_8;
                arr_7 [i_0] = (~((((((arr_0 [i_0] [i_1]) ? var_8 : (arr_3 [i_0] [i_0] [i_1])))) ? ((var_9 ? (arr_1 [i_0]) : var_3)) : ((24310 ? 25 : (arr_3 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
