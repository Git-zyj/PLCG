/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max((((var_10 ? ((min(var_7, var_2))) : (!var_12)))), (max(2491903892, 11719)))))));
                arr_6 [i_0] = var_15;
                arr_7 [i_0] [i_0] [i_0] = -var_4;
                arr_8 [i_0] [i_1] = var_10;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 = var_9;
                    var_19 = (min(var_19, ((max(var_11, (min(var_1, var_10)))))));
                }
            }
        }
    }
    var_20 = ((((min(((min(var_12, var_8))), var_16))) ? (((max(var_7, -26288)))) : ((var_8 ? ((min(var_1, var_6))) : var_5))));
    #pragma endscop
}
