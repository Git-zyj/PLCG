/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(((255 << (var_11 >= 1886563054343045661))), (arr_0 [i_0])));
                arr_5 [i_0] = ((+((1 ? ((1 ? (arr_3 [i_0] [i_0]) : 1)) : -859051656))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_17 = (arr_8 [i_2 + 1] [i_3]);
            arr_12 [i_2] [i_3] [i_2] = (+-1);
        }
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            arr_17 [i_2] = (max(((-24 ? (((var_2 ? 31 : 1))) : ((-(arr_9 [i_2] [1]))))), (((-((var_4 ? var_8 : (arr_0 [i_2]))))))));
            arr_18 [i_2] = (arr_0 [i_2]);
            var_18 = 859051656;

            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
            {
                arr_22 [i_2 - 1] [i_5] [i_4] [i_5] |= (arr_8 [i_2] [i_2]);
                arr_23 [i_2 - 1] [i_2] [i_2] = 165;
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_19 = arr_7 [i_2];
                var_20 = ((!(((((max((arr_6 [i_6]), var_15))) ? (245 | -19334) : ((-(arr_6 [i_4]))))))));
                arr_26 [13] [i_2] [i_2] [i_2] = var_7;

                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_2] [i_2] = (((arr_1 [i_2] [i_6]) ? (arr_4 [i_2 + 2]) : (arr_21 [i_2 + 2] [i_2 + 2])));
                    var_21 |= (arr_13 [i_6] [i_6]);
                    var_22 = (max(var_22, 3));
                    arr_30 [i_2] [i_6] [i_4 - 1] [i_2] = (min((((arr_13 [i_2] [i_2]) ? var_2 : (arr_13 [i_2] [i_2]))), (var_3 / 23)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_23 = ((-var_4 ? (var_4 - var_7) : -var_8));
                    var_24 = (146 == var_11);
                    arr_33 [i_2 + 2] [i_2 + 2] [i_2] [i_6] [i_8] = (((222910181119917495 > var_12) ? ((-(arr_27 [i_2] [i_4] [i_6] [i_8]))) : var_9));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_25 = (max((((arr_28 [i_2] [i_2 + 1] [i_2] [i_9]) ? (arr_32 [i_2] [i_2] [i_4 + 1] [i_4 - 4] [i_4 - 1] [i_4 - 4]) : (arr_28 [i_2] [i_2 + 1] [i_9] [i_2]))), (((1 ? 245 : 120)))));

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_26 = var_4;
                        arr_38 [i_2 - 1] [i_10] [i_2 - 1] [i_10] [i_2] [i_10] = (((((~(min(var_0, var_1))))) && 37705));
                        arr_39 [i_2] [i_4 + 1] [i_6] [i_6] [i_10] [i_10] [i_2] = (arr_6 [i_2]);
                        var_27 = ((~(min((arr_28 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_2 - 1]), (arr_11 [i_2] [i_10] [9])))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_28 = -2187070632686940924;
                        arr_43 [i_2 + 2] [i_2] [i_6] [i_9] [i_11] = ((~((min((arr_37 [i_2] [i_2] [i_6] [i_2 + 1]), (arr_37 [i_2 - 1] [i_9] [i_2 - 1] [i_2 + 2]))))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_29 = var_7;
                        arr_46 [i_2 - 1] [i_4] [i_2] [i_9] [i_2] = ((-((((!(arr_40 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [3] [i_2]))) ? ((var_3 ? var_10 : (arr_2 [i_2] [i_9] [i_2]))) : ((min(4220999782, var_6)))))));
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        arr_49 [i_2] [i_9] [i_13] = var_9;
                        arr_50 [i_13] [i_2] [i_6] [i_6] [i_2] [i_2] = (arr_31 [i_2] [i_6] [2]);
                    }
                    arr_51 [i_2] = ((-((((max(90, 255))) * (arr_7 [i_2])))));
                }
            }
        }
        var_30 -= (max((min((arr_24 [i_2] [i_2 + 2] [i_2]), (arr_3 [2] [2]))), (min((max(2187070632686940924, var_9)), (((var_0 ? (arr_3 [i_2] [0]) : 144)))))));
        var_31 = (((-3 * 255) - 1));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_32 -= ((~((1472 ? var_1 : (var_5 & 12)))));
        var_33 = (((255 ? var_15 : 48)));
        arr_54 [i_14] [i_14] = min((arr_45 [1] [4]), (arr_45 [16] [i_14]));
        var_34 = (min(var_34, (arr_7 [2])));
        arr_55 [i_14] = 1472;
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                {

                    for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_35 = (((arr_15 [i_15]) ^ -17321));
                        arr_64 [i_15] [i_15] [i_17] [i_18] = var_1;
                        var_36 = (min(var_36, var_2));
                    }
                    for (int i_19 = 1; i_19 < 15;i_19 += 1) /* same iter space */
                    {
                        arr_68 [i_15] [i_16] [i_17 + 3] [i_15] = (((~-859051656) - ((~(arr_41 [i_15] [i_15] [i_17] [i_17] [17])))));
                        var_37 = 249;
                        arr_69 [i_15] [i_15] [i_15] [i_15] = -var_15;
                    }
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        arr_73 [i_15] [i_16] [i_17] [i_15] = 1;
                        var_38 = ((249 - (524287 * 1)));
                        var_39 = var_8;
                    }
                    var_40 = (((arr_56 [i_15 + 2]) ? (arr_72 [i_15] [i_16] [i_16] [i_15]) : (-31741 && 251)));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 16;i_22 += 1)
                        {
                            {
                                var_41 -= (((((arr_72 [i_15] [i_15] [i_15] [i_16]) ? (arr_21 [i_22] [i_16]) : var_0)) << (((arr_63 [7] [i_16] [i_17] [5] [i_22 - 2]) - 562525622))));
                                var_42 = (arr_62 [i_22 - 2] [i_22] [i_22 - 2] [i_22] [i_22] [i_15]);
                                arr_80 [i_15 + 1] [i_16] [i_17] [i_15] [i_22] = (((arr_40 [i_15 + 1] [i_16] [i_15 + 1] [i_21] [i_22 + 1] [i_22] [i_22]) ? (arr_37 [i_15 - 1] [i_22] [i_22 - 2] [i_22 - 1]) : (var_10 && var_2)));
                            }
                        }
                    }
                    var_43 = var_1;
                }
            }
        }
        var_44 = (((((var_12 ? (arr_16 [i_15]) : 117))) >= (arr_15 [i_15])));
        var_45 = (arr_63 [i_15] [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 1]);
        arr_81 [i_15] [i_15] = -var_4;
    }
    /* vectorizable */
    for (int i_23 = 3; i_23 < 24;i_23 += 1)
    {
        var_46 = ((~(arr_82 [i_23 - 1] [i_23])));
        var_47 = (((var_11 | var_1) >> (((arr_82 [i_23 - 1] [0]) + 1229198270))));
    }
    var_48 = (max(var_48, (((!57534) << (((~-5935463521952955703) - 5935463521952955698))))));
    var_49 = (((~var_0) ? (min((((var_7 >> (var_15 + 141)))), ((var_2 ? 0 : -5935463521952955694)))) : var_8));
    #pragma endscop
}
