/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (min(var_18, (((2117766031 ? (((!(((var_13 ? var_11 : var_7)))))) : (-1 * var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] = (arr_1 [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = (min(((~(arr_3 [i_0 + 2]))), 30917));
                var_19 = ((((-1 != (arr_1 [i_0 + 1] [i_0 + 3]))) ? ((-(arr_1 [i_0] [8]))) : (arr_0 [i_0] [i_0])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((!4702300022743633875) ? (arr_7 [11] [11]) : (min((arr_2 [i_2 - 2] [i_2 - 2]), (((var_10 ? var_2 : (arr_0 [i_2] [i_2]))))))));
        arr_9 [i_2] = ((((!(((2147483647 ? -120 : 0))))) ? (((((var_7 ? 1 : 121))) ? (min(var_9, var_15)) : ((((arr_2 [20] [20]) + var_5))))) : (((13204 ? 8 : (!-3))))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_20 = ((!(arr_3 [i_2 - 1])));
            var_21 = ((!((min(2147483647, 121)))));
            var_22 = -122;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_23 |= ((var_7 * ((var_3 ? var_11 : var_16))));
            var_24 = ((1 ? var_5 : ((7137 ? 247 : -2147483647))));
            arr_15 [1] &= (var_14 - var_10);
            var_25 = ((var_11 ? (arr_1 [i_2 + 1] [i_2]) : var_13));
            var_26 = (max(var_26, (((((((arr_2 [i_4] [4]) ? var_1 : (arr_3 [i_2])))) ? 3287434424 : (arr_10 [i_2 + 2]))))));
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_27 = (max(var_27, ((((0 ? var_13 : (((arr_18 [i_5] [i_5] [i_5]) ? 1 : var_10))))))));
            var_28 = (((((~(arr_7 [i_2 + 1] [i_5])))) ? var_11 : (~479357739)));

            /* vectorizable */
            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                arr_22 [i_2] [i_2 + 1] [i_2 + 1] [i_2] = (arr_11 [i_2 - 1] [i_6 + 1] [i_6]);
                var_29 = ((((var_12 ? var_4 : var_8)) == (((127 <= (arr_20 [i_2] [3] [i_6] [i_6]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_30 = var_7;
                            arr_28 [12] [i_5] [i_6 - 2] [i_7] [12] = var_9;
                        }
                    }
                }
                var_31 -= (((19 * -111) > (-1394267063 - 121)));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_32 = (max(var_32, ((var_14 / (arr_26 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_33 = (var_16 ? ((var_8 ? var_4 : var_10)) : ((((arr_36 [i_2] [i_9] [i_10] [i_11]) > (arr_32 [i_11] [i_10])))));
                        arr_38 [i_9] [i_9] [i_10 - 2] [i_9] [i_11] [7] = var_0;
                        var_34 = (1 ? 12654 : 1007532871);
                    }
                }
            }
            var_35 = ((var_2 ? (((-1394267063 ? var_14 : 126))) : (((arr_20 [i_2] [i_2] [i_2 - 2] [i_9]) - var_14))));
            var_36 = (max(var_36, -var_0));
            var_37 = (((arr_29 [i_9] [i_2 + 1] [i_2 + 2]) < (((arr_3 [5]) ? (arr_27 [i_2] [i_2] [1] [i_2 + 1] [i_2 + 2]) : (arr_12 [i_2] [i_9] [11])))));
        }
        var_38 = ((!(((((!(arr_3 [i_2]))) ? (~18052) : ((-(arr_19 [i_2]))))))));
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        arr_43 [i_12] = var_10;

        for (int i_13 = 4; i_13 < 14;i_13 += 1)
        {
            var_39 = (max(var_39, (((((((((arr_1 [i_12] [i_12]) ? (arr_2 [i_12] [i_13]) : (arr_44 [i_12] [i_13])))) || (((7106037678688748640 + (arr_39 [i_13] [i_12])))))) ? var_2 : (arr_3 [i_13 - 1]))))));
            var_40 = var_13;
            arr_47 [i_12] [i_12] [i_12] = ((17849389398902581124 ? 14 : 1));

            for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
            {
                var_41 -= (23 - 0);
                arr_50 [i_12] [i_12] = (!var_6);
                var_42 = ((((((((arr_39 [13] [i_13 - 1]) > 3485955728)))) + var_16)) << (-3235228670311669300 + 3235228670311669317));
            }
            for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_43 = (~17849389398902581124);
                var_44 = (((!(!var_13))) ? 2999056803 : ((((arr_52 [i_15 - 1] [i_15 - 1] [i_12]) ? var_10 : var_2))));
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_57 [i_16] = ((4150337556 ? 4193571562201148548 : 1));
        arr_58 [i_16] = (((((976575301 > (arr_42 [i_16])))) / 1896783159));
    }
    #pragma endscop
}
