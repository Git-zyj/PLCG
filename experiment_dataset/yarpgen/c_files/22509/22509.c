/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = ((var_12 - (min((~-1479222354), var_12))));
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) != var_10));
        var_21 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1] = ((!(arr_6 [i_1])));
                    arr_12 [i_3] [i_1] [i_1] [9] = (0 <= (arr_7 [i_3 - 2] [i_2] [i_1]));
                    var_22 = (((arr_4 [i_3] [i_2]) * ((((arr_7 [i_1] [i_2] [i_1]) == (arr_9 [i_1] [4] [4] [i_1]))))));
                }
            }
        }
        arr_13 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
        arr_14 [i_1] [i_1] = ((((~(arr_2 [i_1] [i_1]))) == (arr_2 [i_1] [i_1])));
        arr_15 [i_1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_23 ^= 22738;

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_5] [8] = (arr_5 [i_4] [i_4]);
            var_24 = arr_3 [i_4];
            var_25 = (min(var_25, ((((8551 ? 590084701 : 116))))));
            arr_23 [i_4] = ((-32767 - 1) ? -var_0 : ((~(arr_1 [i_4]))));
            arr_24 [i_4] [i_5] |= (0 & 0);
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_27 [i_4] [i_4] = ((1 ? (arr_16 [i_4]) : (~var_12)));
            var_26 = ((-(arr_19 [i_4])));
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_31 [i_4] [i_7 + 1] = (((arr_21 [i_7 + 1] [i_7 + 1]) || (arr_21 [i_7 + 1] [i_7 + 1])));

            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                arr_34 [i_4] [4] [i_4] = (1484200119449064446 + 240);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_27 = ((var_0 >= (arr_29 [i_4])));
                            var_28 = ((~(arr_33 [i_8 + 3] [i_8] [i_7 + 1] [i_4])));
                        }
                    }
                }
            }
            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {
                var_29 = (arr_2 [i_4] [i_11 + 2]);
                arr_41 [i_4] [i_7] [i_4] = arr_3 [i_11];
                arr_42 [i_4] [i_4] [i_7 + 1] [i_4] = (((~(arr_26 [i_4] [i_7]))));
                var_30 = (arr_25 [i_4] [i_4]);
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_49 [i_4] [i_7] [i_12] [i_4] [i_7] = var_3;
                            var_31 = ((-(arr_21 [i_13 - 2] [i_13 + 2])));
                        }
                        var_32 = ((((~(arr_47 [i_4] [i_7] [i_7] [i_12] [i_13])))) ? var_1 : (arr_40 [i_4] [i_7] [i_4]));
                    }
                }
            }
            arr_50 [i_4] [i_4] [i_4] = 30720;
        }
        arr_51 [i_4] = 144106391982833664;
    }
    for (int i_15 = 4; i_15 < 19;i_15 += 1)
    {
        var_33 = ((((((arr_54 [i_15 - 4]) | ((max(21833, var_3)))))) ? (((-var_1 || (arr_52 [i_15])))) : (arr_1 [6])));
        /* LoopNest 3 */
        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    {
                        var_34 = (arr_55 [i_15] [i_15 + 1]);
                        arr_62 [i_16] [i_17] [i_16] [i_16] = (max((min((min(4294967295, -241)), ((((arr_0 [i_16]) || 1))))), var_11));
                    }
                }
            }
        }
        var_35 = ((-((-(min(91481159410527260, (arr_52 [i_15])))))));
        var_36 = ((31 ? (arr_57 [18]) : (arr_61 [i_15] [i_15] [14])));
    }
    var_37 = var_11;
    #pragma endscop
}
