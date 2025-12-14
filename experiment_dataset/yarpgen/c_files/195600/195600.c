/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((((((var_1 != (arr_5 [i_0]))) ? var_3 : ((178 ? (arr_1 [5]) : var_7)))) > 101));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = arr_6 [i_0] [i_1] [i_2] [i_3];
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_2] = ((242 | ((((((arr_4 [i_1] [i_1]) | var_8))) ? 17 : var_6))));
                                var_12 -= ((((((min(var_3, (arr_3 [i_0])))) % (arr_13 [i_0] [i_0] [i_2] [i_3] [3] [i_0]))) >> ((((min(214, 80))) - 72))));
                                var_13 = ((((!(arr_8 [20] [20] [i_0 - 2])))));
                            }
                        }
                    }
                    var_14 = ((~(~var_9)));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_1] = arr_0 [i_2];
                        var_15 = arr_16 [i_0] [i_1] [i_2] [i_5];
                        arr_20 [i_1] = ((~((min((arr_15 [12] [i_0 + 1] [i_0 - 1] [i_1]), 19561)))));
                    }
                }
            }
        }
        var_16 = (((arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2]) ? ((max((arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2]), var_5))) : (arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2])));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_17 = max(2, var_1);
                                arr_34 [i_6] [i_6] [i_6] [10] [i_8] [i_7] [3] = (max(((-(arr_25 [i_6] [i_9] [i_10]))), (min((arr_30 [i_7]), 242))));
                                var_18 = (((((((max((arr_15 [i_6] [3] [i_9] [i_7]), 7168))) ? ((min((arr_23 [i_7]), (arr_21 [i_7])))) : 94))) ? ((min((arr_31 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10]), (arr_18 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])))) : var_0));
                                arr_35 [5] [i_7] [i_7] [i_7] [i_9] [i_10 - 1] = ((((((237 ^ (arr_29 [i_6] [0] [i_6] [i_6] [0] [i_6]))) >> (((((arr_3 [i_6]) | var_2)) - 43167)))) ^ (((arr_23 [i_7]) ? ((max(var_7, 162))) : ((max(var_0, var_4)))))));
                            }
                        }
                    }
                }
                var_19 = -161;
                arr_36 [i_7] = 177;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            {
                var_20 = (~197);
                var_21 = (((((((arr_7 [i_12 - 1]) ? 65525 : var_0)))) > 252));
                arr_42 [i_11] [i_12] [i_12] = ((var_10 >> (var_5 - 36006)));
            }
        }
    }
    var_22 = 164;
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    arr_51 [i_13] [i_13] [i_13] = (((arr_43 [i_13] [i_15]) < (arr_47 [i_13] [i_14] [13])));
                    var_23 = ((((min(226, 57242))) ? var_5 : (255 || var_6)));
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 22;i_17 += 1)
                        {
                            {
                                arr_57 [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_52 [i_13] [i_14] [i_15] [7]);
                                var_24 = 255;
                                var_25 = (((arr_46 [i_16 + 1] [9]) ? var_6 : (((((var_10 > (arr_47 [i_13] [i_15] [i_13]))) && (((36021 ? 2009 : (arr_52 [i_13] [i_13] [i_15] [i_15])))))))));
                            }
                        }
                    }
                    var_26 = (max(var_26, (((-var_6 % (arr_45 [i_14] [i_13]))))));
                }
            }
        }
    }
    #pragma endscop
}
