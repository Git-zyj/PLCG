/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? (((661120611 >= 3444905873) ^ ((5096587 ? 3444905873 : 38881)))) : ((-18359 % ((1 ? 1051553700 : var_7))))));
    var_14 = (((var_10 % var_5) ? 3444905873 : (~1684610303)));
    var_15 = ((((~(1811102857 & 11731))) >> (39306 - 39294)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 1] = var_8;
                    arr_9 [16] [i_1] [i_2] [i_2] = ((26230 ? 7705730550659562861 : 1440291736));
                }
            }
        }
    }
    var_16 = 2483864438;
    #pragma endscop
}
