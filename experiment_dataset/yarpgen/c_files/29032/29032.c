/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_9 ? var_1 : -var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((var_3 ? ((21944 ? var_8 : var_2)) : (~-8774188468003454226)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 = (((arr_5 [i_0]) << (((((((arr_0 [i_0] [5]) ? var_5 : 6291456)) + 22587)) - 16))));
            arr_6 [i_1] [i_0] [i_0] &= ((~(arr_4 [i_0])));
            arr_7 [i_1] [5] = (var_7 ? (var_11 / var_9) : ((((arr_1 [i_0] [i_1]) << (677804927 - 677804919)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [6] [i_1] [i_1] [i_2] = ((~((var_5 ? var_9 : (arr_2 [i_1])))));

                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_16 = ((-((var_11 ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : 253))));
                    var_17 = (min(var_17, (arr_0 [i_3] [i_0])));
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (-22 >= var_13);
                    arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [11] = (((4724810632034305307 ? 8774188468003454214 : 18446744073709551615)));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_5] = (420992719 + var_7);
                        arr_20 [i_0] [i_4] &= (!23998);
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_18 ^= (((var_13 / var_11) != (~var_3)));
                        arr_23 [i_0] [i_0] [i_0] [i_4] [i_6] = (((arr_0 [i_4] [i_4]) / (~2874261073)));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_19 = ((((var_0 ? var_2 : (arr_2 [i_4]))) * (((8653021515085847858 ? (arr_22 [14] [i_1] [i_2] [i_2] [i_7] [i_2]) : var_13)))));
                        arr_27 [3] [3] [10] [i_4] [10] [3] [i_7] = var_5;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_20 = var_3;
                        arr_32 [i_8] [i_8] [i_4] [i_2] [i_1] [7] [7] = (var_1 / var_3);
                        var_21 = (min(var_21, ((((var_1 - var_13) >= var_12)))));
                    }
                    var_22 = (max(var_22, (arr_0 [i_4] [i_0])));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_23 ^= ((!((((arr_18 [1] [0] [i_9] [i_9] [i_9]) >> (var_1 - 2373556657920356743))))));
                            arr_40 [i_10] [i_9] [i_2] [i_1] = (!-328476465);
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                var_24 = ((((var_12 ? -8774188468003454226 : (arr_18 [i_0] [i_1] [i_0] [i_11] [i_0]))) * ((((var_0 >= (arr_18 [i_0] [i_0] [i_0] [i_11] [i_0])))))));
                arr_45 [i_0] [i_11] = (~var_1);
                arr_46 [i_1] [i_11] [i_1] = (-97 ? (((arr_0 [i_0] [i_0]) / var_11)) : var_6);
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_49 [i_1] [6] = (((((var_3 ? var_7 : (arr_9 [i_0] [i_1] [i_12] [i_12])))) ? (((var_13 + (arr_48 [i_12] [10] [i_0])))) : var_2));
                var_25 = (max(var_25, ((9793722558623703757 ? var_11 : (arr_48 [i_0] [i_0] [i_0])))));
                arr_50 [1] [1] [i_1] [i_12] = ((~((var_9 ? var_0 : var_0))));
                arr_51 [i_0] [i_1] = ((~(arr_42 [i_0] [i_1] [i_1])));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_26 = var_7;
            arr_55 [i_13] = (var_3 * var_7);
        }
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            arr_58 [i_14] = (((((var_12 ? var_11 : (arr_22 [9] [8] [i_0] [i_0] [i_0] [9])))) ? (!var_8) : var_13));
            var_27 = ((var_13 ? var_5 : ((var_3 ? (arr_24 [i_0] [i_0] [5] [5] [i_14] [i_14]) : var_7))));
            var_28 = (var_9 * var_6);
        }
    }
    for (int i_15 = 4; i_15 < 21;i_15 += 1)
    {
        var_29 = (max((min(((min(var_6, (arr_61 [i_15])))), 4724810632034305301)), (((var_7 - var_8) / var_9))));
        var_30 &= (max(var_2, (max(((((arr_59 [i_15] [i_15 + 1]) <= var_2))), ((var_2 ? (arr_60 [i_15]) : var_1))))));

        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_64 [i_16] = ((((var_13 ? (arr_62 [i_16]) : (arr_62 [i_16])))) - (min((var_0 / var_12), ((var_13 ? var_9 : var_1)))));
            var_31 = ((var_3 >= ((max((arr_61 [i_15 + 3]), (arr_61 [i_15 + 3]))))));
            var_32 = (((max(var_7, var_7)) ? ((((var_12 + 9223372036854775807) << (((((arr_62 [i_16]) + 1271023335)) - 59))))) : (((arr_62 [i_16]) ? var_1 : (arr_62 [i_16])))));
        }
    }
    #pragma endscop
}
