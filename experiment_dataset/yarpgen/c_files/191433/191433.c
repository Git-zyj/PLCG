/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [11] [i_1] [3] = arr_0 [i_2];
                    arr_9 [i_0] [i_0] [i_0] [i_0] &= var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_21 *= (min(((-var_18 ? (min((arr_0 [i_3]), (arr_13 [i_3] [i_4] [i_4]))) : 65321318)), (((arr_10 [i_4]) ? (arr_10 [i_3]) : (arr_10 [i_4])))));
                var_22 *= (((arr_7 [i_3] [i_4] [i_4] [i_3]) || 1));
                arr_16 [i_4] [i_3] = -var_7;
                var_23 = (min(var_23, (arr_3 [i_3] [i_3] [i_3])));
                arr_17 [i_4] = ((-1 ? (~var_7) : ((93 ? -117 : 155096674))));
            }
        }
    }
    var_24 *= var_12;
    var_25 = (min(var_25, ((~(min(var_18, -var_9))))));
    #pragma endscop
}
