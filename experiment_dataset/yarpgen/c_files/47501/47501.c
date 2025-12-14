/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = -1;
                    var_11 -= ((4029643690876158833 ? (((!((max(-1, -18)))))) : ((max(-24, var_3)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_12 = (max(var_12, (((!((min((arr_14 [i_3] [i_3]), (((arr_11 [i_4]) - var_8))))))))));
                arr_16 [i_3] = (arr_15 [i_4] [i_4] [i_3]);
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
