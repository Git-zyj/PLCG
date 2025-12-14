/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(-var_13, 5360692832852805717)))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [20] [20] = (min((((((min((arr_2 [i_0]), 65535))) ? (3764531951 && var_8) : (!21014)))), (arr_3 [i_0] [i_0])));
                var_17 += ((-((3674373202 ? 107 : ((var_7 ? (arr_1 [i_0]) : var_5))))));
            }
        }
    }
    var_18 = var_4;
    var_19 += ((!((min((min(var_14, 1)), var_10)))));
    #pragma endscop
}
