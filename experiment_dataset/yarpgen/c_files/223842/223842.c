/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!var_3);
        var_14 = 49929;
        arr_3 [i_0] = (max(9346139366383413685, 1));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((8500991862219343684 & (arr_5 [i_0] [i_0] [i_1])));
                    arr_8 [i_0] [i_1 + 1] [i_1] = (((max((min(var_9, (arr_7 [i_0] [i_1] [i_2 - 3]))), var_3))) ? (min(18446744073709551596, (arr_0 [i_1 - 1]))) : (((arr_5 [i_0] [i_1 - 1] [i_1]) ? (arr_5 [i_0] [i_1 + 2] [i_1]) : 20)));
                    var_16 += var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_17 += (((arr_11 [i_3]) ? var_0 : 19));

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_18 = 18446744073709551596;

            for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    var_19 = ((-var_3 <= ((var_10 ? var_3 : (arr_22 [i_6] [13] [1] [i_3])))));
                    var_20 = (!var_0);
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                {
                    var_21 += (!var_0);
                    arr_25 [i_3] [1] [i_4 + 1] [i_3] = (((arr_10 [i_4 + 1]) ? (arr_14 [i_3] [i_3] [i_7 + 1]) : (var_11 == var_9)));
                    var_22 += var_0;

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_23 ^= var_9;
                        arr_28 [12] [i_5 + 1] [i_7] [i_8] [i_3] = 20;
                        arr_29 [i_3] [i_3] [i_3] [16] [i_8] [i_3] = ((((((arr_13 [i_7] [i_5] [i_4]) + -93))) ? (arr_27 [i_4] [i_3] [i_5 - 1] [7] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : ((92 ? var_6 : 19))));
                        var_24 = (max(var_24, var_7));
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_25 = (arr_18 [i_3] [1]);
                        arr_32 [i_3] [i_3] = (arr_19 [i_4 + 1] [6]);
                        var_26 = var_2;
                        var_27 = ((var_7 ^ (arr_22 [i_5 - 1] [i_4] [i_9 + 2] [1])));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = var_10;
                        arr_35 [i_3] [i_4 + 1] [i_3] [i_7] [i_10] [i_10] = (arr_15 [i_3]);
                        arr_36 [i_3] [i_5] [i_10] [i_7 + 1] [i_3] [10] [i_5] &= (arr_31 [i_7 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_4] [i_3]);
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_29 = (arr_23 [i_3] [i_4] [i_3] [i_12]);
                            var_30 ^= (((arr_33 [i_3] [i_12]) < 15957));
                            arr_41 [i_3] [i_4] [i_3] = (0 * 0);
                        }
                    }
                }
            }
            for (int i_13 = 3; i_13 < 16;i_13 += 1) /* same iter space */
            {
                arr_44 [i_3] [i_4 - 1] [i_4 + 1] [i_13] = -116;
                arr_45 [i_3] [i_4] [i_3] [i_3] = 92;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_51 [i_4] [i_3] [i_4] [i_15] = (arr_40 [i_3] [5] [i_3]);
                            var_31 = 0;
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_32 = (arr_53 [i_3] [i_16] [i_3]);
            var_33 -= (((arr_48 [i_3] [0] [i_16]) == (arr_12 [i_16])));
            arr_54 [i_3] [i_3] [i_16] = -20;
            var_34 += (((arr_12 [i_16]) && var_7));
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
        {
            var_35 = ((-50 != (arr_17 [i_3] [i_17] [i_17])));
            var_36 *= var_3;
            var_37 -= (arr_37 [10] [i_3] [i_17] [i_17]);
            var_38 = (!(arr_16 [i_3] [i_17] [i_17] [i_17]));
        }
        for (int i_18 = 1; i_18 < 16;i_18 += 1)
        {
            arr_60 [i_3] [i_3] [i_3] = (((arr_55 [i_3] [i_3] [i_18]) ? (arr_55 [i_3] [i_3] [i_18 - 1]) : (arr_27 [i_3] [i_3] [i_18 + 2] [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1])));
            arr_61 [i_3] [i_18 + 2] [i_18 + 1] = ((var_5 ? (arr_17 [i_3] [i_18] [i_18 + 2]) : (arr_23 [i_3] [i_3] [i_3] [i_18])));
        }
        var_39 ^= 76;
        var_40 = ((var_6 ? 115 : var_6));
    }
    for (int i_19 = 3; i_19 < 15;i_19 += 1)
    {
        var_41 -= min(((max(180, (-2147483647 - 1)))), ((((max(-2030958399, (arr_50 [i_19 - 2] [i_19 - 2] [11] [i_19] [i_19] [i_19] [i_19])))) ? (min((arr_16 [i_19] [i_19] [i_19] [i_19]), 18446744073709551615)) : (((126 ? 0 : 1))))));
        var_42 = var_6;
    }
    for (int i_20 = 1; i_20 < 16;i_20 += 1)
    {
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 19;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 19;i_23 += 1)
                {
                    {
                        var_43 += ((1064647179 ? 127 : ((+((min((arr_72 [i_20] [i_20] [i_23]), (-127 - 1))))))));
                        arr_76 [i_21] [i_20] [i_22] [i_23] [2] = (1 < var_2);
                    }
                }
            }
        }
        var_44 = (max((min(((((arr_65 [i_20] [i_20]) ? (arr_75 [i_20 + 3] [i_20 + 3] [i_20 + 2] [i_20]) : var_0))), (-30032 * 20))), ((max((arr_68 [i_20 + 1] [i_20 - 1]), (arr_68 [i_20 + 1] [i_20 - 1]))))));
        var_45 = ((((~(arr_74 [i_20 - 1] [i_20] [18]))) & (max((arr_74 [i_20 + 3] [i_20] [i_20 + 4]), var_3))));
        /* LoopNest 3 */
        for (int i_24 = 2; i_24 < 18;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        arr_87 [i_20] [10] [i_25] [i_26] = (((arr_68 [i_25] [i_25]) * (min((max(17747, 20)), (min((arr_68 [i_25] [i_26]), (arr_83 [i_20] [i_24] [i_25] [i_26])))))));
                        arr_88 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1] = (min((max((arr_80 [i_26] [i_24]), (~var_9))), 18446744073709551596));
                        var_46 = (min(((((var_2 - 3832121535) ? 30026 : 3846))), 5073178886213849482));
                    }
                }
            }
        }
        var_47 = (min(var_47, (((arr_86 [i_20] [i_20] [i_20] [i_20 - 1] [i_20] [i_20 + 2]) ? (max((max(var_12, var_9)), (arr_75 [i_20 + 4] [i_20] [i_20 + 4] [i_20 + 4]))) : 255))));
    }
    var_48 = (max((min((~var_12), (-1811646143623570141 * var_9))), (((((var_2 ? var_3 : 2147483647))) ^ (min(1040884126, var_9))))));
    #pragma endscop
}
