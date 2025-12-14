/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (~45771)));
                var_21 = (min(var_21, ((max(((max(var_7, var_3))), (arr_1 [i_0 + 3]))))));
                var_22 = -var_14;
            }
        }
    }
    #pragma endscop
}
