/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (arr_1 [i_1 + 2] [i_1 + 1]);
                var_17 = (max(var_17, var_12));
            }
        }
    }
    #pragma endscop
}
