/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (~32768);
                    var_11 = (min(var_11, (arr_6 [i_0] [i_0] [i_1] [i_2])));
                    var_12 = (min(var_12, (!3458764513820540928)));
                }
            }
        }
    }
    var_13 = ((var_5 / ((var_3 ? (3458764513820540941 % -3458764513820540928) : 3458764513820540928))));
    #pragma endscop
}
