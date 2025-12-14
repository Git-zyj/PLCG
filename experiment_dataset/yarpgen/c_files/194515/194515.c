/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_12 ? ((max(var_11, var_9))) : (~var_14))), ((max(39105539, (~1))))));
    var_16 = ((((max((max(var_7, 1)), (var_1 / 5793702530512132347)))) ? (min(3671428900581533249, var_5)) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = var_3;
                var_17 = max(var_7, (arr_3 [i_0]));
            }
        }
    }
    var_18 = ((var_0 ? ((0 ? (((var_5 ? -1 : 1))) : var_3)) : var_14));
    #pragma endscop
}
