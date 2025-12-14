/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((+((-((max((arr_2 [i_0]), var_6)))))));
        var_10 &= ((((max(((((arr_2 [i_0]) / var_0))), (max((arr_0 [i_0] [i_0]), var_7))))) ? (((((var_4 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? (((var_7 ? var_7 : 163))) : ((var_8 ? (arr_2 [i_0 - 1]) : (arr_0 [i_0] [i_0]))))) : (min((((56030 ? 3 : var_6))), (min(129, (arr_0 [i_0] [i_0])))))));
        var_11 = (min(var_11, (((9509 ? 1 : 126)))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_12 = 156;
        var_13 -= (((arr_2 [i_1 - 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1])));
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((112 ? ((min(5743325267986443293, -5691132139270373013))) : ((var_4 ? var_9 : 6153464185652623954))));
                    var_14 = (((min((arr_11 [i_4 + 4] [i_3] [i_4 - 2]), (arr_11 [i_4 + 3] [i_3] [i_2])))) ? (((-var_9 ? (((arr_11 [i_2] [i_2] [i_2]) ? var_3 : var_7)) : (65521 + -125)))) : (((min((arr_13 [i_3] [i_3]), var_6)) - 1023)));
                }
            }
        }
        var_15 = (max(((var_3 << (((arr_10 [i_2]) - 507389730504289797)))), var_3));
        var_16 = ((~(-2147483647 - 1)));
    }
    #pragma endscop
}
