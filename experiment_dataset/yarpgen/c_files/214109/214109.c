/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_11, var_0));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((!var_10) * (!var_1));
                var_14 = (min(55649, ((-5 ? (!var_8) : -4))));
            }
        }
    }
    #pragma endscop
}
