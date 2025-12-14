/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = arr_8 [i_2] [i_1 - 4] [i_0];
                    var_17 = ((((((268435456 && var_14) && (var_6 && var_7)))) + ((48 ? ((~(arr_0 [i_2] [i_2]))) : (arr_1 [i_0 - 1] [i_0 + 1])))));
                }
            }
        }
        var_18 = var_5;
        var_19 = (min(var_19, ((((((var_1 / -218880933) ? (218880933 / 4096) : (arr_5 [i_0] [i_0 + 2] [i_0] [i_0]))) / ((var_12 ? var_9 : ((min(var_4, var_8))))))))));
        var_20 = (-32767 - 1);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_21 = ((((min((arr_0 [i_3] [i_0]), (arr_3 [i_3]))))) ? (((!(-32767 - 1)))) : (arr_8 [i_0] [i_0] [i_3]));
            var_22 = (31 & (((arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1]) & (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 3]))));
            var_23 = max(((-(-29 > -29339))), (-32767 - 1));
            var_24 = ((((((max(-29337, -892795107))) ? (arr_5 [i_0] [i_0] [i_3] [i_3]) : var_11)) >= (max(((max(var_0, 88))), ((var_2 + (arr_5 [i_0] [i_3] [i_3] [10])))))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                var_25 = ((var_15 ? var_6 : (arr_1 [i_4] [i_0])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_26 = var_13;
                            var_27 = var_4;
                        }
                    }
                }
                var_28 = -1;
            }
            var_29 = -48;
            var_30 = (max(var_30, (arr_9 [i_0] [i_4])));
            arr_21 [i_0] [i_4] [i_4] = -32763;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_31 = (var_11 && var_4);
            var_32 += ((arr_5 [16] [i_8] [i_0] [i_0]) + ((301519313 ? -1 : -84)));
            var_33 -= ((var_4 / (arr_16 [i_0 + 1])));
        }
    }
    for (int i_9 = 2; i_9 < 24;i_9 += 1)
    {
        arr_26 [i_9] = var_7;

        for (int i_10 = 2; i_10 < 24;i_10 += 1)
        {
            var_34 = ((((((91 ? (arr_27 [i_9 + 1] [i_9 - 1] [i_10 - 2]) : var_2)) | var_3)) + (arr_25 [i_10])));
            var_35 = (min((((((-32767 - 1) > var_12)) ? 7 : 1093539026)), (min((var_9 + var_11), (arr_30 [i_10])))));
            var_36 -= ((30 < 32704) + (-127 - 1));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_37 = var_7;
            var_38 ^= ((((!(arr_25 [i_9 - 2]))) && ((var_14 || (arr_24 [i_9 + 1] [i_9 + 1])))));
        }
        for (int i_12 = 2; i_12 < 24;i_12 += 1)
        {
            arr_36 [1] |= ((arr_25 [i_9 - 1]) ? ((+(((arr_31 [i_9] [i_9] [i_9]) / -5046)))) : (((((var_7 ? var_2 : (arr_30 [i_9])))) ? (268435455 | -103) : ((var_15 ? 1984 : var_2)))));
            var_39 = (max(var_39, (arr_28 [i_9])));
        }
    }
    var_40 -= var_5;
    var_41 |= var_14;
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 11;i_14 += 1)
        {
            {
                var_42 = ((var_7 && ((((!(arr_18 [i_13 + 1] [i_13 + 1] [i_14] [i_13] [i_14] [i_14 - 1])))))));
                arr_42 [i_13] [i_14] = (arr_14 [i_13] [i_13]);
                arr_43 [i_13] [i_13] [i_13] &= min((-23636 | var_10), (arr_12 [15] [i_13] [i_13]));
                arr_44 [i_13] [i_13] [i_14] = var_1;
            }
        }
    }
    #pragma endscop
}
