/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((4 * (7 & 1))) << ((((min(var_3, var_6))) % -var_4))));
    var_21 += var_11;

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = ((-(max(119, (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_23 = (((((arr_0 [i_0]) || -var_3)) ? (min(((min(var_2, var_8))), ((var_19 ? (arr_0 [i_0]) : 0)))) : (~547350017625366248)));
        arr_3 [i_0] = (((max(2, 1259792535223131948)) - (((var_14 ? (arr_1 [i_0]) : var_4)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = var_14;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        var_24 += (((max((arr_12 [8] [i_1 - 1] [8]), ((min(var_1, var_5))))) == (max((-20315 * -119), (arr_12 [14] [6] [14])))));
                        arr_13 [i_0] = (max((-6154 | 60145), ((-108 ? 4044163295 : 1))));
                        var_25 = (max(var_25, (((((((((min((arr_7 [i_2 - 1]), 32)))) & 1462597415877758646))) / (arr_0 [4]))))));
                    }
                }
            }
            var_26 += ((var_18 <= (((((4 >> (27175 - 27152)))) ? ((0 ? 18446744073709551598 : var_14)) : (arr_1 [4])))));
            arr_14 [i_0] [i_0] = (((max((arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))) >= (~14)));

            /* vectorizable */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                var_27 = var_10;
                arr_19 [i_0] [3] [i_1] [i_0] = ((arr_1 [i_0]) ? 3435907049346254415 : (arr_1 [i_0]));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_28 = ((148802712 >= (arr_10 [i_0 + 1] [i_0 + 1])));
            var_29 += arr_20 [i_5];
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_30 += (~var_16);
                        var_31 = (((arr_28 [13]) + -331654951));
                        var_32 = (arr_20 [i_0]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_33 = (((arr_33 [i_10] [i_9] [i_9 - 2] [i_6] [i_0 - 1]) ? (arr_33 [i_0] [i_6] [i_9] [i_10] [i_9 - 3]) : (arr_20 [i_9 + 1])));
                        var_34 = var_7;
                        var_35 = (min(var_35, (var_6 - 13806)));
                        arr_35 [i_0] [i_6] [i_6] = (((arr_20 [i_0 + 1]) ? (arr_17 [i_0 - 2]) : 31));
                    }
                }
            }
            var_36 = ((0 ? var_15 : 282565910));
            arr_36 [i_0] [i_0] = 30174;
            var_37 = var_9;
        }
    }
    for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
    {
        var_38 = (min(var_38, 13853));
        var_39 = ((-var_6 > ((-32177 ? 20 : -32))));
        var_40 += 234;
        var_41 = (min(var_41, (((((((((var_17 ? var_0 : 25))) ? 3548111405 : (arr_8 [i_11 + 1] [i_11 - 1] [i_11 - 1])))) ? (arr_37 [i_11 - 1]) : (min((arr_23 [i_11]), 1929143044)))))));
    }
    var_42 += ((min(250803996, 18446744073709551599)) ^ var_1);

    /* vectorizable */
    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_43 = (0 ? var_8 : var_11);
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_50 [i_12] [i_12] [i_14] [i_15] = var_19;
                        var_44 = (min(var_44, (-8514001918912208065 <= -115)));
                    }
                }
            }
        }

        for (int i_16 = 2; i_16 < 15;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                arr_55 [i_12] [i_16] [i_12] = 9254736549441131615;
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        {
                            var_45 += arr_57 [i_19] [i_18] [i_18] [i_16 + 4] [i_12 - 2];
                            arr_62 [i_12] [i_16 + 2] [i_12] [i_18 - 1] [i_19] [i_19] [i_19] = var_15;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_69 [17] [17] [i_17] [i_17] [i_12] [3] [14] = (arr_43 [i_16] [i_16 + 2]);
                            var_46 = (20656 % var_0);
                        }
                    }
                }
                var_47 = (~1929143054);
                arr_70 [i_12] [i_12] = (arr_58 [18] [i_16] [i_17] [i_17] [10] [i_12 - 1]);
            }
            for (int i_22 = 1; i_22 < 18;i_22 += 1)
            {
                var_48 = var_2;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 18;i_24 += 1)
                    {
                        {
                            var_49 = (min(var_49, (((var_0 <= (arr_54 [i_16 + 2] [i_16 + 2] [i_22] [16]))))));
                            var_50 += -var_4;
                            arr_79 [i_16] [i_16] [i_12] [i_16] [i_16] [i_16] [i_16] = (var_18 && var_5);
                        }
                    }
                }
            }
            var_51 = (((arr_66 [i_12] [i_12 - 2] [i_16 - 1] [i_16 + 3] [i_16]) ? (arr_66 [i_12] [i_16] [i_16 - 1] [i_16] [i_16 + 3]) : (arr_66 [i_12] [i_16 + 3] [i_12 - 1] [i_16] [i_16 + 3])));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    {
                        arr_85 [i_26] [i_12] [i_12] [i_12] = (arr_57 [i_26] [2] [2] [8] [12]);
                        var_52 = 27;
                        arr_86 [i_12] = (arr_77 [i_12 - 1] [i_16 + 1]);
                    }
                }
            }
        }
        var_53 = (((arr_58 [i_12] [i_12 + 1] [i_12] [i_12] [i_12] [i_12 - 1]) ? (arr_60 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 1] [14] [i_12]) : var_2));
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 19;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 16;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 19;i_29 += 1)
                {
                    {
                        var_54 = (max(var_54, (((!(arr_93 [i_12 - 2] [i_12 - 2] [i_27] [i_27]))))));
                        arr_95 [i_12] [i_12] [i_12] [i_12] = 225;
                    }
                }
            }
        }
    }
    for (int i_30 = 2; i_30 < 18;i_30 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_31 = 3; i_31 < 16;i_31 += 1)
        {
            for (int i_32 = 3; i_32 < 17;i_32 += 1)
            {
                {
                    var_55 = (max(var_55, (((~(arr_97 [i_30]))))));
                    arr_104 [i_31] = (((arr_44 [i_30]) + (3336 && 14089)));
                    arr_105 [i_30] [i_31] [i_32] [14] = -5;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_33 = 3; i_33 < 18;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 19;i_34 += 1)
            {
                {
                    arr_111 [i_30] [i_33 - 3] [i_34] [i_33] = ((((-7431439785197864245 && (((var_6 / (arr_49 [i_30] [i_30] [i_33] [i_34] [i_34])))))) ? (~-66) : (var_9 - 4278057500)));
                    var_56 = (max(var_17, (max((arr_40 [i_33 - 3]), var_11))));
                    arr_112 [i_30] [9] [i_33] [i_34] = ((!((max(3152699760, -14)))));
                }
            }
        }
    }
    #pragma endscop
}
