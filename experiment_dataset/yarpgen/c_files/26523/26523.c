/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] = ((((min((((var_8 ? 1 : 27097))), (max((arr_6 [i_0 - 1] [i_4 + 1] [i_3] [i_2 - 1] [i_0] [i_0]), (arr_9 [i_4 - 1] [i_3 + 2] [i_0] [i_1] [i_0 + 1])))))) ? (min(((var_4 ? var_12 : (arr_9 [i_0 + 1] [i_0] [i_0] [i_3 - 1] [i_4 - 2]))), var_0)) : (var_6 - 255)));
                                arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (((arr_5 [i_0] [i_2 - 1] [i_0]) & (15080666274576229567 != 1)));
                                var_15 = (max(var_15, (((max((arr_8 [i_4 + 1] [i_1] [i_1 - 2] [i_4] [i_2]), 11905544114301906477))))));
                                arr_12 [i_0] [8] [i_2] [i_3 + 1] [i_0] [i_3 - 1] = (((arr_9 [i_2 + 2] [i_2] [i_0] [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 1]) : ((min(73, -36)))));
                            }
                        }
                    }
                    var_16 *= (arr_4 [i_2] [2] [i_1 + 1] [i_2]);
                }
            }
        }
    }
    var_17 -= var_11;
    var_18 = ((6541199959407645151 ? 583377496 : 49));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_6] [i_6] [i_7] = (arr_20 [10] [i_7 + 1] [i_7] [i_7]);
                    arr_23 [i_5] [11] = max((max(4589688553584982933, (arr_21 [i_5] [i_6] [i_6]))), ((((arr_13 [i_6]) ^ (min((arr_16 [i_5] [i_6] [i_7 - 1]), var_8))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_9] [i_10] [i_9] = ((-(max((((arr_26 [i_8] [i_9]) & 6541199959407645158)), ((max(var_6, 4294967295)))))));
                    arr_31 [i_8] [i_8] [i_10] [i_10] = (max((((min(1, var_1)))), (min((arr_26 [i_8] [i_9]), (arr_26 [i_8] [i_8])))));
                    var_19 = ((28113 ? ((max(1, 50))) : 10503));
                    var_20 = 6564727956134957563;
                }
            }
        }
    }
    #pragma endscop
}
