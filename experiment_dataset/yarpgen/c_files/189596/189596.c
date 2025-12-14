/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(((var_3 ? var_0 : var_3)), -var_10))) ? (min(((134213632 ? var_1 : var_3)), (~4094))) : ((((min(var_8, 1))) ? var_3 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (min((arr_8 [i_0 - 3] [i_0 - 3]), ((((((var_8 ? (arr_6 [i_0]) : (arr_2 [i_0])))) ? ((~(arr_6 [i_0]))) : -4108)))));
                    var_12 = -4112;
                }
            }
        }
    }
    #pragma endscop
}
