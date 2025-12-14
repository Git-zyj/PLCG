/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-var_4);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (121 || 3298040680);
        arr_4 [i_0] = (((arr_0 [i_0]) > ((((var_1 ? var_3 : -387144385)) >> (((var_5 & 141) - 119))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (max(var_17, -1814187849));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (0 / 1);
                        var_19 = (arr_1 [i_2 + 1]);
                        arr_13 [i_0] [2] [i_2 + 1] [i_3] = (arr_0 [i_1]);
                    }
                }
            }
            arr_14 [i_1] [1] [i_1] = ((var_12 ? var_1 : ((7689 ? var_2 : (arr_1 [i_0])))));
            arr_15 [i_0] [i_0] = var_13;
            arr_16 [i_0] [i_0] = (arr_2 [i_0]);
        }
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            arr_19 [i_4] = (((-2147483647 - 1) >= (arr_10 [i_4 + 1] [i_4] [i_4 - 2] [6])));
            arr_20 [i_0] = (min(((((((arr_12 [7] [7] [i_4] [i_4] [i_4] [i_4 + 1]) ? (arr_5 [i_0] [i_4]) : (arr_0 [i_0])))) ? (arr_12 [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1]) : (((arr_18 [i_0]) ^ (-2147483647 - 1))))), ((((max(6273929418053649706, (arr_5 [i_4] [i_4])))) ? (arr_7 [i_4 + 1] [i_4] [i_4 - 1]) : 115))));
            arr_21 [i_0] = -6273929418053649706;
            arr_22 [i_0] [i_0] [i_4] = (min(var_13, ((((arr_9 [i_0] [i_4] [i_4 - 2] [i_0] [i_4]) / (arr_9 [i_0] [i_0] [i_4 - 2] [i_0] [i_4 - 2]))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_26 [i_0] [i_5] [i_0] = (max(var_1, ((-6571 ? (2521312120869508417 == -1605379033) : (arr_5 [i_0] [i_0])))));
            var_20 = ((((((arr_9 [4] [i_0] [i_5] [i_5] [2]) ? (arr_9 [9] [i_5] [i_5] [i_5] [i_5]) : var_8))) ? 15758 : 1));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_31 [i_0] [i_7] = (min(((((28595 ? 2043268463 : (arr_11 [i_7] [i_5]))))), (max((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_28 [3] [i_5] [i_6] [5]) : (-2147483647 - 1))), ((6273929418053649706 ? var_2 : 230))))));
                        arr_32 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5] = (~1147127719);
                    }
                }
            }
            var_21 *= ((var_0 == ((2147483646 ? 169 : (arr_1 [i_0])))));
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_37 [i_8] = 1964637232;

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_45 [i_8] [i_9] [i_9] [11] = (((arr_40 [i_10]) == (arr_40 [i_10])));
                arr_46 [i_10] |= (0 == 1);
                arr_47 [i_8] [i_8] [i_9] [i_8] = (((arr_40 [i_8]) ? (-127 - 1) : (arr_40 [i_10])));
                var_22 = (((arr_43 [1] [i_9] [i_9] [i_9]) >= 53545));
                arr_48 [i_9] [i_9] [17] = (((arr_44 [i_8] [i_9] [i_8]) ? var_10 : (arr_44 [i_8] [i_9] [i_10])));
            }
            arr_49 [i_9] = var_6;
            var_23 = min((arr_34 [i_8]), (max(var_1, 387144385)));
        }
        var_24 = 1;
        arr_50 [i_8] = 53020;
    }
    #pragma endscop
}
