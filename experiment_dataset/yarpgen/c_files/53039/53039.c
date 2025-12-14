/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 += (((arr_4 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])));
            var_13 -= (-127 - 1);
            var_14 = (arr_1 [i_0]);
            arr_5 [i_0] = var_0;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 &= (((arr_8 [i_4] [i_1] [i_4 - 1] [i_1] [i_4]) >> ((((-853091005 ? (arr_9 [i_3] [i_0] [i_0]) : 2147481600)) - 3876071400393307149))));
                            var_16 ^= (var_4 == (((arr_3 [i_2] [i_1]) ? -26326 : var_5)));
                            var_17 *= (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [4] [10] [i_4] [i_4 + 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_18 |= (((arr_9 [i_5] [i_2] [i_1]) << (6 - 6)));
                            var_19 = var_10;
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_20 = (min(var_20, (((arr_10 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]) ? var_0 : (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
            var_21 = (max(var_21, (((~(arr_9 [13] [i_0] [i_7 + 1]))))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_22 &= var_4;
                var_23 ^= (var_0 != (((arr_3 [i_0] [4]) / var_6)));
                var_24 = (max(var_24, var_5));
                var_25 += -116;
                arr_26 [1] [1] &= var_11;
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                arr_31 [i_10] |= 0;
                var_26 = (max(var_26, 26314));
                arr_32 [i_0] [i_0] = (arr_19 [i_0] [i_0] [15]);
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                var_27 = -var_7;
                arr_35 [i_0] [i_11] = (((arr_24 [i_0] [i_0] [i_0] [i_11]) ? (arr_24 [i_11] [i_0] [i_0] [i_0]) : (arr_24 [i_11] [i_0] [i_0] [i_0])));
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_9] [i_12] [i_0] = ((var_11 & (arr_36 [i_0] [i_9] [5])));
                var_28 = (min(var_28, (((((((arr_16 [i_9]) & (arr_8 [i_0] [i_9] [i_9] [i_9] [i_12])))) ? ((-26325 ? 32 : (arr_1 [i_0]))) : (arr_0 [12]))))));
            }
            var_29 = (max(var_29, (((-var_8 ? 0 : -var_8)))));
            var_30 &= 1422655305658065100;
            var_31 = (max(var_31, (((-(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            var_32 -= (arr_33 [14] [i_9]);
        }
        var_33 *= -28784;
        arr_39 [i_0] = ((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_40 [i_0] [i_0] = (arr_11 [12] [i_0] [i_0] [i_0]);
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_45 [i_13] = var_0;
            var_34 = ((-((-(var_4 * 134)))));
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_35 = (max(var_35, 41));
            var_36 = (min(var_36, ((min(99, 14253031234297568803)))));
            var_37 ^= var_1;
            var_38 ^= 28707;
            arr_48 [0] [i_15] |= ((((((((min(var_6, (arr_47 [i_13] [i_13] [i_15])))) && (!5))))) % (((((arr_43 [i_13] [i_15]) + 9223372036854775807)) << (((-42 + 55) - 12))))));
        }

        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            var_39 &= (min(31, (((min(var_7, (arr_50 [i_16]))) / (arr_50 [i_13])))));
            var_40 = (max((((-((var_0 << (((arr_47 [i_13] [i_13] [i_13]) - 13074392512464603305))))))), 5657373242953592406));
            var_41 &= (((((((arr_50 [i_13]) < (arr_46 [i_13] [i_13] [i_13]))))) ? var_10 : var_10));
            var_42 += (arr_46 [i_13] [i_13] [i_16]);
            var_43 = ((~(((((arr_49 [i_13] [i_13] [i_16]) + 1)) >> (var_0 <= 16777215)))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            var_44 &= (18446744073709551615 & 41555);
            var_45 += var_7;
            arr_55 [1] &= arr_47 [14] [i_13] [i_17];
        }
        arr_56 [i_13] = var_8;
    }
    var_46 = (min(var_46, (((~9) * var_10))));
    var_47 += (((17091645006390306920 == var_2) | var_9));
    var_48 |= var_8;
    var_49 |= var_5;
    #pragma endscop
}
