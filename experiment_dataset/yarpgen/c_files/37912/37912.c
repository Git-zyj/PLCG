/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (max((min(208, 746056680250078570)), var_8));
                arr_6 [i_0] = (((((77 == var_7) ? var_9 : (((-838949834 ? 1960488246 : var_7)))))) ? var_9 : (var_10 + var_12));
                arr_7 [i_0] [i_0] [i_0] = (min(202, (min(202, -5451982896884963794))));
                var_18 = ((((10 ? (202 < var_6) : (212 != 549753716736)))) ? ((-31 ? ((min(var_13, var_2))) : ((var_2 ? var_16 : var_11)))) : (max(var_3, (55 != -1278732427))));
            }
        }
    }
    var_19 = var_0;
    var_20 = ((((min(((var_14 ? 48 : -5115023157910528306)), var_10))) ? (-5451982896884963794 >= var_10) : ((-5451982896884963820 ? var_13 : 838949834))));
    var_21 = var_0;
    #pragma endscop
}
