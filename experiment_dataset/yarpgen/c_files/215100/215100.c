/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((((var_4 + (arr_2 [i_0])))) >> (var_7 - 24802)));
        arr_3 [i_0] [i_0] = (((10884898726629097136 / var_8) / var_3));
        arr_4 [i_0] = (((((arr_1 [i_0] [12]) ? var_11 : 79)) - (min(var_11, var_4))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 += ((max((max(3288465716, var_0)), (((3288465712 ? var_1 : (arr_1 [i_1] [i_1])))))) + ((((max((arr_6 [i_1]), var_3))) + var_11)));
        var_15 = var_7;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 *= 255;
        var_17 = ((var_10 - var_3) ? ((var_4 + (arr_9 [i_2] [i_2]))) : (arr_8 [i_2]));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_18 = (((28562 * 3288465716) ? var_10 : var_6));
                var_19 = (min(var_19, ((((arr_10 [i_2] [i_3]) - var_7)))));
            }
            arr_16 [i_2] [i_3] [1] = (arr_14 [1] [i_2]);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_20 = -460510655;
                arr_21 [i_2] [i_2] = ((!(arr_13 [15] [i_3] [i_3] [i_3])));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_21 &= (((arr_17 [i_6]) > (156 & -4112127499919149531)));
                var_22 -= ((~((79 ? (arr_10 [i_2] [i_6]) : var_10))));
                var_23 = var_8;
                arr_24 [i_2] [i_2] [i_2] = (((((arr_23 [i_2]) ? (arr_22 [14] [i_3] [14] [i_6]) : -4112127499919149520)) - 127));
            }
            var_24 = ((((var_6 ? var_0 : -5149936131011068777)) <= (((((arr_8 [i_2]) <= 5149936131011068769))))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_7] = (104 ? (var_4 < var_3) : (arr_14 [i_7] [i_2]));
            var_25 = var_8;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_26 = (((!var_3) & ((5149936131011068782 ? (arr_10 [i_2] [i_8]) : var_10))));
            var_27 = ((-((var_8 ? -7148531838843503611 : (arr_18 [i_2] [i_8] [i_8] [i_8])))));
            arr_30 [10] = ((!(arr_9 [i_2] [i_8])));
            var_28 = var_3;
        }
        var_29 = (-6462876993408039156 + var_7);
        var_30 = 9817;
    }
    var_31 &= ((var_4 != (((((max(0, 79)))) % ((var_4 ? var_2 : -1439390406389169946))))));
    var_32 = ((var_10 ? ((-(var_1 / -8800))) : (((!(((var_2 ? var_3 : 3288465716))))))));
    #pragma endscop
}
