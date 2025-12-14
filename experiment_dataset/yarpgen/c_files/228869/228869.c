/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-124, (!var_8)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0 + 2]) ? var_11 : 10));
        var_14 = (250 ? 124 : (arr_0 [i_0 + 3] [i_0 + 2]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    {
                        var_15 = (((((-(max((arr_2 [i_1]), var_5))))) || (((((max((arr_4 [10]), 115))) ? (((122 ? -8554428076697211707 : (-2147483647 - 1)))) : (arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1]))))));
                        var_16 = (min(var_4, 5887935288881378345));
                        var_17 = (min(208, 12));
                    }
                }
            }
        }
        var_18 = 12558808784828173272;
    }
    #pragma endscop
}
