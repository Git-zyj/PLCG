/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!1) ? (max(var_3, var_6)) : var_9)) >> (var_7 - 2529533736)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (((!1079632767) ? (((arr_2 [i_0] [i_0]) ? (arr_1 [1] [i_0]) : (arr_1 [i_0] [14]))) : ((max((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (!0))))));
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = (max(3525059699, (max(-287903032, 3215334529))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 = min(((((min(var_6, (arr_3 [10] [10])))) ? (!63478) : (arr_6 [i_1 + 4] [i_2 + 1]))), (((((arr_14 [i_5] [i_1] [i_2] [i_3] [i_4] [6]) | (arr_6 [i_4] [i_5]))) & (arr_8 [i_1 + 2] [i_1]))));
                                var_15 = (((((min(var_5, (arr_7 [i_5] [i_5] [11] [i_4]))))) ? ((((max((arr_5 [i_1 + 4] [i_1]), var_4)) > ((((!(arr_2 [i_2] [i_2])))))))) : ((((!(arr_8 [i_1] [i_1]))) ? (arr_8 [i_1 + 1] [2]) : (((!(arr_10 [i_1] [i_1] [i_1 + 2]))))))));
                            }
                        }
                    }
                    var_16 = (((((arr_0 [i_1]) | (((var_5 ? var_5 : (arr_4 [i_3])))))) != (arr_6 [8] [i_2])));
                }
            }
        }
        var_17 = (max(var_0, (((((22 ? var_2 : var_7))) ? var_8 : (max((arr_13 [i_1] [i_1] [0] [4] [i_1] [i_1]), var_0))))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_18 = (min(-287903032, ((var_5 | (((arr_4 [i_6 + 3]) ? 63478 : 31801))))));
        var_19 = ((((var_8 ? (arr_7 [i_6 + 4] [i_6 + 1] [i_6 + 3] [i_6 + 3]) : (arr_7 [i_6 + 2] [i_6 + 3] [i_6 + 2] [i_6 + 4]))) & ((~(arr_5 [i_6 + 2] [i_6 + 1])))));
    }
    var_20 &= (var_2 && var_8);
    var_21 = 3215334529;
    #pragma endscop
}
