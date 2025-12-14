/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = arr_0 [i_0];
        arr_2 [i_0] = (min((((~(((arr_1 [i_0]) & 1))))), ((17014650298133358022 ? 1984 : 4178767749))));
        arr_3 [i_0] [i_0] = 1;
    }
    var_12 = (min(var_12, ((((-1 ? ((max(1, var_7)) : var_4)))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (arr_4 [i_1] [i_1])));
        var_14 = ((-1326726130 ? 16368 : 15865943265244453364));
        arr_7 [i_1] [i_1] = -9731;
        arr_8 [i_1] [i_1] = 110;

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            arr_11 [24] [i_1] [13] = ((((arr_5 [i_1]) ? 1 : 1)));
            arr_12 [i_2] [i_1] [i_1] = 46;
            var_15 &= ((-(arr_9 [i_1] [i_2 + 2])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = var_10;

        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_26 [13] [i_6] [21] [i_4] [i_3] = (!1326726150);
                        var_16 += (((arr_13 [i_5]) ? 1 : (arr_13 [i_3])));
                        arr_27 [i_3] [i_4 + 1] [i_4 - 1] [0] [i_6] [i_6] = arr_4 [i_5 - 2] [i_4 - 1];
                        arr_28 [i_3] [12] [i_5] [12] [5] = 1;
                    }
                }
            }
            arr_29 [i_3] [i_4 - 1] = (arr_18 [i_4 - 1] [i_4 + 1] [i_4 + 1]);
        }
        arr_30 [i_3] = ((!(((1 ? -1326726150 : (arr_19 [23]))))));
        var_17 = (((arr_13 [i_3]) != 64));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                {
                    var_18 &= (arr_19 [i_8 + 1]);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_46 [i_7] [i_7] = (arr_35 [i_7] [i_7]);
                                arr_47 [i_7] [i_7] [i_7] [i_7] [23] = (arr_42 [i_10 - 1] [i_9 - 2] [i_9 + 2] [i_8 + 1] [i_8] [0]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_51 [i_12] [10] [i_9] [i_8 + 1] [i_8 + 1] [i_7] = (((arr_15 [i_8 + 1]) >= (arr_15 [i_8 - 2])));
                        var_19 = (arr_35 [i_8 - 2] [i_8 - 2]);
                        arr_52 [i_8 - 2] [i_8 - 2] = (((arr_14 [i_9]) == (arr_17 [20])));
                    }

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        var_20 = 12330269696313920337;
                        arr_56 [i_13] [i_8] = (arr_4 [i_7] [i_7]);

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_59 [i_7] [8] [i_9] [i_13] [i_9] [i_13] [i_14] = 1;
                            arr_60 [i_13] [i_13] = (arr_54 [i_13 - 2] [i_14] [i_14] [i_14] [i_14] [i_14]);
                        }
                        var_21 = 1;
                    }
                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        var_22 = (max(var_22, (((max((min((arr_38 [22]), (arr_37 [i_9 + 2]))), (((-(arr_36 [i_7] [0] [17]))))))))));
                        arr_63 [i_7] [i_7] [i_7] = (arr_53 [i_15 - 1] [i_15] [i_9] [i_8] [3]);
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_23 = (arr_33 [i_8] [i_7]);
                        arr_68 [i_7] [i_8 - 3] [i_9] [i_16] = 1;
                        var_24 = (min(var_24, (arr_49 [i_8 - 2] [i_9 + 1] [i_16] [i_16])));
                    }
                    arr_69 [i_7] = (arr_34 [i_9]);
                }
            }
        }
        arr_70 [i_7] [i_7] = 1;
    }
    for (int i_17 = 1; i_17 < 6;i_17 += 1)
    {
        var_25 = max((arr_10 [23] [i_17 - 1] [1]), -125);
        arr_74 [0] &= 0;
    }
    var_26 ^= var_3;
    #pragma endscop
}
