/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = var_9;
                    var_14 = (max((arr_4 [i_1] [i_1]), (((arr_4 [i_1] [i_1]) - 1))));
                }
            }
        }
    }
    var_15 |= ((var_1 ^ ((((min(var_0, var_7))) ? var_10 : (var_4 + var_5)))));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_3] = (min(-5345768326073112608, (!1)));
                    var_16 = (max(var_16, ((min(var_6, (max(134217600, 18917)))))));
                    arr_16 [i_3] [i_3] [i_3] = arr_12 [i_5] [i_4 - 1] [i_5] [i_4 - 1];
                }
            }
        }
    }
    var_17 = var_12;
    #pragma endscop
}
