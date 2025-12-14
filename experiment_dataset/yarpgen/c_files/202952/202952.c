/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-172 < var_12);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((((((((0 || (arr_0 [i_0] [i_0]))))) >= ((246 ? var_8 : var_7)))) ? (((((var_2 ? 255 : 2147483647))) ? (((arr_1 [i_0] [i_0]) ? var_5 : 132852501)) : (!134))) : ((1 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_17 = ((-((~(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = -1;
                    var_18 = (max(((var_4 ? ((6929272643789925972 ? 6929272643789925989 : var_5)) : (arr_11 [i_2] [i_3]))), (((17663 ? -var_7 : var_5)))));
                }
            }
        }
        arr_15 [i_1] = var_9;
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_19 = (min(var_19, -var_2));
        var_20 = 4294967295;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_26 [i_4 + 3] [i_4] = ((~(((arr_22 [i_4]) ? -var_7 : ((94 ? 52717 : (arr_16 [i_6])))))));
                    var_21 = ((((!(arr_22 [i_4]))) ? (((((4294967295 ? 143 : var_8))) ? (max(1, 8160)) : -130)) : ((-(arr_18 [i_4 + 3])))));
                    arr_27 [i_4] = (((((-(161 & var_14)))) ? (arr_23 [i_4] [i_5] [i_6]) : ((-6125281025261086703 ? ((65522 ? var_9 : 96)) : (arr_22 [i_4])))));
                }
            }
        }
        var_22 = ((var_12 ? ((max((arr_21 [i_4 + 1] [i_4 + 1]), var_4))) : (var_9 / var_6)));
    }
    var_23 = (min(var_11, var_9));
    #pragma endscop
}
