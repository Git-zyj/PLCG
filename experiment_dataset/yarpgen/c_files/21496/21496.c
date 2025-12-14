/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 *= 29698;
                    arr_6 [i_0] [10] [i_2] = max(32767, (arr_1 [i_0]));
                }
            }
        }
    }
    var_22 = var_15;
    #pragma endscop
}
