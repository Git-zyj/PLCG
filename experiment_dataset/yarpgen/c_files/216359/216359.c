/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-(max(-43, -1016837418)))), (min(-34, -var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((~(min(-var_2, (min(26, var_14))))));
                    arr_9 [i_2] = (max(((max(-222, 32759))), (min((min((arr_7 [i_2] [i_0] [i_1] [i_0]), 192)), ((min(var_13, 196)))))));
                }
            }
        }
    }
    var_16 = (~(min(((max(var_12, var_13))), (min(var_1, var_6)))));
    var_17 = (min((min((max(var_13, var_11)), (~695239370))), ((min(-4436477209587279571, ((max(var_12, var_4))))))));
    var_18 = (min(var_18, (((-((-(max(var_6, var_6)))))))));
    #pragma endscop
}
