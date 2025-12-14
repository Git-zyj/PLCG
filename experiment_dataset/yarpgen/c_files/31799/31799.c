/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (576395238 != var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = arr_0 [i_0];
                arr_4 [2] [i_1] [i_1] &= (arr_3 [i_0]);
            }
        }
    }
    var_18 = ((21920 ^ var_12) | ((((25426 >= 7573097158725895688) == var_4))));
    #pragma endscop
}
