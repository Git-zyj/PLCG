/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_4);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 += ((-1 <= ((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [4] [1] [2] = -5;
                    arr_10 [i_0] [i_1] = ((((((arr_0 [i_1 - 2]) >> (((max(var_9, var_7)) - 4294944457))))) ? (((arr_3 [i_1 + 1] [i_1 - 2]) ? ((~(arr_3 [i_0] [i_1]))) : (((-(arr_0 [i_2])))))) : (arr_3 [i_0] [i_0])));
                    var_12 *= (arr_2 [9]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((((~(arr_12 [i_3]))) - (((!(arr_2 [i_3]))))))));
        var_14 = ((((~(arr_2 [i_3]))) >> (((arr_11 [i_3]) - 81))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = (arr_14 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_22 [10] [10] [10] [3] = (max((arr_21 [i_4] [i_5] [i_6] [0]), (min(-2, -413327162))));
                    var_15 -= (((arr_18 [i_5] [i_5]) - (min((min((arr_20 [i_4] [i_4] [10]), (arr_14 [i_6]))), 4294967287))));
                }
            }
        }
    }
    var_16 = ((var_5 >> ((((-var_5 ? (max(3215622696, 56)) : (((19610 ? var_9 : var_3))))) - 3215622685))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_17 = max((arr_24 [i_7] [i_7]), (arr_28 [i_7]));
                var_18 = -1884565414;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {

                            for (int i_11 = 4; i_11 < 21;i_11 += 1)
                            {
                                var_19 = max((min(var_3, (arr_29 [i_8] [i_8] [i_11]))), (max(((-(arr_24 [23] [23]))), ((((arr_23 [i_7]) <= var_2))))));
                                var_20 *= (max((min(((((arr_26 [i_7] [i_7]) - -77))), var_4)), (((((arr_24 [4] [4]) ? (arr_30 [i_7] [i_7] [i_11]) : var_3))))));
                                var_21 = ((!(arr_28 [20])));
                                var_22 = 1884565416;
                            }
                            arr_36 [2] [i_8] [12] [16] [i_8] = 37654;
                            var_23 = (max((arr_25 [i_8]), 1884565425));
                        }
                    }
                }
                arr_37 [i_8] [8] = (arr_35 [i_8] [10] [i_8] [8] [i_7] [i_7] [i_8]);
                arr_38 [i_8] [15] [i_8] = (max((arr_34 [5] [i_8] [i_7] [i_7] [i_7] [i_7]), (((-104 <= var_7) ? (arr_25 [i_8]) : var_7))));
            }
        }
    }
    #pragma endscop
}
