/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_2] = ((var_4 ? (arr_7 [i_0] [i_0 - 1] [i_0] [i_0]) : -70));
                        arr_13 [i_3] [i_2] [i_2] [i_2] [i_0 + 3] = arr_11 [i_0] [i_3] [i_2] [i_3] [i_0 - 3];
                    }
                    var_12 += ((((var_10 ? (((min(var_6, var_7)))) : (var_0 | var_11))) == (~var_4)));
                }
            }
        }
        var_13 = (max((((!var_9) ? (arr_10 [i_0 + 4] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]) : var_0)), ((((max(var_0, 10694798482959957673))) ? (((~(arr_0 [i_0])))) : (arr_8 [i_0 + 1] [i_0 - 2] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_14 = (min(var_14, (((var_1 ? (arr_16 [i_4 + 1]) : (var_6 & var_1))))));
        arr_18 [i_4] [i_4 + 2] = var_1;
        arr_19 [i_4] [i_4 - 1] |= (arr_17 [i_4 + 1]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_24 [i_5] = ((var_8 ? ((((!((min((arr_15 [i_5]), var_0))))))) : var_9));
        arr_25 [i_5] = (((arr_23 [i_5] [i_5]) ? ((((min(var_3, (arr_14 [i_5] [i_5]))) & (((-1204849580 ? 29846 : 1032819794)))))) : ((~(((arr_20 [i_5]) & 11749535022092329673))))));
        arr_26 [i_5] = (arr_14 [i_5] [i_5]);
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_34 [i_6 - 1] [i_7] = (arr_27 [i_6] [i_8]);
                    var_16 = (max(var_16, ((((var_4 ? var_5 : var_8))))));
                    arr_35 [i_8] [i_7] [i_6] = (arr_17 [i_6 - 2]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_41 [i_6] [i_10] = var_0;
                        var_17 = (((var_2 ? var_5 : (arr_31 [i_6 + 2] [i_10]))));
                    }
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        arr_44 [i_6] [i_7] = (arr_39 [i_6] [i_9] [i_9] [i_11 + 2]);
                        arr_45 [i_6] [i_7] [i_9] [i_11 + 1] = ((-(arr_15 [i_11 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_18 = ((!(arr_29 [i_6 + 2] [i_7] [i_9])));
                                var_19 = var_3;
                                arr_52 [i_6] [i_6] [i_6 - 1] [i_12] = (arr_48 [i_12]);
                                var_20 = (((!(arr_17 [i_9]))));
                                arr_53 [i_12] [i_12] [i_9] [i_7] [i_12] = var_1;
                            }
                        }
                    }
                    arr_54 [i_6] = (!589712675);
                    var_21 = -var_6;
                }
                arr_55 [i_6 + 1] [i_6] [i_7] = -2340238523959565928;
            }
        }
    }
    var_22 = -var_6;
    var_23 = (var_3 - var_6);
    #pragma endscop
}
