/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_20 = var_11;
                    var_21 += (min(10269852351492115649, ((var_2 ? (arr_1 [i_0 + 1]) : 10269852351492115622))));
                    var_22 ^= (arr_2 [i_0 + 1]);
                    var_23 = (((arr_2 [i_0 + 1]) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_2]) : (((((arr_4 [i_0] [i_1] [i_2]) ? var_16 : 20)) | (~var_12)))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_24 -= ((((((((1 ? 10269852351492115624 : var_5))) ? var_19 : (arr_2 [i_0])))) - ((0 << (var_4 - 57)))));
                    var_25 = var_11;
                    var_26 = (max((min((((arr_8 [4]) - 1)), ((min(var_4, (arr_10 [i_1])))))), 0));
                }

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_27 = (var_8 ? (((var_5 + 2147483647) << (((((arr_2 [i_5]) ? 1 : 1390041840)) - 1)))) : (((arr_10 [i_0 - 1]) ? (arr_10 [i_0 - 1]) : (arr_10 [i_0 + 1]))));
                            arr_20 [i_4] [i_1] [i_1] [i_1] = ((1 ? ((var_15 << (!var_11))) : 8176891722217435967));
                            var_28 = ((var_2 ? (arr_1 [i_4]) : 4294967293));
                            var_29 = ((var_1 ? (max((((arr_6 [0]) ? (arr_9 [i_0 + 1]) : 1390041840)), (((8285373642426178077 ? -234792717 : var_4))))) : -var_0));
                            var_30 = (arr_2 [i_1]);
                        }
                        var_31 |= (arr_7 [i_0 + 1] [i_0 + 1]);
                        var_32 = var_9;
                    }

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_33 = (arr_15 [i_0] [i_1] [9] [i_7]);
                        var_34 ^= ((min((max(var_18, var_14)), var_10)) << (((arr_8 [i_7]) - 38)));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_35 += (max(((19 ? ((var_0 ^ (arr_5 [i_0] [i_0] [i_0]))) : 4294967274)), ((((arr_22 [i_9 - 1]) ? (min(20, var_3)) : (((11 ? var_7 : (arr_21 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))))));
                                var_36 = var_18;
                                var_37 = (((((1 ? 8468 : var_0)) * var_9)));
                            }
                        }
                    }
                    var_38 = ((var_1 ? var_15 : (arr_29 [i_0 - 1] [i_0 - 1] [i_0] [1] [i_4])));
                    var_39 -= 127;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_40 = ((((max(var_4, (arr_24 [i_1] [7] [i_10] [9] [i_11])))) >= ((3582169218 ? (1 ^ var_19) : ((var_5 ? var_2 : (arr_14 [i_0] [i_0] [i_0 - 1])))))));

                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_41 = 790992826;
                            arr_42 [i_10] [i_10] = 8461;
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_42 = 3503974470;
                            var_43 = (max((max(-1195035455917327741, (arr_43 [i_1]))), (((var_10 > ((-(arr_8 [i_11]))))))));
                            var_44 = 2904925440;
                            var_45 = (max((((~var_11) ? var_11 : (arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (((((var_5 ? var_3 : 4294967277))) ? ((var_19 ? 23 : (arr_19 [i_0] [i_1] [i_10] [i_11] [i_13]))) : (((39 ? 59452 : (arr_4 [i_13] [i_10] [i_1]))))))));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_46 = (min(var_46, (!13099964736352620523)));
                            var_47 += ((var_2 & ((max(1390041840, var_19)))));
                            var_48 = var_12;
                            arr_47 [i_10] [i_1] [i_10] [i_11] [i_14] [i_14] = var_2;
                        }
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_49 = 3699717255;
                            var_50 = (!(!var_0));
                            var_51 = (~(((arr_37 [i_0 - 1]) ? (arr_37 [i_0 + 1]) : (arr_37 [i_0 + 1]))));
                            arr_52 [i_0] [i_0] [i_0] [i_10] [i_11] [i_0] [i_1] &= ((var_4 ? (((max((arr_44 [i_0 - 1] [i_1] [i_10] [0] [i_0 - 1] [i_1] [i_10]), 212)))) : ((((255 ? 4294967295 : 2004708331)) + (arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15])))));
                        }
                    }
                    for (int i_16 = 3; i_16 < 8;i_16 += 1)
                    {
                        arr_55 [i_0] [i_10] [i_10] [7] = 28;
                        var_52 = var_12;
                        var_53 = (max(var_53, var_7));
                        var_54 = (!var_7);
                        var_55 = (min(var_55, ((((max(var_17, var_5)) & ((((1390041846 > (arr_27 [i_0] [i_0 - 1] [i_1] [i_16 + 2] [i_16 + 3]))))))))));
                    }
                    arr_56 [i_10] [i_10] [i_10] [i_0] = ((((((arr_38 [i_0] [i_1] [i_10] [i_10] [i_10]) ? 46962 : var_3))) ? var_16 : (((!(arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                }
            }
        }
    }
    var_56 = var_12;
    var_57 = (!-var_17);
    var_58 = (max(var_58, var_8));
    #pragma endscop
}
