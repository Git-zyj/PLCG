/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(var_15, (max(-22599, -22603))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_18 ^= var_2;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_19 = ((0 ? 22598 : -22613));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_0] [i_2] [i_0] = (arr_5 [i_0] [i_1 + 2] [4]);
                        arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = var_15;
                    }
                    var_20 ^= (1 | 22598);
                }
            }
            arr_16 [i_0] = (((arr_13 [i_0] [8]) || (((var_0 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_11)))));
            var_21 += ((3355178042 && ((((arr_4 [12]) ? var_12 : var_3)))));
            arr_17 [i_0] = (arr_6 [i_1] [i_1 + 1]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_22 [i_0] [i_0] [i_0] = (((arr_4 [i_0]) ? (var_4 <= var_7) : ((8690532704946195897 ? 213 : 1819349133197866841))));
            var_22 = (min(var_22, (arr_18 [i_5 + 4] [i_5 + 3])));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_23 = (min(var_23, ((((((var_3 ? var_5 : var_2))) ? var_8 : (arr_10 [i_6] [i_6] [i_0] [i_0]))))));
            arr_25 [i_0] [i_6] [i_6] = ((((var_9 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : var_0)) < var_3));
            arr_26 [20] [20] [20] |= (((-(arr_23 [i_0] [i_0] [i_0]))));
        }
        var_24 = ((var_12 ? ((132 ? 501712154 : 18277)) : (arr_20 [i_0] [i_0] [i_0])));

        for (int i_7 = 4; i_7 < 19;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_25 = ((var_6 ? (((arr_3 [i_0]) ^ var_13)) : (var_11 % var_8)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_36 [i_10] [16] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_7 + 2] [i_10 + 1] [i_10 - 1]) <= var_2));
                            arr_37 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = (!var_0);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_26 = (max(var_26, (((var_0 || ((((arr_5 [i_0] [18] [i_0]) ^ var_5))))))));
                    arr_42 [i_0] [i_0] [i_7] [i_7] [i_0] [i_11] = ((var_12 ? (arr_10 [i_0] [i_7 + 2] [i_8] [i_11]) : (arr_33 [i_7] [i_0])));
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {

                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_27 = (min(var_27, ((((arr_27 [2]) ? var_13 : (arr_27 [18]))))));
                        arr_49 [i_0] = ((var_7 - (arr_45 [i_7 - 4] [i_12 + 1])));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_8] [i_12 + 1] [i_14] [i_14] = ((var_5 ? (arr_38 [i_0] [i_0] [i_0] [i_14]) : (arr_38 [i_14] [i_0] [i_0] [i_0])));
                        var_28 = (var_0 ? (((arr_52 [i_0] [i_8] [i_0]) ? var_7 : var_6)) : var_5);
                    }
                    arr_55 [i_0] [i_7 - 1] [i_7 - 1] [i_0] = (((((arr_45 [i_8] [2]) ? var_1 : var_16)) <= (arr_9 [i_8] [i_8] [i_8] [i_8] [i_8] [i_0])));

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        arr_59 [i_7 - 3] [i_0] = (((-1414816186 - 2) ^ (0 & 2548823862)));
                        var_29 = 22600;
                        arr_60 [i_0] [i_0] [i_7 - 2] [i_0] [i_8] [i_12] [i_15] = (((((arr_7 [i_7 - 3] [i_12] [i_15]) ? 18446744073709551615 : -22582)) > var_12));
                    }
                }
            }
            arr_61 [i_0] = (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]);
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_64 [i_0] [i_0] = ((!(~var_4)));
            var_30 = ((var_5 ? (arr_7 [i_16] [i_0] [i_0]) : (arr_56 [14] [i_0])));
        }
    }
    #pragma endscop
}
