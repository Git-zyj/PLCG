/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((min(65534, var_10)))), ((62691 ? var_11 : ((min(var_1, var_7)))))));
    var_17 = (min(var_17, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_1 + 2] = (2147483647 | 9840879779820391970);
                    arr_10 [i_0] [i_1 + 2] [i_2] [i_2] &= ((var_5 ? var_5 : (arr_7 [i_1 + 2] [i_1 + 2] [i_2] [i_1])));
                }
            }
        }
    }
    var_18 = (0 >> (67 - 67));
    var_19 = var_4;
    #pragma endscop
}
