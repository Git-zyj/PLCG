/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
        var_12 += ((var_1 ? (((236 & 1) ? ((1792 ? 104 : (arr_2 [12]))) : (arr_1 [1]))) : (~var_8)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = var_2;

            for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
            {
                var_14 = (min((((-((-(arr_2 [i_0])))))), ((max(139, var_10)))));
                var_15 *= (((((79 ? var_0 : 4))) ? (((arr_2 [i_1]) + (arr_5 [i_0] [i_1]))) : ((max(14154, var_4)))));
                arr_9 [i_0] [i_0] [i_1] [i_2] = (((arr_6 [i_0] [i_2 - 3] [i_0]) ? var_4 : ((((var_5 ? var_5 : var_6))))));
            }
            for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_1] [i_1] = 65525;
                var_16 = (arr_4 [16] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_17 [9] [i_0] [i_1] [i_0] [i_4] [18] = (min((((((-99778441 ? 1 : 1))) ? (((arr_14 [i_0] [16] [i_4] [i_5 + 2]) & var_2)) : (((max(65535, var_4)))))), (12 == var_9)));
                            arr_18 [i_0] [i_0] [i_0] [1] [1] = (max((((arr_6 [15] [i_4] [i_0]) ? var_5 : -9974)), (((arr_15 [i_0]) ? (arr_15 [i_0]) : (arr_15 [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_17 += (arr_25 [i_0] [i_0] [2]);
                            arr_26 [i_0] [i_0] [10] [i_6] [i_0] = var_10;
                            var_18 -= 118;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_29 [i_0] [i_1] [2] [i_8] = var_7;
                arr_30 [i_0] = (max(var_7, (((var_4 ^ var_10) ? var_2 : (!24956)))));
                var_19 = ((-(~var_5)));
                var_20 -= -24960;
                arr_31 [i_0] [i_1] [i_0] [i_0] = (!(arr_14 [i_0] [i_0] [i_0] [i_8]));
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                var_21 = 131;

                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_22 = -24972;
                        arr_40 [6] [i_9] [i_10] [i_1] &= (((((((min(1935954654, 149))) ? (max(var_10, var_9)) : var_2))) ? var_0 : ((min(118, (!255))))));
                        var_23 = (min(var_23, (min((((654758600 ? (arr_39 [i_1] [i_1] [i_9]) : (arr_39 [i_1] [i_9] [1])))), var_7))));
                        var_24 = var_2;
                        var_25 = (min(var_25, (arr_36 [1] [1] [i_9] [i_10] [i_11])));
                    }
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        var_26 += (var_1 > -3234363222701795706);
                        var_27 += ((((min(1, var_1))) >> (22 % 223)));
                    }
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        var_28 = (((((~(arr_28 [i_0] [i_10] [i_13 + 1])))) ? var_10 : (((var_2 != (arr_28 [i_0] [i_0] [12]))))));
                        var_29 -= -24958;
                        var_30 = 151;
                        var_31 = (min(var_31, (((+(((arr_33 [i_0] [i_0] [21] [i_13 - 2]) >> ((var_7 ? (arr_33 [i_13] [i_10] [i_1] [i_0]) : var_1)))))))));
                    }
                    var_32 = arr_39 [i_0] [4] [i_9];
                    arr_47 [i_0] [i_0] [i_10] = var_1;
                    var_33 = (max(((-24976 ? (arr_10 [i_1] [i_0]) : (arr_10 [i_0] [i_1]))), ((-91 ? 118 : (arr_10 [i_1] [i_1])))));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    var_34 -= var_8;
                    var_35 = (min(var_35, var_3));
                    arr_50 [i_0] = (((((var_4 ? (arr_6 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_9] [i_0])))) ? (((arr_6 [i_0] [i_1] [i_0]) ? (arr_1 [i_0]) : (arr_20 [i_0] [i_1] [i_9]))) : (((!(arr_20 [i_0] [i_1] [i_0]))))));
                    arr_51 [i_0] [i_0] [i_9] [i_14] = var_10;
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_36 = min((arr_11 [i_0] [14]), (min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_1] [i_9] [i_15] [i_9]))));
                    arr_54 [20] [i_0] [1] [1] [i_1] = (((arr_5 [i_0] [i_0]) ? ((max(((-81 ? 5 : var_0)), var_10))) : (max(var_5, (arr_19 [i_0] [i_1] [i_1] [i_9] [i_9])))));
                    var_37 = (((arr_37 [i_0] [i_15]) ? ((229 ? (22 * var_2) : -654758598)) : (((-36311 ? (arr_37 [i_0] [i_1]) : -var_4)))));
                    arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    arr_58 [9] [9] [i_9] [i_0] = ((((min(24964, 1))) & ((var_10 ? ((-1 ? 112 : (arr_0 [19] [i_0]))) : (((!(arr_20 [i_0] [i_9] [i_9]))))))));
                    var_38 = ((((((arr_44 [i_0] [i_0] [4] [i_0] [i_16]) ? (arr_48 [i_0] [i_0] [18] [i_0] [i_16]) : ((((-6 + 2147483647) >> (var_9 - 1562082728413388016))))))) ? 18446744073709551585 : -6));
                }
            }
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_39 *= -var_10;

                        for (int i_20 = 1; i_20 < 19;i_20 += 1)
                        {
                            var_40 = (max(var_40, var_1));
                            var_41 = (((((-(arr_37 [i_0] [13])))) ? ((~(arr_45 [i_18] [i_18] [i_18] [17] [i_20 + 1]))) : (!536854528)));
                        }
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            var_42 = ((24955 ? (arr_20 [1] [i_19] [i_18]) : var_3));
                            var_43 = (((((arr_28 [i_0] [i_0] [i_18]) ? 13053 : var_7)) ^ (arr_42 [i_0] [i_17] [i_18] [i_17])));
                            var_44 -= 4685399713061518479;
                        }
                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            arr_76 [i_0] [i_0] [i_18] [i_19] [i_22] [19] = var_6;
                            arr_77 [i_0] [i_17] = (5 / -104);
                        }
                    }
                }
            }
            var_45 = (!var_3);
        }
    }
    for (int i_23 = 0; i_23 < 23;i_23 += 1)
    {
        var_46 = var_6;
        arr_80 [i_23] [i_23] = (max((max((!var_7), (max(1423576538, (arr_78 [i_23] [i_23]))))), (-11 <= 21473)));
        arr_81 [i_23] = 230;
        var_47 *= (arr_78 [1] [i_23]);
        var_48 = (max(var_48, 48));
    }
    #pragma endscop
}
