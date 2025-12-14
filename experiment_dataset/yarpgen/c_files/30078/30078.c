/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((41 != ((max(66, var_1)))))) == var_3));
    var_19 = (1 != 19);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) / 1));
        arr_3 [i_0] = (((66 / 1273547987) ? (((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))) : 45));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_20 ^= ((~(arr_10 [i_1] [i_2 - 1] [i_3] [20])));
                        var_21 ^= (((arr_6 [i_1] [i_1] [i_3]) / (((arr_11 [i_1 + 1] [16] [i_2 + 2] [i_2 - 3]) ? (arr_11 [i_1 - 2] [24] [i_2 + 2] [i_2 + 2]) : 49412))));
                    }
                }
            }
            arr_12 [1] [i_2] [i_2] = (arr_7 [i_2 - 2]);
            arr_13 [i_1 - 1] [i_2] [i_2] = (arr_6 [i_1] [i_1 - 3] [i_2 + 2]);
            var_22 = (arr_4 [i_2]);

            /* vectorizable */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_16 [i_1] [i_1] [i_2 + 2] [i_2] = ((arr_8 [i_1 - 3] [i_2] [i_2] [i_2]) >> (215 - 211));
                arr_17 [i_1] [i_2] [8] [11] = ((((225 | (arr_8 [i_2] [i_2] [i_2] [i_2]))) != 1273547987));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_23 += (max(((-1592236366 ? 11 : 1405410042)), (arr_4 [i_1 + 2])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_28 [i_1] [20] [i_1] [i_1] [i_1] [i_2] [i_1] = (arr_15 [i_1]);
                            var_24 = (min(var_24, ((((1592236365 && -1405410034) || ((max((((arr_26 [i_6] [2] [i_6] [i_6] [i_6]) ? (arr_8 [i_1 - 1] [i_6] [i_7] [i_8]) : (arr_7 [i_2]))), (arr_6 [i_1 - 3] [i_2 + 2] [i_2 - 1])))))))));
                            arr_29 [i_1 + 2] [i_2 - 3] [i_6] [i_7] [i_2] = 33;
                        }
                    }
                }
                var_25 = 75;
                arr_30 [i_2] [i_6] = (arr_9 [i_1 - 2] [i_2] [i_2]);
            }
        }
        for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                arr_38 [i_9] [i_9] = (((((~(arr_25 [i_1] [i_1 - 3] [i_1] [i_9] [i_1]))) + 2147483647)) << (((((arr_20 [i_9] [i_9] [i_9 + 2] [i_9] [i_9 - 1] [i_9]) + -29)) - 70)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_44 [i_9] [i_9] [i_9] [i_11] [i_12] = (arr_14 [i_12] [i_9] [i_10] [i_9]);
                            var_26 = ((arr_34 [i_12 + 1]) | -1273547988);
                            var_27 *= ((-(arr_40 [i_12])));
                        }
                    }
                }
                arr_45 [21] [21] [i_9] [21] = (arr_41 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 - 1]);
                arr_46 [23] [i_9] [i_9] [i_1 + 3] = (arr_34 [i_1 + 2]);
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 24;i_13 += 1) /* same iter space */
            {
                var_28 = 18;
                var_29 = ((((1405410031 > (arr_40 [i_13]))) || (arr_35 [i_1 + 3] [i_9 + 2] [i_9 + 1] [i_13 + 1])));
                var_30 = (((-1424147609 / 1592236359) > -1273547995));

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_31 = (3991 | 1);
                    arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] [1] = ((-(arr_33 [i_9])));
                    var_32 = -1405410043;
                }
            }
            for (int i_15 = 1; i_15 < 24;i_15 += 1) /* same iter space */
            {
                var_33 = (arr_20 [i_1] [i_9] [i_15] [15] [i_15] [i_1]);
                var_34 = -85;
                var_35 = ((~(arr_49 [16] [i_9] [16])));
                arr_55 [i_9] [i_9 - 3] [i_15] = (((!(arr_18 [4] [4] [i_9]))));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_36 *= ((+((((arr_8 [i_1] [i_1] [i_9 + 1] [i_16]) != (arr_11 [i_1] [1] [1] [i_1]))))));
                arr_58 [i_1 + 2] [i_9] = -1841206578;
                var_37 = (max(var_37, (((~((((-49 ? (arr_33 [14]) : 272788490)))))))));
            }
            var_38 = (min((((max(113, (arr_18 [i_1] [i_9 - 3] [i_9]))))), ((~(1592236365 ^ 9661)))));
        }
        /* vectorizable */
        for (int i_17 = 3; i_17 < 23;i_17 += 1) /* same iter space */
        {
            arr_61 [i_1 + 3] [i_17] [i_17] = 27;
            arr_62 [i_1] = (((arr_48 [i_1 - 1] [0] [i_1 - 1]) - (arr_33 [16])));
        }

        /* vectorizable */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_39 = ((((((arr_63 [i_1 - 1] [i_1 - 1]) == (arr_25 [i_1] [i_1] [1] [i_18] [i_1])))) % (((64844 && (arr_20 [i_1 + 4] [i_18] [13] [7] [i_1 + 4] [i_1]))))));
            var_40 = 18;
            var_41 = (max(var_41, 0));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_42 = (max(var_42, (~96)));
                            arr_74 [i_1 + 1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3] [i_1] = 2958;
                        }
                    }
                }
            }
            arr_75 [i_1] = (((arr_64 [i_1 + 2]) + 12617));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            arr_79 [i_1] = ((((57465 ? (arr_50 [i_1] [i_1] [10]) : 13)) % 147));
            var_43 = (min(var_43, ((((64754 << 1) <= 112)))));
            var_44 = (((((arr_76 [i_1 - 1]) == (arr_67 [i_22] [i_1 - 2])))) == 28723);
            arr_80 [i_1] = -46;
        }
        arr_81 [i_1 + 2] = (arr_8 [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_23 = 3; i_23 < 21;i_23 += 1) /* same iter space */
    {
        arr_84 [i_23] = (((arr_77 [i_23 - 3] [i_23 + 1] [i_23 - 1]) ^ -1592236360));
        arr_85 [i_23] = (arr_11 [i_23] [i_23] [i_23] [9]);
    }
    #pragma endscop
}
