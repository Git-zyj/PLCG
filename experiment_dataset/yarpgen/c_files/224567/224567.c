/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 += min(251, ((var_18 ? (arr_1 [i_0]) : (min(var_18, (arr_0 [i_0]))))));
        var_20 = (max(var_20, ((max((((((var_15 ? (arr_0 [11]) : (arr_0 [i_0])))) ? -6020242200520562786 : ((var_16 ? var_13 : (arr_1 [i_0]))))), var_17)))));
        arr_2 [i_0] [i_0] |= ((((var_7 ? var_17 : (arr_0 [i_0]))) >= ((var_8 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_21 *= ((((min((arr_1 [i_0]), var_6))) ? ((var_5 + (arr_0 [i_0]))) : 18446744073709551597));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_22 = var_18;
        var_23 = (((var_6 ? var_2 : var_14)) | ((((arr_0 [i_1]) == (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2] [12] = min((((((arr_5 [i_2] [i_2]) ? 6263900620119687332 : var_9)) | (((max(var_5, 65)))))), (min(var_8, (~var_11))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_24 *= (((arr_4 [i_2]) >= (min(var_10, var_0))));
                            var_25 = (min(var_25, ((((((0 ? 190 : (arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_5 - 3] [i_6])))) ? ((((max((arr_3 [i_2]), var_18)) == (((arr_15 [i_2] [i_3] [i_3] [i_4 - 1] [i_4] [i_3] [i_6]) ? (arr_13 [i_2]) : var_6))))) : (arr_16 [i_4 + 2] [i_5 - 2] [i_6] [i_6] [i_6]))))));
                            var_26 = ((((-(((arr_0 [i_3]) - (arr_5 [i_2] [i_2])))))) ? (arr_5 [i_3] [i_6]) : (arr_6 [i_5 + 1]));
                            arr_17 [i_2] [i_3] [i_3] [i_4] [i_2] [i_3] [i_6] = (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [13]);
                        }
                    }
                }
            }
            arr_18 [i_3] = (max((((((min(var_6, 174))) ? 444421182 : (arr_6 [i_2])))), var_3));
        }
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                arr_24 [i_2] |= ((((min(-9, (var_12 >= var_17)))) + (((((var_13 ? (arr_19 [i_2] [i_2]) : 64))) ? (((1 != (arr_20 [i_2] [i_2] [i_2])))) : (arr_9 [i_7] [i_7 - 1])))));
                arr_25 [i_7] [i_7] [i_7] = (((((var_6 ? ((174 ? 1 : 1)) : var_12))) ? (((((((var_13 ? 0 : var_15))) && 9)))) : var_0));
                var_27 = (max(var_27, ((((arr_21 [i_8] [i_8 + 2] [i_8 - 1]) ? (arr_15 [i_2] [i_2] [i_2] [i_2] [i_7] [i_7] [i_8 - 1]) : -611479370)))));
            }
            arr_26 [i_2] [i_7] [i_2] &= (9 ? (var_14 % 53075) : (((arr_15 [i_7 - 1] [2] [i_7 - 1] [i_7] [i_7 + 2] [3] [i_7]) ? ((min((arr_21 [i_2] [i_2] [i_2]), var_12))) : (arr_9 [i_7] [i_7 + 3]))));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_28 &= (min(224, var_9));
            var_29 = var_0;
        }
    }

    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_30 = var_14;
        arr_31 [i_10] [i_10] = ((!((((~(arr_30 [16]))) == (arr_30 [i_10])))));
        var_31 = (max(var_31, (arr_0 [i_10])));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_36 [i_11] [i_11] |= (((((var_13 ? (arr_35 [i_11]) : var_0))) ? (((arr_35 [i_11]) << (arr_35 [i_11]))) : var_1));

        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_32 = ((((((~(arr_33 [i_12]))) + 2147483647)) << (var_2 - 2070423604)));

            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_33 = ((-(((((((arr_33 [i_13]) ? var_13 : (arr_33 [i_11])))) == (((arr_1 [i_11]) ? var_2 : var_7)))))));
                var_34 = (min((((arr_40 [i_11] [i_11] [i_11]) | var_18)), (((!(arr_40 [i_13] [i_11] [i_11]))))));
            }
            var_35 &= var_12;
            var_36 |= var_10;
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 17;i_14 += 1)
        {
            var_37 += (((arr_40 [i_11] [i_14 + 1] [i_14 + 1]) & ((~(arr_42 [6])))));
            var_38 = var_17;
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    {
                        var_39 = (min(var_39, 875608854));
                        var_40 = ((var_14 | 0) | ((-116 ? (arr_32 [i_14] [i_11]) : var_4)));
                        arr_48 [1] [i_11] [i_15] [18] [i_14] [i_16] |= ((var_16 | (arr_35 [i_14 - 2])));
                    }
                }
            }
            var_41 ^= ((var_16 ? var_10 : (~var_9)));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            var_42 = (min(var_42, (arr_34 [i_11] [i_20])));
                            var_43 = ((((-(arr_44 [i_20] [i_17]))) << (((((arr_49 [0] [9]) + 147)) - 58))));
                        }
                    }
                }
            }
            arr_59 [i_11] [i_11] [i_17] &= (1553197955 >= var_6);
            arr_60 [i_11] [i_17] = ((var_0 ? (arr_40 [i_11] [i_17] [i_17]) : (var_8 && var_3)));
            arr_61 [i_17] [i_17] = (((arr_38 [i_11] [i_11]) ? (arr_45 [i_11] [i_11] [i_11]) : (arr_44 [i_11] [i_17])));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 19;i_23 += 1)
                    {
                        {
                            arr_69 [i_11] [i_23] [i_21] = (((arr_0 [i_11]) ^ (arr_47 [i_11] [i_21] [i_22] [i_23 + 1])));
                            var_44 = (min(var_44, ((((arr_57 [i_11] [i_22 + 1] [i_11] [i_23 - 1] [i_23]) - var_15)))));
                            var_45 = ((var_12 ? -7330554829994546993 : var_15));
                            arr_70 [i_23] [i_17] = (((arr_37 [i_23 - 2] [i_23 - 1]) - (arr_37 [i_23 - 2] [i_23 - 2])));
                            arr_71 [i_11] [i_23] [i_23] = 12460;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    {
                        var_46 = (arr_74 [i_25] [i_26]);
                        var_47 = (arr_73 [i_25] [13]);
                        var_48 |= var_13;
                    }
                }
            }
            var_49 += ((((arr_75 [i_24] [i_24] [i_11]) >= var_11)));
        }
        arr_80 [10] [i_11] = -86;
        var_50 *= (((min((var_13 + var_16), 1484611938)) * (arr_51 [i_11] [i_11])));
    }
    var_51 = (((((var_8 >= var_0) ? (((var_10 ? var_0 : var_18))) : (var_4 % var_1)))) ? var_18 : ((max((var_15 != var_4), (min(0, var_15))))));
    #pragma endscop
}
