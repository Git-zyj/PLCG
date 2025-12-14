/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_9);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max((!94), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = (max((max((max(-33, 7526553686426173986)), 1586585421)), (~1)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = (max(((max(1, 186))), (max(1586585428, (arr_12 [i_3 - 2] [i_2 - 1] [i_2 - 1])))));
                    arr_15 [i_1] [i_1] [i_3] = (max((max(4294967295, 1586585418)), (~16)));
                }
            }
        }
        var_12 = 774207378;
    }
    #pragma endscop
}
