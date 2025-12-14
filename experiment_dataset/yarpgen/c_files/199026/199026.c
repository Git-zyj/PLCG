/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [19] [1] [1] = var_0;
                var_20 = (min(var_20, var_8));
            }
        }
    }
    var_21 = ((var_15 ? -var_16 : var_6));
    var_22 = ((var_15 ? (!var_6) : var_1));
    var_23 = ((((var_15 + 9223372036854775807) << (((var_10 + 12210) - 60)))) << (var_14 - 2384354234));
    var_24 = var_14;
    #pragma endscop
}
