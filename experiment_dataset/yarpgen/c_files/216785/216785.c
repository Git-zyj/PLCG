/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((((-664571283 | (arr_1 [i_0 - 1])))) ? (~255) : (((((var_5 ? (arr_6 [i_2]) : (arr_0 [3] [i_2])))) ? 0 : ((var_0 & (arr_7 [23] [i_1])))))));
                    var_18 = (((((((min(var_3, (arr_1 [i_1])))) ? ((3309217161 | (arr_4 [i_0] [i_0] [12] [20]))) : var_1))) ? ((0 ? 1 : -25613)) : (((((arr_6 [i_2]) / 65521)) / 25613))));
                    arr_8 [i_0] [1] [i_2] = (((((arr_2 [i_0] [i_1] [i_0]) + 2147483647)) << (((arr_3 [4]) - 892294299))));
                }
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
