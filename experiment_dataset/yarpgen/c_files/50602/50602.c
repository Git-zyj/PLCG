/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_0;
                var_20 = (max(var_20, var_12));
            }
        }
    }
    var_21 = ((((((191002779 <= (min(var_17, var_0)))))) < var_15));
    #pragma endscop
}
