/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max((47607 + 1056859564), var_8))) ? var_10 : ((max(3238107731, ((1 ? 1056859548 : 9770)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 = (~53);
        var_16 = (((arr_1 [i_0] [6]) ? 65535 : -357853794426236925));
        var_17 = (((arr_0 [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 1] [i_0 + 1])));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 *= (8 <= -8594686073872456220);
                    var_19 = (arr_11 [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_20 = (arr_9 [i_1] [i_2] [i_3] [i_4]);
                                var_21 = (min(var_21, (-8594686073872456220 < -1327397904542288092)));
                                var_22 = (!1948932690);
                                var_23 = ((var_1 ? (arr_14 [i_1 - 1] [10] [0] [i_4 + 3]) : (arr_3 [i_4 + 2] [i_1 - 1])));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_24 = ((var_4 % (1056859564 || var_10)));
                        var_25 = (-1073741824 ^ 1056859564);
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_26 ^= (((arr_7 [i_1 - 1] [i_1 - 2]) | (arr_7 [i_7] [i_2])));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_27 = ((-(arr_7 [i_7] [i_8])));
                            var_28 = (((arr_21 [i_1 - 2] [i_1 - 1]) + ((0 ? var_11 : -14))));
                            var_29 = ((((4899543085117050735 ? 1 : (arr_2 [5]))) % (arr_11 [i_1 - 2])));
                        }
                        var_30 = (((arr_18 [1] [i_1 - 1] [i_3]) ? 28419 : (arr_1 [i_3] [i_7])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_31 *= ((-(~var_8)));
                        var_32 &= ((-(arr_22 [14] [i_1 - 2] [i_1] [6])));
                    }
                }
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    var_33 += (max((arr_3 [i_1 - 1] [9]), (((0 / 65430) ? (arr_10 [11] [3] [i_1 + 1]) : ((1 ? var_0 : (arr_14 [i_1] [i_1] [1] [i_10])))))));
                    var_34 ^= ((((arr_21 [i_1] [i_1 - 1]) ? (arr_21 [5] [i_1 - 2]) : -36)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_35 = var_3;
                                var_36 = (max(var_36, ((((max(var_3, 8594686073872456220)) != 1)))));
                            }
                        }
                    }
                    var_37 = (((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : var_6)) - ((max(var_8, (arr_12 [3] [i_2] [i_2] [i_1] [i_1] [3]))))));
                    var_38 = (max(((40 ? 8594686073872456220 : 1897839998), (((var_4 ? var_5 : var_6))))));
                }

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    var_39 = ((127 || ((max(((min(var_1, var_13))), ((606450046709270389 ? 53 : var_6)))))));
                    var_40 = (arr_10 [1] [1] [i_1]);
                    var_41 = (((((~((1073741847 ? -66072456 : var_6))))) <= (min(var_3, var_1))));
                    var_42 = 1;
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            {
                                var_43 = ((~(((arr_15 [i_1 - 2] [i_2]) >> (var_3 - 5559802009684330464)))));
                                var_44 = ((max(((6534590100196860962 ? 0 : 377992579061325030), ((1056859558 ? var_7 : (arr_20 [i_1] [i_2])))))));
                                var_45 = (((~(arr_21 [i_1 - 1] [i_1]))) ^ ((((arr_39 [i_1] [i_1] [12] [i_1 - 1]) ? (arr_39 [i_1] [6] [8] [i_1 - 2]) : (arr_14 [i_1] [7] [i_1] [i_1 - 1])))));
                            }
                        }
                    }
                    var_46 = (((!18068751494648226583) ? -var_11 : (!1)));
                    var_47 = (min((arr_45 [1] [i_1] [i_1] [i_1]), 16380));
                }
                var_48 = ((0 ? (max(((((arr_5 [i_1]) > -2451339925406074629))), (arr_17 [i_1 - 2] [6]))) : (~1016463241)));
            }
        }
    }
    #pragma endscop
}
