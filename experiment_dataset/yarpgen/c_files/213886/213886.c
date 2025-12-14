/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (max((((arr_5 [i_0 + 2]) ? (arr_5 [i_0 + 2]) : (arr_5 [i_1 - 1]))), (arr_5 [i_1])));
                var_10 = (max(var_10, (((-((((((1 ? 14372 : var_9))) && 2))))))));
            }
        }
    }
    var_11 = (~var_1);
    var_12 -= min((~var_3), var_6);
    var_13 = (((((var_9 ? 2147483647 : ((var_9 ? 1 : var_7))))) ? var_3 : var_9));
    #pragma endscop
}
