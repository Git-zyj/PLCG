/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 |= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 = (max(var_21, ((9 <= (((((~(arr_4 [11])))) ? ((~(arr_4 [i_1]))) : ((max(1344029014, (arr_1 [9]))))))))));
            var_22 = ((~(arr_3 [i_0] [i_1] [i_0])));
        }
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_23 -= (arr_6 [8]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_3] = 39;
                    arr_16 [i_4] [i_2] [i_2] = max((arr_11 [3] [i_3] [i_2 - 2]), (arr_7 [i_4] [i_4 - 1]));
                }
            }
        }
        var_24 = (min(var_24, ((max((!2950938300), ((~(arr_6 [i_2 - 1]))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_25 = arr_21 [i_5 + 2] [i_5];
                    var_26 = (min(var_26, (arr_17 [i_5 - 1])));
                }
            }
        }
        arr_24 [i_5] [1] = ((-(arr_22 [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 3])));
        arr_25 [i_5 + 2] = (arr_23 [i_5] [i_5] [i_5] [i_5 + 2]);
    }

    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_8] = ((((-(arr_33 [i_9] [i_8]))) & ((((arr_31 [i_9] [i_10]) && (arr_35 [i_8] [i_8] [i_9] [i_10] [i_11]))))));

                        for (int i_12 = 4; i_12 < 23;i_12 += 1)
                        {
                            var_27 = ((~(arr_35 [i_8] [i_8] [i_8] [i_8] [4])));
                            var_28 &= (arr_27 [i_9 - 1] [i_9 - 1]);
                        }
                    }
                }
            }
            arr_41 [i_8] [i_9] [i_9] = 6;
            var_29 = ((~(((arr_29 [i_8] [i_9]) ? (arr_40 [i_8] [i_9 + 1] [i_9]) : (arr_26 [i_8])))));
        }
        for (int i_13 = 4; i_13 < 21;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_30 = (arr_29 [i_8] [2]);
                        var_31 = (max(113, -39));
                    }
                }
            }
            var_32 = (arr_45 [i_13] [i_13] [i_13] [i_13 - 4]);
            arr_49 [i_8] [i_8] [i_8] = (((((!(arr_32 [i_8])) ? (arr_32 [i_13 + 2]) : (arr_30 [i_8])))));
            var_33 = ((~(arr_33 [i_8] [i_13 - 2])));
        }
        arr_50 [i_8] = (arr_33 [i_8] [i_8]);
        arr_51 [i_8] [i_8] = (arr_32 [i_8]);
        var_34 = ((~(((!(arr_29 [i_8] [i_8]))))));
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_35 += 20;
        arr_55 [i_16] = (min((arr_13 [8]), (arr_43 [i_16])));
        arr_56 [i_16] = (max((max(1344028996, ((((arr_28 [i_16]) >> (18598 - 18574)))))), (arr_43 [i_16])));
    }
    var_36 = (min(var_19, var_17));
    #pragma endscop
}
