/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_1, (max(-var_18, ((min(var_12, var_6))))));
    var_20 = (max(712759207, var_10));
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (arr_5 [i_1] [i_0] [i_0]);
                arr_7 [i_1] = (max(712759215, 1));
                var_22 |= (arr_4 [i_1]);
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
