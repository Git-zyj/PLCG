/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_3 / var_11) ^ var_2));
    var_14 = (~255);
    var_15 = ((((((((var_6 ? 0 : 8931237597737983653))) ? var_4 : (~-32)))) ? (((~var_9) & (((-32752 ? var_12 : var_1))))) : (~var_8)));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_3] [i_1] = ((((min((((!(arr_3 [i_0] [i_0 - 2])))), 65516))) ? var_5 : (((32 ^ 57688) ? (arr_9 [i_3] [i_2] [i_1] [i_0]) : (var_5 > 11555680866023870507)))));
                        arr_11 [i_1 - 2] [1] [i_1] [i_3] = ((~((var_7 ? 0 : 255))));
                        var_16 &= (((((-((1 ? (arr_3 [i_0] [i_1 - 4]) : (arr_5 [i_3] [i_0] [i_0] [i_0])))))) ? (((((var_2 & (arr_0 [i_1])))) ? var_0 : (((var_6 ? 254 : var_12))))) : 220));
                    }
                }
            }
        }
        var_17 = -6;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_18 = ((((max((-33 && var_12), (((arr_1 [i_0] [i_0]) ? 0 : var_4))))) ? ((((((arr_15 [i_0] [i_0] [i_0] [i_0]) ? var_3 : (arr_13 [i_0 - 3] [i_0]))) > (!17968)))) : ((+(((arr_12 [i_5]) ? 0 : 255))))));
                    arr_17 [i_0] [i_4] [i_5] = ((((((1864 ? -52 : var_0))) ? (arr_13 [i_0 - 1] [i_0 + 3]) : ((var_3 ? (arr_1 [i_4] [i_4]) : var_3)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        arr_21 [i_6] = (~2147483647);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    arr_28 [6] [i_7] [i_8] [13] = (11386436428478396947 >= -8931237597737983653);
                    var_19 *= var_4;
                    var_20 = (min(var_20, (((~(arr_26 [i_6 - 1] [16] [i_8]))))));
                    arr_29 [i_6 - 1] [i_7] [i_7] [i_8] = ((var_8 || (-9223372036854775807 - 1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                arr_36 [i_9 - 2] [i_9] [i_10] = (!var_6);
                var_21 ^= -13013;
                var_22 &= ((22683 && (((min((arr_22 [5] [i_9] [i_10]), 255))))));

                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    arr_39 [i_9] = ((!(((!var_2) != (var_6 / var_12)))));

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {
                        arr_42 [10] [1] [i_11 - 2] [i_11 - 2] [i_9] [i_9] = ((42852 << (((((arr_31 [i_10]) ? (arr_18 [i_12]) : 22)) + 24259))));
                        var_23 = (~(((arr_27 [i_9 - 2] [i_10] [i_12 - 1]) ? var_3 : (arr_25 [i_9] [12]))));
                        var_24 = (((~var_2) && (-61 * 51)));
                        var_25 = ((7156119332343346970 - (arr_32 [i_9 - 1])));
                        var_26 = (((arr_25 [i_11 - 2] [i_12 + 1]) >= ((((arr_38 [i_9] [1] [i_9]) / 75)))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_46 [i_9] [i_9] = -30;
                        var_27 = var_10;
                        arr_47 [i_9] [i_10] [i_9] [i_13] = (((((var_6 ? (arr_33 [i_11] [i_9 - 2]) : (arr_41 [i_9] [i_9] [i_9 - 1] [i_9] [i_9])))) ? var_5 : 4674886966676809685));
                        var_28 *= ((~((var_0 ? 47 : (arr_24 [i_9] [i_9] [i_9])))));
                        var_29 = ((1522189738019918711 ? ((var_6 ? -5741429284626109919 : var_12)) : (arr_20 [i_10])));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        var_30 = 30686;
                        arr_51 [i_9] [i_9] [i_9] [i_14 - 1] = var_9;
                        arr_52 [12] [12] [10] [i_9] = ((~((((arr_43 [i_9]) || 7868747409875129463)))));
                    }
                    var_31 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
