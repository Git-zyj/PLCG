/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (((((6158959726366777006 ? (max(var_12, -1856888931973681490)) : ((max(4294967275, 873)))))) ? ((((!var_12) * var_9))) : var_17));
    var_20 = var_13;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_21 = (((((-4294967275 ? ((1856888931973681477 ? 30287 : 1856888931973681494)) : (arr_1 [i_0 - 2])))) ? 1856888931973681484 : (((((max((arr_1 [i_0]), (arr_2 [i_0])))) ? 32763 : (arr_0 [i_0 + 1]))))));
        var_22 |= (((((arr_0 [i_0 - 1]) >= 1972793677)) ? (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] = -17289;
                        arr_15 [14] [14] [i_3] [i_2] [0] = -4294967295;
                        arr_16 [i_1] [i_3] [i_3] [i_3] [i_4] &= 31;
                    }
                }
            }
        }
        var_23 = (max((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [6]))), (((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_12 [2] [2] [2] [i_1] [i_1]) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_17 [i_1] [i_1] |= (max((arr_10 [i_1]), (((~(arr_3 [i_1] [i_1]))))));
    }
    var_24 = var_13;
    #pragma endscop
}
