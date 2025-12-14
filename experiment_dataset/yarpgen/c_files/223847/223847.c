/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0 + 1] [i_2] = (arr_0 [i_1] [i_2]);
                    var_12 = (((((arr_5 [i_2] [i_0 - 1] [i_2]) % (((arr_0 [i_0 - 1] [i_0 - 1]) ? var_5 : (arr_0 [i_2] [i_0])))))) ? ((-9223372036854775800 ? 21 : 0)) : 1);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_13 = 9223372036854775800;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_14 = (var_2 ? (max(-9223372036854775800, -6152230230968775343)) : ((((arr_3 [7] [11]) - var_11))));
                                var_15 = (i_5 % 2 == zero) ? ((((((arr_8 [i_5]) ? (min(-9223372036854775796, (arr_12 [i_4] [i_3] [i_4]))) : (arr_6 [i_5] [i_6] [i_4] [i_5]))) << (arr_14 [i_5])))) : ((((((arr_8 [i_5]) ? (min(-9223372036854775796, (arr_12 [i_4] [i_3] [i_4]))) : (arr_6 [i_5] [i_6] [i_4] [i_5]))) << (((arr_14 [i_5]) - 86)))));
                                var_16 = (min(var_16, (arr_5 [i_0 - 1] [i_0 - 1] [10])));
                            }
                        }
                    }
                    arr_17 [i_0] = 2937535414072841093;
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_22 [4] = (((!var_2) > ((~((var_2 ? (arr_1 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
            var_17 = (min(((max(var_1, var_11))), var_9));
            arr_23 [i_0] [i_0] [i_0] = (((max((arr_9 [i_0]), (arr_9 [i_0]))) | ((-9223372036854775800 ^ (arr_9 [i_0])))));
            arr_24 [i_0 + 1] [i_7] [i_7] = (((arr_13 [i_0 - 1] [i_0 - 1]) + var_10));
        }
        var_18 -= (((arr_11 [i_0] [i_0 - 1] [i_0 - 1]) || (((var_4 ? var_0 : ((((!(arr_1 [i_0]))))))))));
        arr_25 [i_0] |= arr_13 [i_0 - 1] [i_0 - 1];
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_19 = (min(var_19, (var_6 & 1)));
        var_20 = var_0;
        arr_28 [10] |= var_10;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_34 [i_10] [i_10] [i_8] = (-6152230230968775343 || -6152230230968775343);
                    var_21 = var_0;
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 14;i_11 += 1)
    {
        var_22 = (max(var_22, ((((((((~(arr_26 [i_11 + 2]))) >= ((5398844226984998451 ? -9223372036854775800 : var_4))))) << (((((~(arr_26 [i_11 + 1])))) ? var_11 : var_10)))))));
        var_23 &= (var_6 || 9223372036854775800);
    }

    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = ((-4542790885036431654 < (((1 ? (-2147483647 - 1) : 0)))));

        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_46 [i_12 - 1] [i_13] = 1;
            var_24 += 247;
            var_25 = ((((var_8 ? ((var_11 ? var_4 : 7531748521121506040)) : (((max((arr_27 [14] [i_13]), var_5)))))) != var_11));
            var_26 = (max(var_26, (min((((72 - 15509208659636710523) - ((24576 ? 14718843188210086898 : 1)))), (-2638053227781266259 + 6152230230968775340)))));
            var_27 = var_5;
        }
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 3; i_15 < 11;i_15 += 1) /* same iter space */
        {
            arr_54 [i_15] &= ((min((min(var_6, (arr_30 [i_14] [i_14]))), (arr_45 [i_14 - 1] [i_14 - 1]))));
            var_28 = (min(var_28, var_8));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 11;i_16 += 1) /* same iter space */
        {
            var_29 = (min(var_29, (((2 - (arr_44 [i_16 + 1]))))));

            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_30 = ((((arr_33 [i_16] [i_16]) ? var_11 : (arr_48 [i_14]))));
                arr_59 [7] [i_14] = 17752332406389416649;
            }
            var_31 = (((arr_36 [i_14 - 1] [i_16]) ? var_9 : (arr_58 [i_14] [i_14 - 1] [i_14] [i_14 - 1])));
        }
        arr_60 [i_14 - 1] = (((((-(arr_52 [i_14 - 1] [i_14 - 1])))) ? ((min(var_4, ((min((arr_40 [i_14]), var_7)))))) : (arr_52 [i_14] [0])));
        var_32 = (min(var_32, (var_5 - var_10)));
    }
    #pragma endscop
}
