/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [1] [1] &= 21315;
                var_11 -= 2127681603;
            }
        }
    }
    var_12 = (max(var_12, 1388490664425874267));
    var_13 |= (min(var_10, var_8));
    var_14 += (!var_10);
    #pragma endscop
}
