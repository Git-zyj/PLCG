/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = 37;
                    arr_7 [i_0] [i_1 - 2] [i_0] = var_6;
                }
            }
        }
        var_11 = (max(var_11, (arr_6 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_12 = (max(var_12, (arr_9 [11])));
        arr_10 [i_3] = -28390;
        var_13 -= var_3;

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_14 = (min((min(var_4, 1)), var_5));
            arr_13 [i_4] [i_4] = (((((arr_3 [i_3] [i_3]) ? 3490868013 : 37)) | -28390));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_18 [i_3] [1] [i_3] = var_2;
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_6] [i_5] [i_3] [i_3] = var_7;
                        var_15 = ((-28390 ? var_4 : var_9));
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            arr_28 [13] [i_8 - 2] [14] = ((7643913446935566776 ? 45136 : (4051020585 >= -10867)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_36 [i_8] = ((var_9 || (arr_24 [i_11] [i_11])));
                            arr_37 [i_3] [i_8 - 1] [i_3] [i_10 - 1] [i_11] [10] [i_8 - 1] = (((37 ? 62281 : -607849724)));
                            arr_38 [12] [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1] [i_8] = (min(((min((min(253, var_0)), (4826829210452642265 != 0)))), (((arr_1 [i_10 - 2]) - 6090))));
                        }
                        for (int i_12 = 3; i_12 < 16;i_12 += 1)
                        {
                            arr_41 [i_3] [i_8 - 1] [i_8 - 1] [i_10] [i_3] = 8;
                            arr_42 [i_3] [i_10] [i_9] [i_3] [i_3] = ((-((var_8 >> (arr_12 [i_3])))));
                            var_16 ^= (-10867 ^ (((min((arr_29 [i_12]), 22)))));
                        }
                        arr_43 [10] = (1516251587 && 2105329449);
                    }
                }
            }
        }
        var_17 = (arr_39 [1] [i_3] [i_3] [i_3] [i_3]);
    }
    for (int i_13 = 2; i_13 < 19;i_13 += 1)
    {
        var_18 = ((~(((arr_44 [i_13 + 2] [i_13 - 1]) | ((((arr_45 [i_13 + 1]) >= 1)))))));
        arr_46 [21] |= 10866;
    }
    var_19 |= 243;
    #pragma endscop
}
