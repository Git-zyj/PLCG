/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [2] [i_0] = (1 ? 9223372036854775807 : 22725);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_10 = (max(var_10, (min(11429, 1180342362))));
                        var_11 = (min(var_11, (((((arr_5 [i_1 - 1] [i_2 - 2]) ? (arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 - 1]) : var_1))))));
                        var_12 = ((!(((-(arr_9 [i_0] [i_1] [i_2 - 1] [i_3]))))));
                        var_13 = (max(var_13, (((178 ? 9194975579477412629 : -8732379151533105987)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_14 = (((((var_6 ? (arr_13 [i_4 - 1]) : (arr_8 [i_4 - 1])))) ? (((!(arr_8 [i_4 - 1])))) : ((~(arr_13 [i_4 + 1])))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_15 &= (-97 ? ((((!(arr_13 [i_4 + 1]))))) : (((((var_5 ? var_8 : var_8))) ? ((((arr_7 [i_5] [0] [i_4]) ? (arr_14 [7] [7]) : var_1))) : (arr_15 [i_4 - 1] [i_4 - 1]))));
            var_16 = (min(var_16, (((((((min(var_2, var_6))) ? (arr_5 [i_4 + 1] [i_4 - 1]) : var_9)) ^ (((~(arr_14 [i_4] [i_5])))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_24 [9] [i_6] [i_7] [9] = ((var_1 ? (arr_19 [i_4 + 1]) : (arr_19 [i_4 + 1])));

                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_17 &= var_6;
                    var_18 = ((-var_1 ? (((arr_28 [i_8 + 1] [i_7] [i_7] [i_6] [i_4 - 1]) ? var_8 : var_1)) : ((var_4 ? (arr_19 [i_4]) : (arr_25 [i_6])))));
                    arr_29 [i_4] [1] [i_4] [1] [i_4] = (arr_17 [6] [i_7] [i_8]);
                    var_19 = var_5;
                    var_20 = (((var_1 >> var_9) ? var_5 : (arr_7 [i_7] [i_6] [i_4 + 1])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_21 = (max(var_21, (((-var_7 ? var_8 : (~var_4))))));
                    var_22 = (((((-(arr_21 [i_4 + 1] [i_6] [1])))) ? var_4 : (arr_0 [i_4 + 1])));
                    arr_33 [i_6] [i_9] [i_7] [i_9] = (!var_7);
                    arr_34 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [9] = (((((arr_9 [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1]) + 9223372036854775807)) << (var_2 - 3702697187)));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_23 = ((var_1 ? var_6 : var_0));
                    var_24 = (max(var_24, (~var_2)));
                    var_25 = ((+((var_6 ? (arr_37 [i_4] [i_6] [i_7] [i_10]) : (arr_19 [i_7])))));
                    var_26 = ((-(((arr_25 [i_4]) ? (arr_28 [i_4] [i_6] [11] [i_10] [i_6]) : var_8))));
                    arr_38 [i_4] [i_4 - 1] [i_4] [i_4] = ((var_2 > (arr_11 [i_4 + 1] [i_6] [14] [i_10] [7] [i_7])));
                }
                var_27 = ((!(~var_1)));
            }
            arr_39 [i_4] [i_6] = ((~(((arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_6] [i_6]) ^ var_0))));
            var_28 = (var_7 > var_0);
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_29 &= (((82 ? 17 : -1)));
            var_30 = ((min(var_8, var_9)));
            arr_42 [i_11] = min((((-((var_0 ? (arr_8 [i_4 + 1]) : (arr_40 [i_11] [i_11] [i_4])))))), ((min(var_6, var_9))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_31 += ((3814844122 ? 1051991062785235932 : 4294967292));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_32 = (-1079633966 * (128 <= 1));
                        arr_50 [i_4] [i_12] [i_12] [i_13] [i_14] = (((((((((arr_20 [i_4 + 1] [i_4 + 1] [4] [i_14]) ? var_0 : var_1))) ? (((var_0 ? var_3 : var_1))) : (min((arr_43 [i_4]), var_4))))) && ((min((arr_37 [i_4] [i_13 + 2] [i_13] [7]), ((~(arr_15 [i_4 - 1] [i_14]))))))));
                        arr_51 [1] [7] [i_12] [i_13] [i_14] [i_14] = ((-(((!(arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                        var_33 = (min(var_8, (!var_4)));
                    }
                }
            }
            arr_52 [2] [i_12] = ((((((var_1 ? var_0 : var_3)))) ? (((+((max((arr_30 [i_4] [i_4 - 1] [i_4] [1] [7] [i_12]), (arr_13 [i_4]))))))) : (((min((arr_27 [i_4 - 1]), (arr_18 [i_4 - 1] [i_4 - 1]))) / ((min((arr_45 [i_12] [i_12] [i_12]), (arr_26 [i_4] [i_12]))))))));
        }
    }
    var_34 = (((((-7798859266038180136 ? 0 : 3))) ? (((!var_3) ? (var_5 > var_2) : ((var_2 ? var_9 : var_0)))) : (max(var_7, var_0))));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_35 &= ((-(((((-9034341161797882420 ? 1583 : 1))) ? (!var_8) : ((var_8 ? var_6 : var_2))))));
                    arr_61 [i_15] [11] [i_16] [i_17] = (((((-(!var_1)))) ? var_0 : (((~var_5) ? (var_3 / var_8) : (((arr_5 [i_15] [i_16]) | (arr_56 [i_17])))))));
                }
            }
        }
    }
    #pragma endscop
}
