/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_15 [4] [i_1] [4] = ((~(0 > var_0)));
                            var_12 = (max(var_12, 1));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_20 [i_1] [7] [i_1 - 1] [4] [5] = ((((max((!var_0), 1))) == ((min(36, (((35634 || (arr_0 [8])))))))));
                            var_13 = (max(var_13, ((((1 ? 1 : 0)) != (((!(arr_6 [i_1] [i_1 - 2]))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_14 = ((((134217728 ? 782132593 : (arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] [6] [i_6])))) ? 86 : (arr_21 [i_0] [1] [i_0] [i_0] [9]));
                            arr_24 [i_2] |= 1;
                            var_15 = (((arr_14 [i_0] [i_1 - 1] [i_2] [7]) ? (arr_9 [8]) : (~1)));
                        }
                        var_16 = (1 / var_4);
                        var_17 = (max(var_17, (((((((min(0, (arr_2 [1]))) != ((-782132620 ? 1428 : -424879369))))))))));
                    }
                    arr_25 [i_2] = 6;
                    arr_26 [4] [i_1] [i_1] [0] = var_8;
                }
            }
        }
    }
    var_18 = (min(var_4, (((((var_1 ? 18 : var_4)) == var_2)))));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_31 [i_7] = ((~(arr_28 [i_7])));
        var_19 = (((((1 ? 0 : (arr_28 [18])))) ? (arr_30 [i_7]) : (((arr_30 [i_7]) * (arr_27 [i_7])))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_20 = ((-1465178475963576269 ? 1 : (((424879383 || (arr_32 [i_8]))))));
            var_21 = (((((1 ? 6 : 31744))) ? 11 : 1));
        }
        arr_36 [i_8] = (((arr_33 [i_8]) - (arr_29 [14] [i_8])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    arr_41 [12] [i_10] [18] [i_8] = ((((!(arr_40 [i_8])))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_46 [i_8] [i_8] [0] [11] [i_13] = (134217748 > 243);
                                var_22 = (max(var_22, (((-((1 ? (arr_33 [i_8]) : 7138)))))));
                            }
                        }
                    }
                    var_23 = (((arr_27 [i_8]) != var_2));
                    arr_47 [4] [i_11] = 1;

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_24 = (min(var_24, var_3));
                        arr_51 [i_14] [i_10] [i_10] = ((~(((arr_39 [2]) ? (arr_27 [i_8]) : (arr_39 [i_8])))));
                    }
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_25 = ((((1 ? 782132593 : 1)) != ((38769 ? var_1 : var_0))));
                        arr_54 [i_8] [i_10] [i_11] [1] [6] = ((782132596 ? 1 : 134184960));
                    }
                }
            }
        }
        arr_55 [18] = (((arr_49 [i_8] [i_8] [i_8] [i_8]) / (((65516 || (arr_48 [i_8] [i_8] [i_8] [i_8]))))));
    }
    #pragma endscop
}
