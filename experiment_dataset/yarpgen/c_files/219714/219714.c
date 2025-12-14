/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (4294967295 != 4294967295);
        var_19 += (((var_7 != (arr_1 [1]))));
        var_20 = 88;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = var_7;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] [i_1] = (((arr_4 [i_2] [i_1]) * (60 == var_3)));
                        var_22 = -var_4;
                    }
                }
            }
        }
        arr_13 [i_1] = ((-(arr_5 [i_1] [i_1] [i_1])));
        var_23 = var_0;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 = (arr_15 [i_5]);

        /* vectorizable */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            var_25 = ((3217347807 | (arr_24 [i_6 + 1] [i_9 + 1])));
                            arr_27 [i_9] [i_6] [i_7] [i_6] [i_5] = (arr_18 [i_6] [i_9 + 1] [i_9 + 1]);
                            var_26 = (!(-19539 / 56));
                        }
                    }
                }
            }
            arr_28 [i_6] [i_6] [i_6] = (var_13 + var_12);
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_32 [i_5] [i_10] = var_16;
            var_27 = (min(var_27, (((var_15 >= 1) == (((!(arr_30 [i_5] [i_5]))))))));
            var_28 = (min(((max((arr_15 [i_10]), (arr_25 [i_10] [i_10] [i_10] [i_10] [i_5] [i_5])))), (min(1, 232))));
        }
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            var_29 = (var_5 && (arr_33 [i_11]));
            arr_36 [i_5] [i_11] = var_5;
        }
        for (int i_12 = 1; i_12 < 22;i_12 += 1)
        {
            var_30 = (arr_38 [3] [i_12 + 1] [i_12 - 1]);
            var_31 = (arr_26 [i_5] [i_5] [i_12] [i_5] [i_5] [i_5] [i_5]);
        }
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                {
                    var_32 = 1;
                    arr_47 [i_13] [i_14] [i_14] = var_1;
                }
            }
        }
        var_33 = var_14;
    }
    var_34 = var_16;
    #pragma endscop
}
