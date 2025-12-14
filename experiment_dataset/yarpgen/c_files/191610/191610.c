/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = ((-6055832773881628762 ? 255 : 6055832773881628762));
                var_12 = ((((max((arr_0 [i_1] [i_0]), var_5)))) | (arr_3 [i_0]));
                arr_5 [i_1] = (max(((~(arr_2 [i_0] [i_1]))), (((~(arr_0 [i_0] [i_1]))))));
                arr_6 [i_0] = (arr_3 [i_0]);
            }
        }
    }

    for (int i_2 = 3; i_2 < 6;i_2 += 1)
    {
        arr_9 [1] = (min((arr_4 [i_2 - 3] [i_2]), ((-(min(-6055832773881628762, 6055832773881628760))))));
        arr_10 [i_2] |= ((var_2 ? (arr_1 [i_2]) : ((((arr_2 [i_2] [i_2]) ? (arr_0 [i_2 + 3] [i_2]) : (arr_3 [1]))))));
    }
    #pragma endscop
}
