/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(var_2, var_8))) == var_8)) ? var_7 : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 8143410163042176661;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_13 -= ((~(arr_8 [i_0] [i_0] [i_0] [i_0])));
                        var_14 = ((arr_0 [i_1] [i_1]) & -8143410163042176656);
                        var_15 &= 15941;
                    }
                }
            }
        }
        var_16 = (min(var_16, ((((((!(arr_9 [i_0] [11])))) != (arr_1 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_17 -= (arr_11 [i_4] [i_4]);
        var_18 = (((~16) ? (((((var_5 ? (arr_12 [1]) : 9298650548293531147))) ? (arr_12 [i_4]) : (~-27826))) : (((1 ? 68 : (((min((arr_11 [i_4] [i_4]), (arr_11 [i_4] [i_4]))))))))));
        arr_13 [i_4] [i_4] = (arr_11 [i_4] [i_4]);
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        arr_16 [i_5] = (arr_15 [i_5 + 2]);
        var_19 = (max(var_19, (7906147578014564009 | 7)));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_21 [i_6 + 1] [1] |= max(var_2, (((((384 ? (arr_15 [i_6]) : var_0)) < ((min((arr_15 [i_6]), 112)))))));
        var_20 = ((((min((arr_11 [i_6 + 1] [i_6 - 1]), (max(var_1, -1)))) + 9223372036854775807)) << ((((((-((12198 ? 6977268625982984118 : (arr_15 [i_6 - 1]))))) + 6977268625982984180)) - 62)));
    }
    var_21 = var_4;
    #pragma endscop
}
