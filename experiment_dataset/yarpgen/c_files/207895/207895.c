/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [6] = ((1 / var_11) ? var_7 : ((~((37906 ? var_2 : var_9)))));
            arr_6 [i_0] [i_0] [i_1] &= 7791;
            var_13 = 32766;
            var_14 = (min(27623, ((((var_2 ? 0 : var_0)) * var_3))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_0] |= ((var_9 ? ((((!-19891) * (!105)))) : ((37906 ? ((var_10 ? 519956513 : var_5)) : (var_3 ^ var_3)))));
            arr_10 [3] = ((!((((!var_2) ? var_3 : ((var_9 ? (arr_3 [i_0] [i_2] [i_0 + 1]) : (arr_1 [i_0 - 2]))))))));
            var_15 += var_9;
            var_16 = var_4;
        }

        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_17 = ((var_1 + var_6) ? (arr_15 [i_0] [i_4]) : (((((-117 ? var_4 : 2147483647))) ? var_3 : var_9)));
                        arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (var_11 * ((min(((var_4 != (arr_14 [i_0] [i_0] [i_4]))), var_5))));
                    }
                }
            }
            arr_21 [i_3] [i_3 - 2] [i_3] = ((arr_0 [i_3]) ? ((var_3 ? 6 : (arr_13 [i_0 - 3]))) : (((((37914 ? var_11 : var_2))))));
            var_18 = ((((-14321 ? ((var_0 / (arr_19 [1] [i_3] [i_0] [1]))) : (arr_14 [i_3 - 2] [i_0 - 3] [i_0 - 2]))) == ((var_9 ? var_9 : (min((arr_3 [i_0] [i_3] [i_0]), var_2))))));
            arr_22 [i_0] = (max(((var_4 + (arr_17 [i_0 - 2] [i_0 - 3]))), -2));
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_30 [i_6] = ((min(7454, 694244653)) & ((var_1 ? (arr_17 [i_6] [i_6]) : 37914)));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_19 *= (((!var_5) ? (((var_3 != var_4) ? 208 : (((((arr_1 [i_0]) + 9223372036854775807)) << (((arr_0 [i_0]) - 15652)))))) : (((1 ? var_9 : var_6)))));
                            var_20 |= (((arr_13 [7]) < (((min(var_4, (var_4 == var_1)))))));
                            var_21 = (((arr_26 [i_0] [i_0] [i_0]) >> (((((var_11 ^ 305908797) ? (arr_18 [i_0 - 3] [9] [i_0] [i_0]) : ((var_5 ? var_7 : 1294734225)))) - 860705303))));
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_6] = ((!((((((var_7 ? var_7 : var_6))) ? ((var_4 << (var_10 - 60324))) : (arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 2]))))));
                    }
                }
            }
            var_22 = (((((arr_2 [i_0]) >= (var_7 % var_0))) ? var_0 : var_8));
            arr_34 [8] [i_6] [7] = ((var_4 ? ((var_0 % (arr_23 [i_0 - 2] [i_0] [i_6 + 1]))) : ((((-305908821 ? 199 : var_11))))));
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_23 = 18;
        var_24 ^= (((((arr_35 [i_10] [i_10]) ? var_11 : -4473781770397697213)) / var_4));
        arr_38 [i_10] [i_10] &= ((-(arr_36 [i_10] [i_10])));
    }
    var_25 = (var_7 / 1073741312);
    #pragma endscop
}
