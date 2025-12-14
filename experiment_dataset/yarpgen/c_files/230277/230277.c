/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(224, 30));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_21 = (min(6198, (min(var_19, (min(42, -6199))))));
                    arr_7 [i_0] [i_1 + 3] [1] [i_2] = -114;
                }
                var_22 -= (((arr_4 [i_1 + 3] [i_1 - 1] [1] [16]) ? -6198 : ((((min(-12, -25825))) % var_7))));
                var_23 = (min((min(8, ((var_0 ? (arr_0 [i_0]) : var_6)))), (!59539)));
            }
        }
    }
    var_24 = var_1;
    var_25 = var_4;
    #pragma endscop
}
