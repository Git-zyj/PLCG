/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_0] = (((((((arr_3 [i_0 + 1]) || (arr_3 [i_0 + 2]))))) - (arr_4 [i_0] [i_0] [i_0 + 2])));
                arr_8 [i_0] [i_0] [14] = -6214;
                arr_9 [i_0] = ((((((arr_3 [9]) && 4713711141969334166))) << ((((((max(-755369861, 4074563104821245240))) + (var_5 + 140737488338944))) - 11079934117542212328))));
            }
        }
    }
    #pragma endscop
}
