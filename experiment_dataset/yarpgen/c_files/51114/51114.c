/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 ^= var_15;
        arr_2 [i_0 - 1] = (arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((var_15 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        var_19 = (~27);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_3] [i_0] [i_0] [i_2] &= arr_5 [i_3] [i_3] [i_3];
                        arr_12 [i_0] [i_0] [i_3] [i_0] &= (15872 && var_1);
                        arr_13 [i_1] [i_2] [i_1] = 29;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] &= (((4 != var_1) ? 226 : (((((arr_5 [i_4] [i_4] [i_4]) + 2147483647)) >> (((arr_5 [i_4] [i_4] [i_4]) + 28272))))));
        arr_18 [i_4] = -20158;
        arr_19 [i_4] = (max(((((min(var_0, (arr_16 [i_4])))) ? 2915 : (arr_5 [i_4] [i_4] [i_4]))), (var_8 % 44)));
        var_20 = ((~(((arr_16 [i_4]) / (arr_1 [i_4])))));
    }
    var_21 = -60;
    #pragma endscop
}
