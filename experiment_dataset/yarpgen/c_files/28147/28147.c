/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -55;
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 += ((((max(-22036, 1))) ? (-55 != 0) : ((54 ? var_17 : (~var_15)))));
                var_22 = 10174;
                arr_5 [0] [i_1] = (((((55 ? 2960 : -1))) ? (((~(arr_2 [i_1 - 1])))) : (((!-50) ? ((-1686627643 ? -7025034864969653927 : 66)) : (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
