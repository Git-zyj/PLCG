/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 *= (((9158572436061305781 ? 22 : 724008007)));
                    var_17 = (max((arr_8 [i_1 - 4] [i_1 - 4] [i_1 + 1]), ((-var_11 ? (((arr_8 [i_0] [i_0] [i_0]) ? 26 : (arr_9 [i_0] [i_0] [i_0]))) : ((2957 ? 2778940276231404615 : 11296998396229414768))))));
                }
            }
        }
    }
    #pragma endscop
}
