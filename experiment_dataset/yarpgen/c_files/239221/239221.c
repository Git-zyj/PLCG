/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_0;
    var_17 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(-var_12, 9223372036854775807));
                arr_6 [i_1] [i_0] = (arr_0 [i_0] [i_0]);
                arr_7 [i_0] [i_0] = ((!(!var_1)));
            }
        }
    }
    #pragma endscop
}
