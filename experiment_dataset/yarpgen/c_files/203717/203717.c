/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = (arr_1 [i_0 + 1] [i_0 - 1]);
        var_16 = (((arr_2 [i_0 + 1] [i_0 - 1]) ? (((((-2221845048003941655 ? (arr_2 [i_0 - 1] [i_0]) : (arr_1 [i_0] [i_0 + 1])))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (max(var_9, (arr_1 [i_0] [i_0]))))) : (arr_1 [i_0] [i_0 + 1])));
        var_17 = var_2;
        var_18 = (max(var_10, -32767));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 = ((var_1 ? ((1 & (max((arr_11 [18] [i_0] [i_1] [i_1] [i_2] [i_3]), var_0)))) : var_13));
                        var_20 &= (arr_10 [i_0] [i_1] [9] [i_2] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_21 |= var_12;
                            var_22 &= (((((1 - (arr_14 [i_2] [i_0])))) > var_3));
                        }
                        var_23 = (((-19954 != 15046) > var_6));
                        var_24 = ((((((arr_16 [i_4] [i_2] [14] [i_0 - 1]) ? var_2 : (arr_7 [i_4] [i_2] [i_0] [i_0])))) ? var_2 : var_4));
                    }
                    var_25 += (max((((var_14 ^ (((var_7 ? 1 : 1)))))), ((25951 ? (arr_5 [i_1] [i_1]) : ((((var_2 != (arr_14 [i_0] [i_1])))))))));
                    var_26 = (max(((((((arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [i_0 - 1] [i_2]) ^ 1))) ? ((((arr_9 [i_2] [i_1] [i_0] [i_0]) != 19))) : (-19 / 21111))), ((-(arr_2 [i_0 + 1] [i_0 + 1])))));
                    var_27 = ((((max(4294967295, 25945)))) && ((max((arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_2] [i_2]), (1745133437 ^ -25945)))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_28 = (((((var_3 ? (arr_20 [i_6]) : (arr_20 [i_6])))) ? (arr_20 [i_6]) : ((var_3 ? var_1 : (arr_20 [i_6])))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_29 = -866492390;

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                var_30 = -25945;
                var_31 -= ((((!(245 - var_5))) ? ((-(max(var_11, (arr_25 [i_8 + 1] [i_7] [i_8 + 1] [i_7]))))) : (max(1, var_9))));
            }
        }
        var_32 = (((!10) || 29892));
        var_33 = ((~(var_14 <= var_5)));
        var_34 = (max(var_34, (((((max(var_12, (((arr_24 [i_6] [i_6] [i_6]) ? (arr_20 [i_6]) : var_5))))) >= (((arr_23 [i_6] [i_6]) + (((arr_22 [i_6] [i_6]) * var_5)))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_35 = var_6;
        var_36 = ((arr_22 [i_9] [i_9]) * var_7);
        var_37 = (((arr_26 [i_9] [i_9]) ? (arr_22 [i_9] [i_9]) : ((25947 ? var_3 : var_8))));
        var_38 = (((arr_23 [i_9] [i_9]) & (arr_23 [i_9] [i_9])));
    }
    var_39 = 25925;
    var_40 = ((var_14 ? (((((!var_9) > ((var_0 ? var_1 : var_10)))))) : (((1 >= 1) ? ((var_11 ? 1 : var_3)) : var_4))));
    var_41 = (((-25945 != 8878711047464694279) << (((var_3 + var_1) - 3064861081))));
    var_42 = var_0;
    #pragma endscop
}
