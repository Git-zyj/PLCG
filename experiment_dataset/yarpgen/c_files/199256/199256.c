/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (15 == var_18);

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = -1;
            arr_5 [1] = (arr_3 [i_0] [2] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] = 36;
                        var_22 -= (arr_2 [i_0]);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_14 [1] [i_1] [i_1] [i_3] [i_1] [i_1] = var_6;
                            var_23 = (+-4);
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((var_19 ? 27698 : var_12)));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_24 -= (27701 != var_7);
                            var_25 = (max(var_25, (arr_4 [i_3])));
                            var_26 = (min(var_26, ((((var_13 ? 7642530555873480239 : 4))))));
                        }
                        arr_19 [i_0] [i_2] [i_3] = (var_0 / var_3);
                    }
                }
            }
        }
        var_27 = (max(var_27, ((((((1971393040 % ((112 & (arr_4 [i_0])))))) ? (((((min(247, var_10))) % (max((arr_4 [i_0]), var_10))))) : -13451935406255234836)))));
        var_28 = ((var_8 ? (min((arr_13 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0]))) : (((arr_13 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0]) : 1))));
        arr_20 [i_0] [i_0] = ((-(max(var_11, (arr_9 [i_0] [i_0] [i_0] [6])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_28 [i_0] [i_0] [i_8] [i_7] [i_8] = var_14;
                        arr_29 [i_0] [i_0] [11] [i_8] [i_0] = (min(29, (~15025)));
                        var_29 *= (min((max((((arr_8 [3] [i_6] [i_7] [i_8]) ? var_4 : var_3)), ((var_1 ? -24193 : 54733)))), (((!(((var_15 * (arr_10 [i_0] [i_0] [i_0] [i_8])))))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_30 = ((!(((var_13 ? (arr_2 [i_9]) : ((var_10 >> (((arr_25 [i_9] [1] [1]) - 1585)))))))));
        var_31 = (min((arr_4 [i_9]), (min(((((arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / var_1))), (arr_13 [i_9] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    arr_38 [i_9] [i_11] [9] = min((arr_37 [i_11] [i_10]), (((arr_10 [i_9] [i_10] [i_11] [i_10]) | (arr_18 [i_9] [i_9] [i_11] [i_11] [i_9] [i_11] [i_10]))));
                    arr_39 [i_11] [i_9] [i_11] [i_9] = ((-(!29438)));
                    arr_40 [i_11] = (((min(11774254528463081058, 112)) | ((((9223372036854775789 ^ 3059459675) ^ (((min(var_15, var_2)))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_32 = min(((max(var_1, ((91 ? -8379985993676505286 : 151))))), (max(2887692091324443158, (arr_6 [i_9] [i_9]))));
                                arr_45 [i_9] [i_10] [i_10] [i_10] [i_10] |= ((!(min(((var_17 && (arr_34 [i_9] [i_9] [14]))), (!var_19)))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_48 [i_9] [i_9] = ((var_12 ? (arr_18 [i_9] [i_9] [i_9] [i_14] [i_14] [i_14] [i_9]) : ((((63 == (arr_0 [i_9])))))));

            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                var_33 = (max(var_33, var_6));
                arr_51 [i_9] [i_15] [i_15] = ((((((((var_4 ? var_3 : var_5))) ? ((min(var_8, 236))) : (~1)))) ? 120 : (min((~var_18), (~var_13)))));
            }
        }
        arr_52 [i_9] = ((min(-var_14, (((!(arr_4 [i_9])))))));
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_34 = (-((-(arr_6 [i_16] [15]))));
        arr_55 [i_16] = (min((4 & 38), ((var_13 ^ (arr_6 [i_16] [i_16])))));
    }

    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        arr_58 [i_17] = ((+(((arr_56 [i_17]) - (arr_57 [i_17])))));
        arr_59 [i_17] = min(4, 45);
    }
    var_35 = ((-(((var_9 - var_4) ? var_12 : (var_4 % var_5)))));
    #pragma endscop
}
