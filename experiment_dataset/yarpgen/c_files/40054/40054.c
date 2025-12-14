/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (20 * ((var_4 ? var_8 : (!4294967282))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_1] = (var_3 % (((arr_4 [i_1 + 1] [i_1 - 1] [11]) ? var_9 : (!14))));
                    var_14 = (max(var_14, (((~(arr_1 [i_0]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_12 [i_0] [i_3] [i_3] [i_4] = (34 != -20);
                    arr_13 [i_0] [i_3] [i_0] = ((+((((((arr_9 [i_3]) ? (arr_3 [6]) : (arr_1 [i_0])))) ? ((var_1 ? (arr_6 [i_3]) : var_9)) : (arr_8 [2] [i_3])))));
                    var_15 -= (arr_5 [15] [i_3]);
                }
            }
        }
        arr_14 [i_0] = arr_1 [i_0];
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 6;i_8 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((((arr_9 [0]) ? (arr_9 [14]) : var_9)) + (((arr_9 [6]) + (arr_9 [14]))))))));
                        arr_25 [i_8] [7] [7] = (((arr_2 [i_6]) ? var_0 : var_5));
                    }
                }
            }
        }

        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            var_17 |= (((0 || -20) && (arr_20 [i_5] [i_5] [i_5])));
            arr_28 [i_9] = (arr_27 [i_9]);
            arr_29 [i_9] [i_9] [i_9] = ((((((arr_6 [i_9]) ? var_2 : var_6))) ? (((arr_10 [i_9] [i_9 - 3] [i_9]) ? (arr_6 [i_9]) : (arr_16 [i_5] [i_5 - 4]))) : ((((var_12 != (arr_16 [i_5] [i_5 - 2])))))));
            var_18 -= (((arr_2 [i_9]) ? (arr_1 [i_5 - 3]) : 17610));
            var_19 = (min(var_19, (((!((((arr_22 [i_9 - 3] [i_5 + 1]) ? var_4 : (arr_22 [i_9 + 1] [i_5 - 2])))))))));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_20 *= ((!(arr_24 [i_11] [1] [i_11] [i_5 - 4] [i_10 - 2] [i_11])));
                arr_37 [i_10] [1] = (((arr_16 [i_10 - 1] [i_5 - 2]) ? var_9 : (arr_16 [i_10 - 1] [i_5 - 2])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_21 = (((arr_36 [i_5 - 2] [i_5 - 2]) >= (arr_36 [i_5 - 2] [i_5 - 2])));
                            var_22 = (((arr_24 [i_10] [i_5] [i_5 - 2] [i_10 - 2] [i_10 - 2] [i_11]) ? (arr_24 [i_10] [i_10] [i_5 - 4] [i_10 + 1] [i_12] [i_13]) : (arr_24 [i_10] [i_10] [i_5 - 2] [i_10 - 2] [1] [i_10])));
                            arr_43 [i_5] [i_5] [i_10] [i_12] [i_13] = (((arr_35 [i_10] [i_10 + 1]) <= (arr_9 [i_10])));
                        }
                    }
                }
                arr_44 [i_11] &= ((arr_8 [i_5 + 1] [i_5 - 1]) >= (arr_8 [i_5 + 1] [i_5 - 1]));
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_23 *= (arr_0 [i_14]);
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 7;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 8;i_16 += 1)
                    {
                        {
                            arr_52 [7] [9] [i_14] [i_15] [i_10] [i_16] [i_10] = (((((0 ? -20 : 59150))) ? (((arr_20 [0] [i_10] [i_14]) ? (arr_26 [i_14] [i_14]) : (arr_45 [i_5] [i_10 - 2] [i_14] [1]))) : var_12));
                            arr_53 [i_10] [i_10] = ((var_1 ? (((arr_33 [5] [i_15 - 2] [i_10]) * (arr_51 [i_10] [i_10]))) : (arr_5 [i_14] [i_5 - 3])));
                        }
                    }
                }
            }
            for (int i_17 = 2; i_17 < 8;i_17 += 1)
            {
                var_24 &= (arr_23 [i_5] [i_5] [i_10] [0]);
                var_25 = ((+(((arr_23 [i_17] [i_17] [i_10] [i_5]) ? (arr_15 [i_17]) : (arr_23 [i_5 + 1] [4] [i_17] [i_10])))));
                var_26 *= (((arr_10 [i_17 + 1] [i_5 - 3] [i_17]) ? (arr_3 [i_17 - 1]) : (arr_4 [i_5 - 2] [i_5 - 2] [i_17 + 1])));
                var_27 -= var_9;
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_58 [1] [i_10] = var_3;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        {
                            arr_65 [i_5 - 4] [i_10 + 1] [i_18] [i_10] = (arr_11 [i_10] [i_10 + 1] [i_10]);
                            arr_66 [2] [i_10] [2] [0] [i_20] &= (((arr_56 [i_20] [i_5 - 2] [9] [6]) | (arr_56 [i_5] [i_5 - 4] [i_5 - 4] [i_19])));
                            var_28 ^= (((((arr_55 [i_5] [i_10] [i_19]) ? var_3 : (arr_30 [2]))) > var_12));
                        }
                    }
                }

                for (int i_21 = 1; i_21 < 9;i_21 += 1)
                {
                    var_29 = (((((var_1 * (arr_19 [i_21])))) ? ((var_0 << (((arr_33 [i_10] [i_5] [i_10]) - 49)))) : (arr_27 [i_10])));
                    arr_69 [1] [i_10] [3] [i_18] [1] [i_18] = var_2;
                }
                arr_70 [i_5] [i_10] [i_5] = (((arr_5 [i_5 + 1] [i_5 - 4]) == ((var_0 ? var_4 : var_7))));
            }
            arr_71 [i_5] [i_10 + 1] [4] &= ((~(arr_36 [i_10 - 2] [i_10])));
        }
    }
    var_30 = var_12;
    var_31 &= var_7;
    var_32 = (max(var_32, (((!(((var_9 ? (var_8 != var_3) : ((var_8 ? var_11 : var_11))))))))));
    #pragma endscop
}
