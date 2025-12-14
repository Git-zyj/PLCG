/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(var_11, 88));
        var_12 = -1759958680163682702;
        var_13 ^= (((arr_1 [i_0 + 1]) | var_4));
    }
    var_14 = (((((~var_10) ? (min(var_3, var_5)) : (((var_4 ? var_7 : 0))))) != ((min((!var_7), (min(var_7, var_5)))))));
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_15 = ((((arr_9 [i_1] [i_1] [i_1]) ? (arr_7 [i_1 + 1] [8] [i_1 + 1]) : (~2196321340995641265))));
                    arr_10 [i_1] = -24;
                    var_16 = (min(((max((-9223372036854775807 - 1), (arr_5 [i_1 + 2])))), ((((arr_6 [24] [23] [15]) && ((min((arr_2 [i_1 + 2]), (arr_3 [1])))))))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((!(arr_6 [i_4] [i_4] [i_4])));
        var_17 = ((-var_3 ? (arr_6 [i_4] [i_4] [i_4]) : (((~(arr_8 [2] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= var_3;
        var_18 = ((~(arr_15 [i_5])));
        var_19 = (-2196321340995641293 / var_10);
        arr_18 [i_5] = ((((((arr_12 [6] [6]) & (arr_7 [2] [2] [2])))) ? (arr_4 [i_5]) : (arr_5 [i_5])));
    }
    #pragma endscop
}
