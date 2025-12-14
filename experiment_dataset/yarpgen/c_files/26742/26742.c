/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (((~var_11) ? ((var_0 ? var_9 : (arr_2 [i_1 - 1] [i_1 - 1]))) : (((arr_5 [i_1 - 1] [i_1] [i_1 - 1]) << (((arr_2 [i_1 - 1] [i_1]) - 700294725))))));
                    var_19 = ((~(-var_8 ^ -6315292463872764265)));
                }
            }
        }
    }
    var_20 = var_1;

    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_21 = (arr_11 [7] [i_3 + 2]);
        arr_13 [i_3] = (~1577766608);
        var_22 = (arr_11 [10] [i_3]);
    }
    #pragma endscop
}
