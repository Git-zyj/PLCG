/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max((1 >= var_9), 67108848)))));
    var_15 = (min(var_15, (((min(((min(var_13, var_13))), var_9))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((!var_11), ((!(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((-(arr_1 [i_0] [4])))) : ((245760 ? (min(67108848, var_10)) : (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] = ((var_4 ? ((min((arr_1 [i_0] [i_0]), -67108849))) : (((var_12 > 2188414985623169710) ? var_10 : 16258329088086381905))));
        arr_6 [1] |= (((~var_0) & var_10));
        arr_7 [i_0] [i_0] = ((var_8 ? (((var_7 ? var_0 : var_2))) : ((-1 ? ((min(0, 28672))) : (var_2 | 67108849)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_10 [i_1] = ((~((-((var_12 ? 1 : 13173111807039901296))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_2] [i_2] [i_2] = (arr_9 [2] [i_1]);
            arr_14 [i_2] = min((((((max(var_12, var_3))) + (var_2 / var_12)))), (min(((max(var_13, var_8))), (min((arr_8 [i_2]), var_1)))));
            arr_15 [i_2] = var_12;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                var_16 = (max((min(var_0, -2635187)), (arr_9 [i_1] [i_1])));
                var_17 = ((var_4 != (((max(var_12, var_4))))));
            }
            var_18 = var_4;
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                arr_28 [i_1] [i_1] [i_1] = (min(((((((arr_27 [i_1] [i_1] [i_1] [i_1]) <= 12634014856626528611)) ? var_0 : (((arr_22 [i_1] [i_1] [i_1]) >> (var_7 - 22108)))))), ((var_9 ? (min(12685916397568934640, var_4)) : ((min((arr_27 [i_1] [i_5] [i_6 + 1] [i_6]), var_0)))))));
                arr_29 [i_1] [i_1] [20] [20] = (((((max(var_5, var_6)) ? ((var_10 ? var_6 : var_1)) : ((((arr_26 [i_1] [i_5] [i_6 - 1]) < var_12)))))));
            }
            arr_30 [i_5] = ((-67108848 == ((((max(-67108845, var_0)))))));
            arr_31 [i_5] = (((!var_2) ^ (min(((var_6 ? var_3 : -67108849)), 29))));
            var_19 = (((var_6 % 4) >= ((var_7 ? var_7 : var_8))));
        }

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_34 [i_1] [i_7] = (((arr_8 [16]) ? ((-(arr_33 [i_7] [i_7]))) : (min(((var_4 >> (((arr_24 [i_7]) - 969733114)))), var_1))));
            arr_35 [i_7] [i_7] [i_7] = min(((max((!var_13), (max(13410, var_7))))), (max(-var_5, var_11)));
            var_20 = ((-(min((var_3 + var_2), var_13))));
            arr_36 [i_1] [i_1] &= var_8;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_46 [i_1] [i_8] [i_9] [i_10] = min(var_0, var_7);
                    arr_47 [i_1] [i_8] [i_9] [i_10] = var_11;
                    arr_48 [i_10] = ((((min(var_3, 652159412))) ? (((((12685916397568934640 ? var_7 : 0))) ? (((var_8 ? var_7 : var_8))) : 67108848)) : var_4));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_51 [i_9] [i_11] = ((var_2 + 2147483647) >> (var_2 + 1753852270));
                    arr_52 [i_1] = var_0;
                    var_21 = ((-(arr_8 [i_9])));
                    arr_53 [i_1] [i_1] = (((var_0 ? var_11 : var_1)));
                    arr_54 [2] [2] [2] [2] = ((arr_27 [i_1] [i_8] [i_9] [i_11]) ? -8602 : var_3);
                }
                arr_55 [i_1] [15] [i_1] = ((!((((arr_49 [i_1] [i_1] [i_1] [i_1]) ? var_11 : (var_2 || var_13))))));
                var_22 = (max(var_22, ((((min(((var_13 ? var_9 : var_4)), (((-(arr_20 [i_1] [i_8] [i_9])))))) % var_2)))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_23 = (((arr_50 [i_1] [i_8] [i_8] [i_1] [i_12]) ? (arr_24 [i_8]) : -67108849));
                var_24 = (max(var_24, var_12));
                arr_58 [i_1] = ((var_6 & (arr_56 [i_1] [i_1] [i_8] [i_12])));
            }
            arr_59 [i_1] = (((((var_12 ? (arr_40 [i_1] [i_1] [i_1] [i_1]) : var_2))) ? (((arr_40 [i_8] [i_1] [19] [i_1]) ? -1380764417 : (arr_40 [i_1] [i_1] [i_8] [i_8]))) : (var_6 | var_6)));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    {
                        var_25 = (((!(arr_43 [i_1] [i_1] [i_13 + 1] [i_13 + 1]))) ? var_4 : (~652159421));
                        arr_65 [i_1] [i_8] [i_13] [i_14] = ((-0 ? var_0 : (min(var_9, (var_10 > var_2)))));
                        arr_66 [i_1] [i_1] [i_1] [i_1] = ((~(max((arr_38 [i_13 + 1] [i_13]), 22737))));
                        var_26 = (min(var_9, (((var_13 / var_5) ? (var_7 + var_0) : (((arr_17 [i_13]) - var_1))))));
                    }
                }
            }
        }
        var_27 = max(((-6 ? var_9 : (arr_41 [i_1] [i_1]))), -var_6);
    }
    var_28 = ((((((~var_0) ? ((min(var_7, var_11))) : (var_4 + var_0)))) ? (min((~-245764), var_2)) : var_8));
    #pragma endscop
}
