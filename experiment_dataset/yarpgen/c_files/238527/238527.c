/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((((min(var_8, 1897)))) % var_14)) > (((min(var_5, var_13)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] &= var_4;
                    var_16 = (min((1883 & 5569), (38 || 5798826221335274187)));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = var_11;
                    arr_12 [i_0] [i_0] [i_0] = (max(0, (min(1883, 33))));
                }
            }
        }
    }
    #pragma endscop
}
