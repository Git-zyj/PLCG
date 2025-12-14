/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? var_4 : ((max(1, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [9] [i_3] [i_4 - 1] = var_8;
                                var_12 -= 4160749568;
                                arr_15 [i_0] [i_0] [5] [i_3] [i_0] = (((min((((!(arr_2 [i_2]))), (max(var_9, var_6)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 + 1] = (((((var_6 ? var_3 : (var_6 | var_1)))) ? 2422237577 : 1));
                            }
                        }
                    }
                }
                arr_17 [i_0] [6] [i_0] = var_9;
                arr_18 [i_0] [i_0] = ((min(var_0, (~var_7))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_13 = (arr_20 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_14 = 1;
                        var_15 ^= ((((min((~0), var_6))) ? (arr_24 [i_5] [14] [14] [i_5]) : 1));
                        arr_28 [i_8] = (((max((arr_23 [i_5] [i_5] [i_7] [i_8]), var_0)) & (((0 ? (10572 | 3700740535) : 594226760)))));
                        var_16 = (max((min((arr_25 [i_5] [i_6] [i_7] [i_8] [i_5] [i_6]), (arr_25 [i_5] [i_6] [i_6] [i_6] [4] [i_6]))), (!-10566)));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_32 [6] [i_5] = ((var_10 | (min(((var_2 ? var_1 : (-32767 - 1))), (arr_31 [i_5] [6] [6])))));
            arr_33 [i_5] [i_5] = 1;
        }
        arr_34 [i_5] = (min(1857650833934900194, ((((min(545455106, 4743183545505052176))) ? ((var_2 ? var_3 : var_0)) : (arr_20 [i_5])))));
    }
    #pragma endscop
}
