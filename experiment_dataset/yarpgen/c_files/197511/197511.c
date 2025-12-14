/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (589485066 - -32738)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((-589485067 ? 85 : -4036628975148564370));
                    arr_7 [i_1] = (((17694989041970711121 & var_5) % (((((85 || var_5) < (min(2076983864, 12))))))));
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = var_1;
    #pragma endscop
}
