/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] |= -86;
        var_17 = ((var_1 ? 0 : var_2));
        var_18 = (3358605676730657973 ? var_3 : 0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, 112));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = -117;
                                var_20 = 112;
                                var_21 = (((arr_9 [i_4] [i_3] [i_2] [i_1]) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_9 [i_1] [i_1] [i_3] [i_3])));
                            }
                        }
                    }
                    arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_2] &= ((!(arr_8 [i_0 + 1] [i_0 + 1])));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = var_16;
                    var_22 = (min(var_22, (((var_15 ? ((407406889 ? var_10 : var_13)) : -1)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_5] [3] = (281665589 / var_15);
                    var_23 = (((((var_14 >> (var_5 - 42602)))) ? var_15 : var_13));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_24 = (max(var_24, ((((arr_23 [8]) ? (!44475) : (((arr_23 [10]) >> (((arr_23 [10]) - 27)))))))));
        var_25 = 16704;
    }
    var_26 = ((var_1 ? (!-var_14) : 105));
    var_27 = var_8;
    var_28 = ((((max(var_16, 22))) ? (!var_11) : ((var_2 ? ((var_1 ? var_9 : 0)) : 11444))));
    #pragma endscop
}
