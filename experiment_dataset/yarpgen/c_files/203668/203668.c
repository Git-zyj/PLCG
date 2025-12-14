/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 *= (((var_9 ? 288230376151711743 : var_14)));
                    var_18 = ((((!var_9) ? var_4 : var_11)));
                }
            }
        }
        arr_7 [i_0 + 1] [7] = arr_6 [i_0] [i_0] [1];
        var_19 -= var_1;
        var_20 &= (min((arr_0 [i_0] [i_0]), ((((((arr_0 [i_0 + 1] [i_0 - 1]) ? 49915 : var_14))) - var_1))));
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_10 [i_3] = ((((((max(4, 18158513697557839876)) - var_11))) ? (arr_5 [i_3] [i_3]) : (arr_5 [i_3] [i_3 + 3])));
        arr_11 [i_3] [8] &= ((var_2 + (((15621 * 4046916652) << (var_7 - 27387)))));
    }
    var_21 = var_6;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_22 = (max((max((((arr_6 [i_4] [i_4] [i_5]) ? (arr_0 [i_4] [23]) : (arr_4 [i_4] [i_4]))), var_3)), (arr_2 [i_4])));
                arr_16 [i_4] [i_4] = ((((arr_4 [i_5] [i_4]) - var_3)));
            }
        }
    }
    #pragma endscop
}
