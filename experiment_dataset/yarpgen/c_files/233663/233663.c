/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 &= var_0;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [1] [i_1] [i_3] [i_2] = (((arr_2 [i_1]) <= (min(956157313, (((8926 < (arr_5 [i_3] [i_1] [1]))))))));
                        var_16 = ((((((arr_2 [i_1 + 3]) ? (arr_6 [i_1 - 2] [i_1] [i_3] [i_3]) : (arr_6 [i_1 + 2] [i_1] [i_2] [i_3])))) < ((var_14 % (arr_2 [i_1 + 3])))));
                        arr_12 [i_2] [i_2] = (var_2 == var_10);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] [i_2] [6] [i_2] [9] = arr_7 [i_2] [10];
                            var_17 -= var_14;
                        }
                    }
                    var_18 = (min(var_1, var_5));
                    var_19 ^= (min((((var_0 + (arr_4 [i_1] [i_1 - 1])))), (min((var_12 ^ var_11), (arr_9 [i_1 - 2] [i_1] [7] [i_2] [8])))));
                }
            }
        }
    }

    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        var_20 = (arr_19 [i_5] [i_5 - 3]);
        arr_20 [i_5] &= (arr_19 [i_5 - 4] [i_5 - 3]);
    }

    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_21 = (((((((16785616626760299731 ? (-127 - 1) : (arr_16 [i_6] [i_6])))) ? (((min(var_10, var_14)))) : ((3583768183 << (var_12 - 16647)))))) ? ((((((16785616626760299743 * (arr_21 [i_6] [i_6])))) ? (var_7 >> 0) : (var_6 != var_2)))) : 8927);
        arr_24 [1] = min((((((~(arr_23 [10])))) ? ((min(109, (arr_22 [i_6])))) : (arr_16 [i_6] [i_6]))), ((min(((~(arr_21 [i_6] [i_6]))), var_4))));
        arr_25 [16] |= var_5;
        arr_26 [1] [i_6] = (min(((+((min((arr_18 [i_6]), var_2))))), var_13));
        var_22 *= (((-(max((arr_19 [6] [i_6]), (arr_23 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_40 [i_9] [1] [i_8] [i_10] [i_9] [i_11] = (arr_39 [i_8] [i_9] [i_9]);
                            arr_41 [i_8] = (((-1048763115 <= -8928) ? (((max((arr_28 [i_7] [i_8 - 1]), (arr_28 [i_8] [i_8 + 1]))))) : 8904));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            arr_45 [i_7] [10] [i_9] [10] [10] |= (((((arr_42 [i_10] [i_10] [6] [8] [9] [i_10] [16]) ? (arr_27 [i_7]) : var_8))) ? var_7 : 3411554567);
                            arr_46 [i_10] [i_8] [i_10 - 1] [1] [i_10 + 1] [i_10 - 1] = var_7;
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            arr_49 [i_10] [14] [i_8] = 1048763115;
                            arr_50 [1] [10] [14] [i_10] [i_13] [i_8] = (((var_5 | (arr_44 [i_7] [i_8 - 1] [i_9] [i_10] [i_13]))));
                        }
                        arr_51 [10] [i_8] [i_9] [i_10] [i_8] = arr_36 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10];
                    }
                }
            }
            arr_52 [i_8] = (((min((arr_21 [i_8] [i_7]), (arr_21 [i_7] [i_7]))) ? (((arr_21 [i_7] [i_8 + 2]) * (arr_31 [i_7] [i_7] [i_8 - 1]))) : ((((!(arr_21 [1] [i_8 - 1])))))));
            arr_53 [6] [8] [6] |= (((min((~235), (48 * 0))) >= ((((((arr_39 [1] [i_7] [i_8]) ? 1240112864 : (arr_21 [i_7] [i_7]))) | 883412729)))));
            var_23 = (min(((((min(var_12, (arr_37 [i_7] [i_8] [i_7] [i_8] [i_8])))) ? var_11 : var_14)), 993921092));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_24 ^= (~1048763112);
            arr_57 [5] [i_14] = (((arr_17 [i_7] [i_14]) ? var_4 : (((arr_23 [i_7]) ? (((((arr_56 [i_7]) >= var_8)))) : 18446744073709551615))));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
        {
            var_25 = ((((var_14 ? ((-127 ? (arr_33 [i_15]) : var_9)) : var_8)) < (arr_30 [i_7] [i_15])));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_62 [16] [i_15] = ((arr_54 [i_7] [i_15] [i_16]) < 663);

                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    var_26 *= 1;
                    var_27 += var_8;
                }
                arr_67 [i_7] [i_7] [i_7] = var_0;
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                arr_71 [i_7] [i_7] [i_15] [i_18] = (((!var_14) ? 0 : (((arr_35 [i_15] [i_7] [i_15] [i_7]) ? var_11 : (arr_58 [i_18])))));
                var_28 = (((var_10 != var_2) + 956157313));
                var_29 += (((arr_31 [i_7] [i_15] [i_18]) % (arr_31 [i_7] [i_7] [1])));
            }
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
        {
            arr_74 [16] = ((((min((arr_44 [i_7] [i_7] [i_19] [i_7] [i_19]), (arr_64 [i_7] [1] [i_19] [1])))) | ((2241496953847888800 ? ((min(-8927, var_2))) : ((-16646 ? var_2 : var_14))))));
            var_30 = ((((arr_54 [i_19] [i_19] [i_7]) * 5)) << ((((2641278746 ? (arr_54 [i_7] [i_7] [i_7]) : var_12)) - 21804)));
        }
        var_31 = (min(var_31, (((((8930 & (arr_39 [10] [i_7] [10]))) * var_7)))));
    }
    #pragma endscop
}
