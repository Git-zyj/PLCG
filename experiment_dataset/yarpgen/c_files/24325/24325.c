/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [10] = var_4;
                var_10 = (max(var_10, var_2));
                var_11 = var_1;
            }
        }
    }
    var_12 = (min(var_12, (((((!((min(7936, var_8))))) ? -var_0 : (!var_0))))));
    #pragma endscop
}
