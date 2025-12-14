/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = 2900225652862874090;
                                arr_15 [i_0] [i_0] [i_3] = (min((((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))), (max((arr_5 [i_2] [i_2 + 2] [i_2] [i_2 + 1]), (max(65512, (arr_5 [i_2] [i_2] [i_2] [i_2])))))));
                                arr_16 [i_0] [i_0] [7] [i_2] [i_3] [i_0] [i_4] = ((((min((5843 >= var_3), (((arr_5 [i_0] [i_0] [i_2] [i_3]) ? (arr_10 [i_2] [i_0]) : 24))))) ? ((-(max((arr_3 [i_1] [i_2]), (arr_8 [i_2] [i_4]))))) : (arr_3 [8] [i_1])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = ((((((arr_4 [i_2 + 1] [i_1] [i_2 - 3]) << (((arr_6 [i_0] [i_2 + 1]) - 17333337989302895272))))) ? var_14 : (((arr_13 [i_0] [i_2 + 2]) / (arr_13 [i_2 - 3] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_16 = 65512;
                                var_17 = (arr_12 [13] [2] [i_2 + 2] [i_0] [i_6] [i_6]);
                                var_18 = arr_9 [i_2 + 1] [i_1] [i_2] [i_5] [i_1];
                            }
                        }
                    }
                }
            }
        }
        var_19 *= (26548 > 23);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_20 = (min(var_20, (max((arr_12 [18] [i_0] [i_0] [i_7] [i_7] [i_0]), 54682))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                var_21 = 65505;
                                var_22 = (arr_14 [i_0] [i_8]);
                                var_23 = ((0 ? 74 : 17));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(((18987 ? 1 : 54682)), (max(((13 ? var_13 : var_14)), (min(1365919609, 1365919609))))));
    #pragma endscop
}
