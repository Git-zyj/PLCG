/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] [i_1] = (min(((1 ? (((((arr_0 [i_0]) != -3756228198666479694)))) : (arr_0 [i_0]))), 19786));
                var_19 -= var_0;
                var_20 = arr_0 [i_1];

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_21 = (((133169152 ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0]) : 5921782832619570973)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = 133169131;
                        var_22 *= 19;
                    }
                    arr_11 [i_0] = ((((arr_2 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_2] [i_2]) : 133169152)));
                    arr_12 [i_2] = 133169161;
                }
                var_23 = (min(-1, 90461425584571778));
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_24 = -1626265179;
                        arr_26 [i_4] [i_4] [i_4] = 133169161;
                        var_25 = 133169152;
                        arr_27 [i_4] [i_5] [i_6] [i_7] = var_13;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_26 = (max(var_26, ((((arr_0 [i_5]) ? 3916840515 : ((9615123424730197030 ? var_15 : (arr_18 [i_5]))))))));
                            arr_30 [i_8] [i_7] [i_6] [i_4] [i_4] = (-13965911 ? (arr_16 [i_4]) : (((arr_19 [i_4] [i_4]) ? -1 : (arr_16 [i_4]))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_33 [1] [1] [i_6] [i_7] [i_9] = ((var_18 ? (((arr_0 [i_4]) ^ var_1)) : (arr_2 [i_4] [i_5] [i_6])));
                            arr_34 [i_7] = (((arr_31 [i_4] [i_9] [i_6] [i_9] [1]) ? var_17 : ((var_3 ? var_15 : 670514105))));
                        }
                    }
                }
            }
            arr_35 [1] = (arr_8 [i_4] [i_4] [i_5]);
            arr_36 [i_4] [i_5] = (arr_6 [i_4] [i_4] [i_5]);
            arr_37 [1] = var_1;
        }
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    arr_42 [i_4] = ((1872198460 ? -1872198460 : (arr_2 [i_4] [i_4] [i_4])));
                    arr_43 [i_4] [i_4] = var_1;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 = (arr_1 [i_4]);
                                var_28 = -64;
                            }
                        }
                    }
                    arr_50 [i_4] = (max(((max(-9782, ((-3681566932706175277 ? var_4 : var_2))))), var_11));
                    var_29 = (min((arr_29 [i_4] [i_4] [i_10] [i_11] [i_10] [i_11] [5]), (arr_39 [i_4])));
                }
            }
        }
        arr_51 [i_4] [i_4] = (((((arr_49 [i_4]) ? (arr_47 [i_4]) : var_6))));
        var_30 = 2033106108;
        arr_52 [i_4] = (max(1, -22087));
    }
    var_31 = (((var_5 ^ ((min(-58, 117))))));
    var_32 = (((max(var_4, var_9))) ? (((((var_2 ? var_7 : 12740198753230297479))) ? var_4 : var_11)) : var_8);
    #pragma endscop
}
