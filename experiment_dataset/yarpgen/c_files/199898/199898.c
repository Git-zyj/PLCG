/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((~var_17), (+-13665)));
    var_19 -= var_7;
    var_20 = var_1;
    var_21 = (min(var_21, var_14));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 += (~255);
                    var_23 = (~(arr_4 [5] [5] [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
