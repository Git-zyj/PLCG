/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((((max((arr_1 [i_0]), var_2))) ? (arr_1 [i_0]) : (((arr_3 [i_0]) ? (arr_1 [i_0]) : var_1))))) ? ((((max(var_5, var_11))) ? var_10 : (arr_3 [i_0]))) : var_4));
        var_13 = (min(43663, (min(48, var_8))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_1] [i_0] = (((((~(arr_3 [i_1])))) >= (min(65488, var_1))));
            arr_10 [i_1] [i_0] = (arr_6 [i_0] [i_1]);
            var_14 = (max(var_14, (max(var_0, ((~((~(arr_5 [i_0])))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_15 -= ((((((var_9 > (arr_1 [i_0]))))) / (((((var_1 ? var_5 : (arr_6 [i_2] [i_0])))) ? (arr_0 [i_0]) : ((((arr_12 [i_0] [i_0] [i_0]) ? var_9 : 65490)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = (max((((arr_15 [i_4] [i_4] [i_4 - 1] [i_4 + 1]) > (arr_15 [i_4] [i_4] [i_4 - 2] [i_4 + 1]))), (((arr_16 [i_2] [i_4] [i_4] [i_4 - 1] [i_4]) == var_8))));
                        arr_19 [i_4] [i_4] [i_4] [i_0] = (min((max((arr_2 [i_4 + 1] [i_4 - 2]), var_4)), (~3057290108193881280)));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (max(var_16, (arr_21 [i_5])));
        var_17 = ((var_10 ? -30 : ((((max(var_11, var_7))) ? var_11 : ((var_10 ? var_12 : var_12))))));
        var_18 = (max(var_18, (((((min((arr_20 [i_5]), (arr_20 [i_5])))) & -48)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    var_19 *= 43652;
                    arr_28 [i_5] [i_5] [i_5] = var_5;
                    var_20 -= (((arr_27 [i_5] [i_5] [i_7 - 1]) ? (((var_1 ? (arr_24 [i_5] [i_6] [i_7]) : ((var_9 ? var_9 : var_9))))) : (((((var_7 ? 43673 : (arr_21 [i_6])))) ? (((var_1 ? (arr_27 [i_5] [i_5] [i_5]) : var_11))) : ((var_11 ? 48 : var_5))))));
                }
            }
        }
        arr_29 [i_5] |= ((((((max(var_10, var_3)) | ((((arr_21 [i_5]) * 21863)))))) ? ((((((arr_22 [i_5] [i_5]) ? var_1 : (arr_26 [i_5] [i_5]))) / var_2))) : var_1));
    }
    var_21 = (max(var_21, (((((((var_8 & var_10) ? (~var_1) : 65280))) ? var_9 : var_4)))));
    var_22 = (min(var_22, ((min(var_4, (((((min(32329, var_2))) >= (var_5 >= var_12)))))))));
    #pragma endscop
}
