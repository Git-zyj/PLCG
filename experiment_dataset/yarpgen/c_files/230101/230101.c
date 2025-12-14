/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (((!(((4175 ? 2870296230 : 2336577089664125072)))))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (arr_7 [7] [i_1] [i_3] [i_3] [i_4]);
                                var_18 *= -0;
                                var_19 = (min(var_19, -1));
                                arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = (-32767 - 1);
                                var_20 = (min(var_20, (arr_2 [i_1] [i_2] [12])));
                            }
                        }
                    }
                    var_21 = (min(((var_2 - ((32761 ? 215 : -9223372036854775796)))), (((arr_4 [i_2]) - -57983))));
                    var_22 = (min(var_22, var_1));

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_23 = -2336577089664125083;
                            var_24 += -71;
                            var_25 = 97;
                        }
                        arr_18 [i_2] [i_1] [i_2] = ((((((min(var_11, var_7))) ? (~var_9) : (var_8 | var_1))) != ((((arr_0 [i_5 + 1]) ? (arr_17 [i_5 + 3]) : -98)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_2] [i_2] [i_7] = (arr_1 [i_7 - 2]);
                        var_26 += var_1;
                        arr_22 [i_2] [i_2] = (((((var_5 && (arr_6 [i_0] [i_2] [i_2])))) + (arr_16 [i_0] [i_1] [i_2] [i_7] [i_0] [i_1] [i_0])));
                        arr_23 [i_2] = var_7;
                    }
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_27 = var_8;
                                var_28 += ((((max(1, -1))) ^ var_5));
                            }
                        }
                    }
                    var_29 += (max(var_3, ((-(var_10 / var_5)))));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_30 = (min(var_30, ((45 ? ((max(((1 ? var_9 : 32765)), (~10)))) : ((var_11 ? (arr_10 [i_0] [i_0] [i_1] [i_11] [i_11]) : (var_11 | var_14)))))));

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_31 = (var_11 || var_6);

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_32 = 1;
                            arr_37 [i_13] [i_13] = ((((~1218085932) ? ((~(arr_7 [i_0] [i_1] [i_11] [i_12] [i_13]))) : var_11)));
                        }
                        arr_38 [i_0] [i_0] [i_11] [i_12] &= ((202928575004082393 ? (~var_11) : (arr_33 [i_12] [i_11] [i_11] [i_1] [i_0])));
                        var_33 = ((((2233437882 ? 45 : (arr_17 [i_11]))) >> (var_7 - 1933104452)));
                        var_34 = (~var_15);
                    }
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        arr_42 [i_0] [i_1] [i_11] [12] = var_4;
                        var_35 = (arr_34 [i_0] [i_1] [i_11] [i_14]);
                    }
                    for (int i_15 = 2; i_15 < 11;i_15 += 1)
                    {
                        arr_46 [i_0] [i_1] [i_11] [i_15] &= (((var_1 & var_2) >> ((((~(arr_28 [i_15] [i_11] [i_1] [i_1] [i_0] [i_15]))) - 8062706666717199823))));
                        arr_47 [i_0] [i_1] = var_7;
                    }
                }
                var_36 &= ((!(((((max(var_5, (arr_35 [i_0] [i_1] [12] [i_0] [i_1] [i_0] [i_0])))) / var_12)))));
                var_37 = (min(var_37, ((((var_15 / var_8) != (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            {
                var_38 = (max((arr_52 [i_16] [i_17]), var_0));

                for (int i_18 = 3; i_18 < 18;i_18 += 1)
                {
                    var_39 ^= (((((max(var_2, var_3)))) && ((((arr_53 [i_18 - 3] [i_18 + 2] [i_18] [i_17]) ? var_11 : (arr_54 [i_18 - 2]))))));
                    var_40 += ((((arr_53 [i_18 - 2] [i_18 - 1] [14] [i_17]) >> (var_15 - 951364637))));

                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        var_41 = ((((((var_7 - 32763) == var_3))) | (((arr_52 [i_16] [i_18 - 3]) ? (((arr_55 [2] [i_18] [i_19]) ? var_6 : var_5)) : 5934291896302190791))));
                        arr_59 [i_16] [i_17] [i_18] [i_16] = (((((((2061529416 ? 3804783420 : 0))) / var_14)) ^ 32758));
                    }
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        var_42 = (((var_11 >= 28) <= (arr_51 [i_16] [i_17] [i_18])));
                        arr_64 [i_16] [i_17] = ((((max((((var_3 ? var_15 : -75))), var_12))) ? ((((arr_51 [i_16] [i_17] [16]) > var_4))) : 753146434362429497));
                        arr_65 [i_20] [i_16] [i_16] [i_16] = (max((arr_49 [i_16] [i_20]), var_0));
                    }
                }
            }
        }
    }
    var_43 = var_1;
    var_44 = ((205 ? 0 : 31));
    #pragma endscop
}
