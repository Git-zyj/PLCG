/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (arr_4 [i_1 - 3] [i_1 - 3] [i_0]);
                arr_5 [i_0] [1] [i_1] = (max((max((arr_2 [i_0] [i_1 - 2]), 1)), ((max(0, -18940)))));
                var_19 = (max(-1, (arr_4 [i_0] [i_0 + 3] [i_0])));
            }
        }
    }
    var_20 = (min(var_20, (!var_7)));
    var_21 = (294191989 >> 0);
    var_22 &= var_0;
    #pragma endscop
}
