/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_3 ? var_4 : var_3)), ((max(var_3, ((5781 ? var_10 : var_0)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-(arr_0 [i_1 - 1] [i_0])));
                    var_17 = var_13;
                }
            }
        }
        arr_9 [i_0] = (max((arr_5 [i_0] [i_0] [i_0]), 14));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = ((((max((arr_11 [i_3]), 2))) >> (arr_12 [5] [i_3] [i_4])));

            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                arr_17 [i_3] [i_3] [17] = ((((((arr_15 [i_3] [9] [i_3] [i_5 + 2]) ? (arr_15 [i_3] [12] [i_4] [i_5 + 2]) : (arr_12 [i_3] [i_4] [20])))) * (arr_12 [i_5 + 2] [i_5 - 1] [i_5 + 1])));
                arr_18 [i_5] = var_13;
                var_18 = ((((((max(var_12, var_7))) < (arr_15 [i_4] [3] [i_4] [i_3]))) ? (arr_12 [i_5] [i_4] [i_3]) : (((!(((-(arr_11 [i_3])))))))));
                arr_19 [7] [i_4] [i_4] [i_5 + 1] = var_12;
                var_19 = ((((arr_15 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_5 + 1]) != (arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 - 2]))));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_20 = (arr_22 [i_3] [5]);
            var_21 = (arr_23 [i_6] [i_3]);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_3] = arr_15 [i_7] [i_7] [i_7] [i_3];
            arr_29 [i_3] = (~1);
            arr_30 [i_3] = ((max((arr_12 [i_3] [i_7] [i_7]), (arr_12 [12] [i_3] [i_7]))));
            var_22 = (((((arr_24 [i_3] [i_7] [i_7]) ? (arr_24 [i_3] [i_7] [i_7]) : (arr_24 [i_3] [i_3] [13]))) ^ ((~(arr_24 [i_3] [i_3] [i_3])))));
            arr_31 [i_3] = (min((~var_10), (arr_25 [i_7])));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_23 = (((((arr_16 [i_3] [i_3] [i_3]) ? (((arr_32 [i_3] [i_3]) ^ 1519833119)) : ((((arr_25 [i_3]) & var_8))))) & 32752));
            var_24 = var_0;
        }
        var_25 = var_2;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                {
                    arr_42 [i_9] [i_9] = (arr_33 [i_9 - 1]);
                    var_26 = (arr_24 [i_9] [i_10 - 1] [i_9]);

                    for (int i_12 = 4; i_12 < 16;i_12 += 1)
                    {
                        arr_45 [3] [3] [i_9] [i_12] = (arr_16 [i_10 - 1] [i_11 + 1] [i_12 - 2]);
                        var_27 = (arr_44 [i_9] [i_10] [2] [i_12] [i_12]);
                        var_28 = ((arr_36 [i_9 + 1]) < (arr_36 [i_9 - 1]));
                    }
                    arr_46 [i_9 + 2] [i_9 + 2] [i_9] = ((var_2 ? 224 : (arr_13 [i_9])));
                    arr_47 [i_9] [12] [i_9] [i_9] = var_2;
                }
            }
        }
        arr_48 [i_9] = (arr_34 [i_9 + 1] [i_9 - 1]);
        var_29 = var_6;
    }
    var_30 = var_13;
    var_31 = var_8;
    var_32 = var_7;
    #pragma endscop
}
