/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = 9922290702535140974;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_3] [i_0 + 1] [i_0] [i_0] [1] [i_0 + 1] = (~111);
                        var_13 = -118;
                    }
                    arr_11 [i_0] = 2621712980;

                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        arr_14 [i_0 - 1] [i_4] [i_0] [i_4 - 2] = -25788;
                        var_14 += 18548;
                    }
                }
            }
        }
    }
    var_15 = -7780;
    #pragma endscop
}
