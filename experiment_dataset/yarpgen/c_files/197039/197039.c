/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) ? 0 : ((min(1, 1))))) ^ ((((!var_1) >= 65535)))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_16 = (max(var_16, (arr_3 [6])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((1 != 1) ? ((var_11 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((!((min((arr_9 [8]), 1)))))))))));
                            var_18 = ((!(((((var_1 ? var_13 : 1))) && (((97 ? var_8 : (arr_3 [i_0]))))))));
                            var_19 = -9905;
                            var_20 = (min(var_20, -373));
                            var_21 = (max(var_21, (((27244 != (arr_6 [12] [i_1 - 1]))))));
                        }
                    }
                }
            }
            var_22 *= (arr_8 [i_0]);
            arr_16 [4] &= 35993;
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_23 -= (((arr_4 [1] [i_5]) << 1));
        var_24 = (max(var_9, ((!(((arr_17 [i_5] [i_5]) < -25213))))));
        arr_20 [i_5] |= (max(((max((arr_5 [i_5] [6] [i_5]), (arr_7 [i_5] [12] [i_5])))), (((arr_5 [i_5] [10] [i_5]) ? (arr_5 [i_5] [6] [i_5]) : (arr_15 [i_5] [i_5] [i_5] [i_5] [9])))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = (((arr_22 [i_6] [i_5]) ^ (arr_22 [i_5] [i_5])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_26 &= (arr_29 [12] [12]);
                            var_27 = (((arr_9 [i_7]) ? (arr_1 [1]) : (((arr_27 [i_6] [i_7]) * 36476))));
                            var_28 = ((-var_13 ? ((var_0 ? var_8 : 9906)) : (var_5 * var_3)));
                            var_29 = (((((~(arr_30 [i_9] [i_6] [i_7] [i_6] [i_5])))) ? var_3 : (arr_11 [i_8])));
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 = (arr_24 [i_5]);
                var_31 = (min(var_31, (arr_10 [5] [i_6] [7] [i_10] [i_10])));
                var_32 += var_10;
                var_33 &= (~var_11);
                var_34 = 62203;
            }
            var_35 = 19030;
            var_36 = ((var_9 ? 1 : var_10));
        }
        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            arr_39 [i_11] = 0;
            arr_40 [i_5] [i_11] [i_11] = (1 >= (max((var_2 & 1), (~5059))));

            /* vectorizable */
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                arr_44 [i_11] [i_12] = (arr_28 [10] [10] [i_11 + 2] [i_11] [i_11 + 2]);
                var_37 -= (((arr_35 [i_11] [i_11] [1]) & (arr_30 [i_11 + 2] [i_11 + 2] [i_12 + 1] [i_12] [i_12 + 1])));
            }
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                arr_47 [i_13] [1] [i_13] |= (((((var_12 & (((arr_26 [i_5] [i_11 - 2] [i_11] [i_13 + 1]) ? var_2 : (arr_14 [i_5] [i_5] [i_13] [i_5] [i_13] [i_11] [i_13 - 2])))))) ? (min((47212 & var_9), ((var_8 ^ (arr_43 [i_5]))))) : (((arr_24 [i_11 - 2]) & var_6))));
                arr_48 [i_13] [i_13] [i_13 - 1] = (~1);
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                var_38 = var_12;
                var_39 = (((arr_9 [10]) ? (((arr_17 [i_11] [i_11]) ? 1 : 9905)) : var_12));
                arr_51 [i_5] [i_5] [i_11] [i_14] = -0;
            }
            var_40 = (max(var_40, (((34002 ? var_1 : (((((arr_14 [i_11 + 2] [i_11] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_18 [i_5]) : (arr_12 [i_5] [i_11] [11] [i_5]))))))))));
            var_41 ^= (max(((min(59003, 1))), (((arr_15 [i_11] [i_11 - 3] [i_11 + 2] [i_11 + 1] [i_11 - 2]) << (-25207 + 25230)))));
        }

        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            var_42 = (max(-52, (!51567)));
            var_43 = (min(((max((arr_38 [i_5] [i_15 + 2] [i_15 + 2]), var_12))), ((1 ? ((min(var_3, 65535))) : (6545 - var_14)))));
            var_44 = (((var_10 & -53) <= (((!(arr_49 [i_15 + 1] [i_15 + 2] [i_15 + 1] [i_15 + 2]))))));

            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                var_45 = ((-(~var_12)));
                arr_56 [i_15] [i_15] = ((!((max(51465, 639)))));
                var_46 ^= ((((max(1, 2812))) ? var_6 : (max(((var_12 ? -68 : var_11)), ((var_11 ? var_13 : 45109))))));
            }
            var_47 = (max(var_47, (~2801)));
        }
    }
    var_48 = (min(var_48, (((-((-6545 % ((23030 ? -66 : 3026)))))))));
    #pragma endscop
}
