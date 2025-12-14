/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_5 <= -195), var_13));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1 ? 0 : 10));
        var_20 = ((((((((!(arr_1 [i_0]))) && (((~(arr_1 [i_0])))))))) != (arr_0 [i_0])));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_21 = ((((~(((arr_5 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_2]))))) ^ (((var_5 & var_17) ? (((arr_3 [i_0]) | var_5)) : 23605))));
                arr_8 [i_0] [i_0] [i_0] = (!902765983);
                var_22 ^= (((4294967295 * (min((arr_7 [i_2] [9]), var_9)))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_23 = (((((~(arr_1 [i_0])))) ? ((max(var_11, (arr_14 [i_0] [i_3] [i_0] [i_2] [i_2] [0] [i_0])))) : (!var_14)));
                            var_24 = (arr_7 [i_1] [i_1 - 2]);
                            var_25 = max((arr_14 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_3 + 1] [i_4] [i_4]), (min((((arr_12 [i_0] [i_0] [0] [i_3] [0]) - var_15)), (arr_3 [i_0]))));
                        }
                    }
                }
                var_26 = var_0;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_27 = ((-(((5 / 25) / ((max(var_10, (arr_3 [i_0]))))))));
                arr_18 [i_0] [i_5] [i_0] = var_13;
                var_28 = (!25);
                arr_19 [6] [i_0] = (max(((var_7 | (max(var_7, 5271601689633844250)))), (max((arr_3 [i_0]), var_1))));
            }
            var_29 = (((((~((var_2 >> (var_14 - 22688)))))) | ((4133443770 ? (((254 << (-7305371318464730821 + 7305371318464730824)))) : 3248413799))));
            var_30 = ((((max((max(var_11, var_11)), (!var_9)))) || ((!(arr_7 [i_0 + 1] [i_1])))));
            var_31 = arr_14 [i_0] [i_0 - 1] [i_0 - 1] [8] [i_0] [i_0] [1];
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_32 = (((((arr_17 [i_0]) ? (((var_5 >= (arr_9 [i_0])))) : var_18)) >= ((((((arr_9 [i_0]) < 1)) && var_6)))));
            arr_22 [i_0] = (arr_4 [i_6]);
            var_33 = ((((((((arr_17 [i_6]) + (arr_16 [i_0] [i_0] [i_0] [i_6]))) / (arr_7 [i_0] [i_0 - 1])))) ? (~var_13) : ((((max((arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_6] [i_6] [3]), (arr_13 [i_6] [i_0] [i_0 + 1] [i_0] [i_0])))) << (29610 - 29603)))));
            var_34 = (((((((max(var_10, (arr_7 [i_0 + 1] [i_6])))) && (var_12 > 18564)))) | 15679));
        }
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_35 *= (arr_29 [i_7] [i_7] [i_8]);
            arr_30 [i_7] [i_8] = ((+(min((max((arr_29 [i_7 - 2] [20] [i_8]), (arr_23 [i_7 + 2]))), var_16))));
            var_36 = ((((arr_23 [i_8]) + 9223372036854775807)) << (((var_6 * var_10) - 11179612)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_37 = (((max(((((arr_31 [18] [18] [i_7]) ^ (arr_29 [i_7 + 2] [i_8] [i_10])))), (arr_26 [11]))) ^ ((((!(arr_26 [i_7 - 2])))))));
                        var_38 = (min(var_5, ((min(5, 100)))));
                        var_39 -= var_18;
                    }
                }
            }

            /* vectorizable */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_40 = ((!((33561 != (arr_25 [i_8] [18])))));
                arr_38 [i_8] [i_8] [i_11] = ((arr_35 [i_11] [i_7 + 2] [i_7 + 2]) ? ((var_0 + (arr_24 [11] [11]))) : (arr_25 [i_7 + 2] [i_7 + 2]));
                var_41 = ((!(arr_35 [i_7 + 2] [i_7] [i_7 + 1])));
                var_42 = (((((arr_33 [i_11]) ? (arr_35 [i_7] [20] [i_7]) : 23596)) & -25));
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_43 = (((arr_26 [i_7 + 1]) <= (arr_29 [i_7 + 1] [i_7 - 2] [i_7 - 2])));
            var_44 &= (((31 > var_9) ? (arr_35 [i_7] [i_12] [12]) : (arr_29 [i_7] [19] [i_12])));
            var_45 = (--23580);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    var_46 = (max(var_46, var_15));
                    arr_47 [2] [i_13] [i_13] [i_7 + 2] = (arr_36 [i_14] [i_13] [15]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_47 = ((((((arr_33 [i_15]) >> (arr_28 [i_15] [i_15])))) ? (((arr_49 [i_15]) + 59069)) : var_5));
        var_48 = ((((((arr_46 [i_15] [6]) ? (arr_41 [i_15]) : var_4))) ? (arr_25 [i_15] [i_15]) : (((arr_33 [i_15]) | var_0))));
        var_49 = arr_24 [i_15] [i_15];
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 18;i_16 += 1)
    {
        var_50 = (!65529);
        var_51 = ((-8970879889633146553 ? 1263382080 : 31974));
    }
    #pragma endscop
}
