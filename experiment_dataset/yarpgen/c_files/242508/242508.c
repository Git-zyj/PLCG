/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = ((1 ? 1 : 1019450263));
        var_22 = (max(var_22, ((((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_2 [i_0 - 3]) : var_14)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_3 [i_1] [17])));
        arr_7 [18] [18] |= (2147483630 ? -1237142604 : 12);
        arr_8 [i_1] = var_13;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            var_24 = var_17;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        var_25 = var_11;
                        var_26 = (max(var_26, var_3));
                        var_27 = (arr_15 [i_5 - 1] [i_5 - 1] [i_3 - 2]);
                        var_28 += (((~var_8) ? var_7 : (((125 ? 1019450246 : -1237142623)))));
                    }
                }
            }
            var_29 = (max(var_29, ((((-1326141418979234303 ? 1 : 151))))));
        }
        var_30 = (min(var_30, (arr_16 [i_2] [i_2] [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_30 [i_2] [i_6] [i_7] [4] [14] |= ((!(((+((((arr_19 [7] [i_2]) <= var_1))))))));
                                var_31 = (min(var_31, var_11));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_32 -= var_16;
                        arr_35 [i_2] [i_2] [i_2] [i_2] = var_11;
                    }
                    var_33 = (((((~(((arr_15 [11] [i_6 - 2] [i_2]) ? (arr_9 [i_6]) : var_6))))) ? ((-(arr_12 [i_2] [i_6] [1]))) : -48));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 8;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_40 [i_11] = (arr_26 [i_11 + 1] [i_11 - 1] [i_12] [i_11 + 1]);
            arr_41 [2] [i_12] [i_12] &= ((1471943264 ? var_6 : (arr_14 [i_12] [i_12] [i_11] [i_11])));
            var_34 ^= var_3;
        }
        var_35 &= (((arr_5 [2]) ? -1 : 103));
        arr_42 [i_11] = (arr_32 [i_11 + 1] [i_11 + 2] [i_11 + 2]);

        for (int i_13 = 2; i_13 < 9;i_13 += 1)
        {
            var_36 = (min(var_36, (((!(~-1237142581))))));

            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_37 ^= 2575129451405062865;
                var_38 += ((202 ? ((~(arr_1 [14]))) : var_14));
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_39 = (arr_39 [i_11]);
                arr_51 [i_11] [i_13] = (1 % (arr_11 [i_11 + 3]));
            }
        }
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_40 = (arr_11 [i_11 + 3]);
            arr_55 [i_11] = ((((((arr_17 [i_11] [i_11 + 1] [i_11 + 1] [i_16]) % (arr_33 [i_11] [i_11] [i_16] [i_11] [i_16])))) ? ((var_2 ? (arr_11 [i_11]) : var_9)) : (arr_10 [1])));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        arr_60 [i_11] = (((!-34) ? 1 : 7628499161405028220));
                        var_41 = (((~var_7) ? var_7 : 53));

                        for (int i_19 = 2; i_19 < 10;i_19 += 1)
                        {
                            var_42 = ((arr_53 [i_11] [i_19 - 2] [i_19 - 2]) % var_7);
                            var_43 = -34;
                            var_44 = (min(var_44, ((((arr_3 [i_11 + 1] [i_11 - 1]) < (arr_3 [i_11 + 2] [i_11 + 1]))))));
                        }
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            arr_67 [i_11] [i_16] [i_17] [4] [i_20] = 224;
                            var_45 = (~(arr_38 [i_11 + 1]));
                        }
                        for (int i_21 = 0; i_21 < 11;i_21 += 1)
                        {
                            arr_70 [i_11] [i_17] = (((arr_50 [i_11 + 3] [i_11 - 1] [i_11 - 1] [i_11]) ? (arr_53 [i_11] [i_11 + 1] [i_11]) : 75));
                            var_46 = (min(var_46, (((163 ? ((-(arr_9 [1]))) : 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
