/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((var_3 ? (arr_0 [14]) : (arr_0 [8]))))));
        var_19 -= ((var_5 ^ ((1439693176 ? (arr_1 [6]) : (arr_1 [8])))));
        var_20 = (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_21 = ((~((((arr_8 [i_1]) && (arr_5 [i_1] [i_2]))))));
            var_22 = (((!var_4) >> (((min(var_2, var_6)) - 79))));
            var_23 = ((((((arr_2 [i_1]) ? (arr_2 [i_2]) : (arr_2 [i_2])))) ? (((((min(var_6, (arr_5 [i_1] [i_1])))) ? (arr_1 [i_2]) : (arr_0 [i_2])))) : (min((var_12 - var_17), (arr_4 [10])))));
            var_24 = ((-(max(-1439693177, 1439693177))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] = var_13;
            arr_12 [i_3] [6] [i_1] = (((min((min(var_2, (arr_4 [12]))), ((max((arr_3 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))))) ? (((max(var_14, var_17)))) : (min(var_2, (arr_4 [i_1]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_25 = (min(var_25, (arr_8 [16])));
                        arr_18 [i_3] [i_3] [18] = (arr_1 [2]);
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = min(((((min((arr_6 [i_5]), (arr_2 [9])))) ? (arr_7 [18] [i_4] [i_4]) : (max(var_0, (arr_4 [i_1]))))), ((((arr_16 [13] [12] [13] [7]) ? (arr_0 [4]) : (arr_9 [i_1] [i_1] [i_5])))));
                    }
                }
            }
            arr_20 [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_3]);
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_26 = max((((!(((var_4 ? (arr_22 [i_6] [i_6]) : var_5)))))), (min((arr_13 [8] [0] [i_7] [i_7]), (max(var_8, var_6)))));
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [14] [i_6] = (min((max((arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]), var_17)), (((((max(2389914596138070824, (arr_1 [i_6])))) ? (arr_3 [i_1] [i_9]) : (arr_23 [i_1] [i_6] [i_6]))))));
                            var_27 = ((~(arr_23 [i_1] [i_1] [i_1])));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_33 [i_6] [3] = (max((((((((var_3 && (arr_14 [i_1] [i_1] [i_1]))))) >= (arr_21 [i_1])))), var_13));
                            var_28 = (min((arr_26 [i_1] [i_1] [8] [i_1] [i_1] [i_6]), (max(1439693164, var_1))));
                        }

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_29 = (max(var_29, ((max(((((~var_1) == (arr_4 [i_1])))), (arr_32 [i_1] [i_1] [i_7] [i_1] [i_11]))))));
                            var_30 = (((((51413 ? (arr_25 [i_6] [i_6] [i_7] [i_7]) : (arr_16 [i_1] [i_1] [15] [18])))) ? (arr_16 [i_6] [i_6] [i_8] [i_11]) : -6355588321357619435));
                            var_31 *= (arr_8 [19]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 = var_4;
                            var_33 = (min(var_33, (arr_35 [12] [i_6] [i_6] [i_6])));
                            var_34 = var_3;
                            arr_40 [i_6] [i_6] [2] = (arr_29 [i_1] [i_1] [i_1] [i_7] [i_8] [11]);
                            arr_41 [i_1] [i_6] = (((((var_14 ? (arr_22 [i_6] [i_7]) : (arr_5 [i_1] [i_1])))) ? (arr_2 [i_1]) : (arr_36 [i_1] [i_1] [i_7] [i_1] [i_12] [i_8] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_45 [i_1] [i_6] [i_6] [3] [i_6] [i_6] [i_6] = (var_16 && 2147483647);
                            arr_46 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_24 [i_1] [5] [5]) ? var_16 : ((((arr_4 [i_1]) >= (arr_27 [15] [i_6]))))));
                            arr_47 [i_1] [i_6] [6] [i_6] [i_1] = (((arr_0 [i_6]) & (((arr_32 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_35 [i_6] [i_6] [i_6] [11]) : (arr_23 [i_1] [i_1] [i_1])))));
                        }
                        var_35 = ((~(((max(var_1, (arr_38 [i_6] [i_6] [16] [i_6] [i_6] [16])))))));
                    }
                }
            }
        }
        var_36 = ((-1439693177 ? -896855875881084184 : 1439693176));
    }
    var_37 = (var_13 - var_6);
    #pragma endscop
}
