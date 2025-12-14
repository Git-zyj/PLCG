/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = max(((-(arr_0 [i_0]))), 65535);
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [i_1] = (arr_8 [i_2] [i_3] [i_2]);
                        arr_16 [i_1] [i_1] [i_2] = (~(arr_8 [i_2] [i_2] [i_3]));
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (arr_8 [1] [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_24 [i_5] = -298515379;
                    arr_25 [i_1] [i_1] [i_5] [i_1] = 39973;
                }
            }
        }
    }
    #pragma endscop
}
