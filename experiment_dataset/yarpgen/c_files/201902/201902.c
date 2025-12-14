/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 += ((arr_5 [i_0 - 1]) == (arr_2 [i_0 + 1]));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_13 = -51;
                            var_14 = (1894130240 <= 1);
                            var_15 = var_10;
                            arr_16 [i_3 + 1] [i_3] [13] = (1894130250 - var_11);
                            arr_17 [i_4] [i_3] [i_3 - 1] [i_3] [i_1] [i_3] [i_0] = (((arr_12 [i_3]) && (arr_0 [i_0 - 2])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_16 = (var_8 && var_6);
                        var_17 = ((((arr_21 [i_6] [i_7]) ? (arr_23 [7] [i_5] [i_7]) : (arr_5 [i_0]))));
                    }
                }
            }
            arr_26 [i_0] [i_5] [i_5] = -1894130241;
            var_18 = -1894130240;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_19 = (-1894130219 > -1894130240);
            var_20 = (max(var_20, (((-370388587 ? (min((max((arr_25 [i_0] [i_8] [i_0] [i_0]), var_7)), (arr_23 [i_0 - 1] [i_0 + 2] [i_0 - 1]))) : ((((((var_5 ? var_10 : var_0))) ? var_11 : (((arr_19 [i_0] [i_8] [i_8]) + (arr_27 [i_0] [i_0])))))))))));
        }
        arr_31 [7] = ((var_10 ? ((max(-54, (arr_11 [i_0] [i_0 + 2] [i_0] [i_0])))) : -48));
        arr_32 [i_0 - 1] = (arr_21 [i_0 + 1] [i_0 + 2]);

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_21 = ((var_6 ? (((arr_35 [i_0] [i_0]) ? (max((arr_22 [i_9]), var_4)) : (arr_23 [5] [i_9] [i_0]))) : (arr_25 [i_0] [i_0] [i_0] [i_9])));
            var_22 = (arr_20 [i_0] [i_9] [i_9]);
            arr_36 [i_0] [i_9] [i_9] = -1894130240;
            var_23 = (max(56, 3408637934974890252));
            var_24 = ((((!(arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0]))) ? (min(1894130239, var_3)) : ((max((arr_6 [i_0 + 1]), (arr_8 [i_0 + 2] [i_0] [i_0] [i_0]))))));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_25 = (arr_12 [i_10]);
            var_26 = (((((!(arr_28 [i_0 + 1])))) > (arr_28 [i_0 - 1])));
            arr_39 [1] [i_10] [i_0] = (max(1, 12314));
        }
    }
    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_27 -= ((((-114 ? (var_3 > var_11) : var_3)) == ((((arr_30 [i_11 - 2]) && var_5)))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_28 = ((-((((arr_42 [i_11 - 2]) || (arr_42 [i_11 - 1]))))));
                    arr_48 [i_11] [i_11] [i_11] = (((((-(arr_47 [i_11 + 1] [i_11 - 1])))) ? ((((!(arr_44 [i_11] [i_11 + 2]))))) : (((arr_33 [i_11 - 2]) ? (arr_30 [i_11 - 1]) : (arr_0 [i_11 - 2])))));
                    var_29 = (min(var_29, (((((((arr_11 [10] [i_12] [i_13] [i_12]) << (119 - 103)))) ? ((~(min((arr_0 [i_13]), (arr_37 [i_11] [i_11] [i_11]))))) : ((max(-1894130219, 1894130240))))))));
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_30 = 0;
        var_31 = 717551088;
    }
    var_32 = (max(1894130239, 2147483646));
    var_33 ^= ((var_7 ? var_9 : (var_1 + var_11)));
    #pragma endscop
}
