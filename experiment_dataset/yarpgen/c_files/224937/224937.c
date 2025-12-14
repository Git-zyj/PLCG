/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_9));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_15 = (max(var_15, 3847635906));
                            var_16 = (min(var_16, var_11));
                            var_17 = (max(var_17, (((-(arr_10 [i_3 + 1] [i_0] [i_0 - 2] [9] [i_4]))))));
                            var_18 = (arr_1 [i_0]);
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_19 = var_10;
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_5] [i_5] = (arr_3 [i_0 - 1] [i_0 + 1]);
                            arr_15 [12] [12] |= 0;
                            var_20 = -196;
                        }
                        var_21 ^= -var_6;
                        arr_16 [i_0] [i_2] [16] [i_2] = (arr_4 [i_2]);
                    }
                }
            }
        }
        var_22 = (min(var_22, (arr_5 [0] [10] [i_0] [i_0])));

        for (int i_6 = 4; i_6 < 23;i_6 += 1)
        {
            var_23 = ((~(arr_5 [i_0 - 1] [i_6] [i_6 + 1] [i_0])));

            for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_0] [i_0] [i_6] = (~var_2);
                arr_24 [i_0] [i_6] [i_7 + 2] |= 202;
                arr_25 [i_0] [i_6] [i_7] [9] = (170 % 13424);
            }
            for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
            {
                arr_28 [i_8] [i_6] [i_0 - 4] = ((-(~-2109416695)));

                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    arr_32 [i_0] [i_0] [i_0] [i_8] [i_9] = (arr_17 [i_9] [i_0] [i_0]);
                    arr_33 [i_8] [8] = 1860567482719114330;
                }
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    var_24 = 85;
                    var_25 = 5304845305992784327;
                    var_26 = (min(var_26, ((((arr_13 [8] [8] [i_6 + 1] [i_10 - 2] [i_10]) ? ((0 ? (arr_3 [i_0] [i_6]) : -12063)) : (arr_36 [i_10 + 3] [i_8 + 1] [i_6 - 2]))))));
                    arr_37 [i_8] [18] [i_8] [i_6] [i_0 - 2] [i_0 - 2] = ((~(arr_36 [i_6] [i_8] [i_8])));
                }
            }
        }
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            var_27 = (((((1329946293486223297 ? 6 : (arr_22 [i_0] [i_11 + 1] [i_11])))) ? (arr_31 [i_0 + 3]) : 7250961608610424418));
            var_28 = 93;
        }
        arr_41 [i_0] [i_0] = ((var_7 / (arr_27 [i_0 - 1] [i_0 + 2] [i_0 + 1])));
        arr_42 [i_0] = -5;
    }
    var_29 ^= ((!((min(var_12, (max(1, 5839599058661730900)))))));
    var_30 = ((var_4 ? var_10 : var_8));
    #pragma endscop
}
