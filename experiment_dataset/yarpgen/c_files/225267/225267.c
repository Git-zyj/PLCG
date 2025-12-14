/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 ^= (var_6 / var_1);
        arr_3 [10] |= var_7;
        arr_4 [i_0] = (-15917 ? 0 : 18);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 -= (arr_7 [i_1] [i_1]);
        var_17 = (min(var_17, var_6));
        arr_8 [4] [i_1] = (+(max((arr_1 [2]), (arr_1 [22]))));
        var_18 = (((max(9790114938797715498, 224)) & 15917));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_19 = var_6;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_2] [2] [4] &= (((arr_16 [8] [i_4 - 1] [i_4 - 3] [i_2 + 4] [i_2 + 2] [8]) && (var_5 || var_14)));
                    arr_19 [i_1] [i_1] [i_2] [5] = (((var_4 - var_7) / (((arr_13 [i_1] [i_2 - 1] [i_3]) ^ (arr_11 [i_2] [i_3] [i_2])))));
                    arr_20 [i_2] [12] [i_2 - 1] [i_2] = -15918;
                    var_20 = (min(var_20, (((-(var_6 - var_11))))));
                }
                for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_25 [i_2] [i_2] = (((arr_10 [i_2] [i_2 + 4]) < (arr_9 [i_2])));
                    var_21 -= ((var_10 < (arr_12 [4] [i_3] [i_5])));
                    arr_26 [i_2] [i_3] [i_2] [i_2] [i_1] = ((var_8 + (var_8 & var_11)));
                    var_22 = (((arr_13 [i_1] [i_3] [i_5]) + -27777));
                    var_23 = (((arr_11 [i_2 - 1] [i_2 + 1] [i_2]) ^ var_8));
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_24 = (((arr_15 [9] [9] [i_2] [i_6]) + (arr_17 [i_1] [i_1] [i_3] [i_6 - 1] [i_7] [i_1])));
                        var_25 = ((((arr_17 [9] [i_2] [i_3] [i_6 + 2] [i_7] [i_7]) * var_3)) * var_10);
                        var_26 = (var_6 - var_8);
                        var_27 = (((arr_1 [i_2]) >= (arr_1 [i_2])));
                    }
                    var_28 = var_12;
                }
                var_29 = (((arr_28 [i_2] [i_1] [i_2 + 2]) | -15917));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_30 += var_7;
                arr_35 [i_8] [i_2] [i_2] [i_1] = ((var_5 ? (arr_10 [i_2] [i_2]) : var_0));
                var_31 = var_6;
            }
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_42 [i_9] [i_2] = (15917 | 15916);
                    var_32 = var_4;
                }
                var_33 = (min(var_11, var_5));
                var_34 = (9 || 2344728342);
                var_35 = (~-27777);
            }
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            arr_45 [i_11] = (max(-4725947153485593579, (arr_14 [i_1] [i_1] [i_1] [i_11 + 1])));
            arr_46 [9] [3] [13] = max((arr_34 [i_1] [i_1] [i_11] [i_11]), (arr_33 [i_1] [i_11] [i_11 - 1] [i_1]));
            var_36 = (((var_5 - var_3) != ((~(max(var_10, var_8))))));
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_37 = (((arr_0 [22]) <= (arr_47 [i_12])));
        arr_49 [i_12] = (((var_13 || -122) ? var_3 : 118));
    }
    var_38 = (var_7 <= var_7);
    #pragma endscop
}
