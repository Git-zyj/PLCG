/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_0;
    var_21 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((~((max(118, (arr_0 [i_0]))))));
                    var_23 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
