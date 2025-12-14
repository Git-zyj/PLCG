/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2 - 2] = (arr_4 [i_2] [i_1] [i_0] [i_0]);
                    arr_7 [i_2 + 1] [i_2] [i_2] = ((min((arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2]), (arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2]))) ? ((32607 ? 32767 : (arr_4 [i_2 + 1] [7] [i_2 - 3] [i_2 + 1]))) : (((arr_4 [i_2 - 1] [i_2] [i_2 - 3] [i_2 - 1]) * (arr_4 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
