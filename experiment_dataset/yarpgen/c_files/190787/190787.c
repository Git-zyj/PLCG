/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = var_14;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0] [i_0]) >= (!9223372036854775807));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [14] [i_1] [i_2] = ((((((-8961513827894758988 && 56665) ? (arr_0 [i_0 - 3] [i_1 + 2]) : 7223892623662309692))) && ((min((1914152885135315278 | 134217696), ((max(0, var_1))))))));
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((arr_2 [i_0]) ^ (max((arr_6 [i_0] [i_0 - 3] [i_2 + 1]), (arr_6 [i_1] [i_0 + 1] [i_2 + 1]))));
                }
            }
        }
        arr_11 [i_0] = ((((~(arr_2 [i_0 + 2])))) ? -2066271377803155861 : ((((!((((arr_5 [i_0 - 1] [i_0 + 1] [i_0]) ? -8961513827894758988 : 0))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [16] = -83;
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_5] [i_3] [3] = ((((((arr_18 [i_3] [i_5] [i_6]) + (arr_13 [i_6])))) ? (50325 >= var_15) : 35606));
                        arr_22 [i_4] = (((arr_15 [i_4 - 3] [i_4]) ? (arr_15 [i_4 + 1] [i_6]) : (arr_15 [i_4 + 1] [i_4])));
                    }
                }
            }
        }
        arr_23 [i_3] = (((((-(arr_15 [i_3] [i_3])))) ? var_15 : var_17));
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        arr_26 [i_7 - 3] = (((((((min((arr_8 [8] [8] [8] [8]), -8961513827894758988))) ? (arr_16 [i_7 - 3] [i_7 + 1]) : (((-9223372036854775807 - 1) * var_2))))) && (arr_18 [i_7] [i_7 - 3] [i_7 - 1])));
        arr_27 [i_7] [i_7] = (((arr_4 [i_7 - 3] [i_7 - 3] [i_7 + 1]) * (var_15 & 65517)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_30 [i_7 - 1] [i_8] [i_7 - 1] = 0;
            arr_31 [i_8] [i_8] [i_7] = ((-70 >= (arr_1 [i_7])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_37 [i_7] [i_7] [i_8] [i_9] [i_9] [i_10] = (!-6564069368063685215);
                        arr_38 [i_7] [i_8] [i_8] [i_8] [i_7] [i_10] |= ((~(arr_35 [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7 - 1])));
                        arr_39 [9] [i_7 - 2] [i_8] [i_8] [i_9] [i_10] = 11192225319603371503;
                        arr_40 [i_8] [i_8] [i_9] [i_8] = (82 * var_5);
                    }
                }
            }
            arr_41 [i_7] = 90;
            arr_42 [i_7] [i_8] = arr_24 [i_7 - 1];
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            arr_45 [2] = (arr_29 [i_7] [i_11]);
            arr_46 [i_7] [3] [i_11] = (min(-1, (max(var_7, (var_18 - 3695314582079846434)))));
            arr_47 [i_7] [10] = (((var_1 / (arr_1 [i_7]))) != (arr_13 [i_7]));
            arr_48 [i_11 + 1] [11] = (max((arr_2 [i_7 - 2]), (((arr_2 [i_7 - 1]) ? (arr_2 [i_7 - 1]) : (arr_2 [i_7 - 3])))));
            arr_49 [i_7] [i_7] = ((~(min((min((arr_12 [i_7 - 2] [4]), -1255998094447330353)), (arr_5 [i_7 - 3] [i_11 - 1] [1])))));
        }
    }
    #pragma endscop
}
