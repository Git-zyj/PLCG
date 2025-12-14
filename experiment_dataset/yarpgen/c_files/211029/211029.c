/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = ((((var_3 ? ((-(-127 - 1))) : (arr_4 [5] [5] [i_1])))) ? ((((var_10 ? 8229873169189685826 : (arr_1 [i_0] [i_1]))) / (((min(-126, var_8)))))) : ((((((arr_1 [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1])))))));
            var_16 = (((((-125 ? -125 : ((39642 / (arr_2 [21])))))) ? (((1 / ((min(var_1, (arr_5 [i_0]))))))) : (((arr_5 [i_1]) * ((124 / (-9223372036854775807 - 1)))))));
            arr_6 [i_1] = var_1;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_17 = var_3;
            arr_11 [i_0] = ((~(((((1 ? (arr_5 [i_2]) : var_9))) ? var_7 : (arr_4 [i_0] [i_0] [i_0])))));
            arr_12 [i_2] [i_0] = ((-125 >= ((-((var_5 ? var_13 : var_10))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_17 [6] [i_0] = (((arr_3 [i_0]) ? (((~(arr_8 [i_0])))) : (((arr_4 [i_0] [i_0] [i_3]) * var_11))));
            var_18 = (min(var_18, ((((-124 ? 127 : 2634648479))))));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            var_19 = (((-(arr_18 [i_4 + 1] [i_4 + 2] [i_4 - 1]))));
            var_20 = ((~(arr_18 [i_4 + 1] [i_4 + 2] [i_4 - 1])));
        }
        arr_22 [i_0] = 232;
        arr_23 [i_0] |= (arr_1 [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_28 [i_5] [i_5] = ((((((arr_24 [i_5] [i_5]) - ((min(var_8, var_6)))))) ? -125 : ((((-32 ? var_12 : var_11))))));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_21 *= (((((!(arr_24 [21] [i_6])))) >= (!var_4)));
            var_22 = (max(var_22, var_12));
            var_23 = ((!(((0 ? -32 : 16128)))));
            arr_32 [i_5] [i_5] = (((arr_15 [i_5] [i_6]) ? ((min((arr_8 [i_5]), var_8))) : (((arr_8 [i_6]) ? var_8 : (arr_8 [i_5])))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_43 [i_7] [i_8] [i_7] = (((var_3 ? 2939252699950643314 : ((var_3 ? var_13 : (arr_34 [0] [i_8 + 4] [i_9]))))));
                            arr_44 [i_5] [i_7] [i_8] [i_9] [i_8] = (((min((arr_36 [i_5] [i_10] [i_5]), var_4)) % var_9));
                        }
                    }
                }
            }
            var_24 = var_3;
            var_25 = (max(var_25, ((min((var_11 * var_0), var_3)))));
            arr_45 [i_5] [i_7] = ((((((!-125) * ((1 / (arr_36 [i_5] [i_7] [7])))))) ? ((((22338 | (-127 - 1))) & ((242 ? var_7 : (arr_41 [i_5] [i_7] [21] [i_7] [i_7] [i_7]))))) : (((((var_13 ? (arr_40 [i_5] [i_7] [i_7] [i_5] [i_7]) : var_6))) ? var_9 : (((arr_16 [i_7] [i_5] [i_5]) % var_7))))));
        }
        var_26 = (max(var_26, ((min(((-(arr_38 [i_5] [i_5] [i_5] [i_5]))), (((arr_34 [i_5] [i_5] [i_5]) ? (arr_13 [i_5] [i_5]) : (arr_26 [i_5]))))))));
        arr_46 [i_5] [i_5] = (arr_30 [i_5] [i_5]);
    }
    var_27 = var_3;

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_50 [i_11] [1] = ((((max(var_11, 24))) ? (((((2 ? 34 : (arr_49 [i_11])))) ? (arr_48 [i_11]) : 87)) : (38342 * 6383)));
        var_28 = (max(var_28, ((((((var_9 ? (arr_47 [i_11] [i_11]) : (arr_47 [i_11] [i_11])))) ? ((1 ? (arr_47 [i_11] [i_11]) : (arr_47 [i_11] [i_11]))) : ((min((arr_47 [i_11] [i_11]), (arr_47 [i_11] [i_11])))))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_29 = (max(var_29, ((((((-(arr_47 [i_11] [i_12])))) ? ((~((-121 ? var_8 : (arr_56 [i_11] [i_11]))))) : (((~(-32765 && 6675770073903775320)))))))));
                    var_30 = var_9;
                    var_31 = -2939252699950643314;
                    var_32 = min((((min(252, var_5)))), (((arr_52 [i_11]) ? (arr_52 [i_11]) : (arr_54 [i_12]))));
                }
            }
        }
    }
    #pragma endscop
}
