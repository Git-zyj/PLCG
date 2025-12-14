/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] = (((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) / ((63343 ? 328378031 : 328378031))));
                arr_7 [i_1] [i_0 + 1] = (max(((min((arr_2 [i_0 + 2] [i_1] [i_1]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])))), (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) % 506761585450265345))));
                arr_8 [i_0 + 2] [i_1] [i_0 + 2] = max(var_12, var_1);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [i_4] [i_2] [i_2] = ((~(427905528863904712 - var_1)));
                    arr_19 [i_4] [i_3 - 3] [i_2] = (min(328378031, (((arr_9 [i_2]) / (max(-328378031, -506761585450265334))))));
                    arr_20 [i_3 - 3] [i_4] = (arr_16 [i_3 + 1]);
                }
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
