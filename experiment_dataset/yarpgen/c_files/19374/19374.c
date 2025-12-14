/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((var_10 ? var_3 : var_6)))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = var_3;
                            var_18 = var_1;
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] = ((((((var_12 ? var_7 : var_0))) ? ((var_8 ? var_11 : var_4)) : ((var_0 ? var_11 : var_4)))));
                            var_19 = (min(var_19, (((((((((var_11 ? var_13 : var_2))) ? ((var_1 ? var_7 : var_5)) : var_10))) ? ((((var_4 ? var_7 : var_13)))) : var_15)))));
                        }

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = ((((((((var_11 ? var_1 : var_6))) ? (((var_6 ? var_13 : var_12))) : var_7))) ? ((((var_6 ? var_3 : var_3)))) : var_9));
                            var_21 ^= ((((var_7 ? ((var_7 ? var_15 : var_2)) : var_7))) ? ((var_2 ? ((var_3 ? var_5 : var_7)) : var_7)) : var_6);
                            arr_14 [i_5] [i_5] [i_5] [15] [i_5] [i_5] &= ((((((var_9 ? var_3 : var_1))) ? var_13 : ((var_4 ? var_12 : var_13)))));
                            var_22 = var_3;
                            arr_15 [i_3] = (((((((var_12 ? var_11 : var_4))) ? var_10 : var_0))) ? ((((((var_6 ? var_6 : var_6))) ? var_14 : ((var_2 ? var_9 : var_11))))) : (((((var_12 ? var_15 : var_2))) ? ((var_12 ? var_3 : var_9)) : (((var_13 ? var_13 : var_2))))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_6] [i_6] = (((((var_13 ? var_0 : var_10))) ? (((((var_5 ? var_2 : var_7))))) : (((((var_0 ? var_8 : var_13))) ? ((var_13 ? var_4 : var_10)) : var_4))));
                            var_23 = (((((((var_8 ? var_13 : var_7))) ? var_11 : ((var_2 ? var_7 : var_1))))) ? (((((var_13 ? var_5 : var_10))) ? var_15 : ((var_2 ? var_7 : var_11)))) : (((((var_14 ? var_1 : var_11))) ? ((var_1 ? var_14 : var_8)) : ((var_12 ? var_15 : var_7)))));
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            var_24 = (max(var_24, var_12));
                            var_25 ^= ((((var_11 ? var_15 : var_14))));
                            var_26 ^= (((var_7 ? ((var_3 ? var_9 : var_10)) : var_7)));
                        }
                        var_27 = ((((((((var_6 ? var_13 : var_9))) ? (((var_7 ? var_13 : var_15))) : var_3))) ? var_1 : ((var_14 ? ((var_10 ? var_7 : var_8)) : var_9))));
                        var_28 = var_12;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9] = var_9;
                            arr_29 [i_2] [i_1] [i_1] &= (((((var_13 ? var_12 : var_5))) ? var_0 : var_3));
                            var_29 = ((var_15 ? (((((var_11 ? var_3 : var_12))) ? var_3 : (((var_0 ? var_9 : var_4))))) : var_4));
                        }
                        var_30 = ((((((var_11 ? var_9 : var_14)))) ? ((var_3 ? ((var_9 ? var_7 : var_14)) : (((var_5 ? var_9 : var_14))))) : ((((((var_3 ? var_13 : var_0))) ? ((var_6 ? var_14 : var_6)) : var_15)))));
                        var_31 = var_15;
                    }
                    var_32 ^= ((((((((var_8 ? var_2 : var_15))) ? var_14 : var_13))) ? ((((((var_10 ? var_4 : var_2))) ? var_5 : var_4))) : (((((var_9 ? var_9 : var_9))) ? (((var_12 ? var_13 : var_9))) : ((var_14 ? var_10 : var_11))))));
                    var_33 ^= ((((((var_8 ? var_14 : var_5))) ? ((var_8 ? var_9 : var_8)) : (((var_5 ? var_5 : var_9))))));

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_34 = ((((var_3 ? var_2 : var_7))));
                        var_35 = (max(var_35, var_3));
                        arr_33 [i_10] = (((((var_9 ? var_13 : var_3))) ? var_13 : ((var_13 ? var_14 : var_7))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_36 = ((var_14 ? (((var_2 ? var_9 : var_5))) : ((var_13 ? var_7 : var_8))));
                        arr_37 [i_11] [i_2] [i_2] [i_11] = ((var_2 ? (((var_14 ? var_5 : var_4))) : ((var_10 ? var_10 : var_4))));
                        var_37 ^= (((((var_7 ? var_15 : var_4))) ? ((var_11 ? var_4 : var_15)) : var_0));
                        arr_38 [i_0] [i_1] [15] [i_0] [i_0] [7] = (((((var_0 ? var_15 : var_9))) ? var_5 : var_15));
                    }
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        arr_41 [i_12 + 2] [i_2] [i_1] [i_0] = ((var_10 ? var_12 : var_7));
                        var_38 = (min(var_38, var_5));
                        var_39 ^= ((var_7 ? (((((var_0 ? var_15 : var_0))) ? ((var_2 ? var_8 : var_7)) : (((var_0 ? var_6 : var_9))))) : ((((((var_6 ? var_11 : var_12))) ? var_0 : var_12)))));
                        arr_42 [i_12] [i_2] [i_2] [i_1] [i_0] [i_0] = ((((var_7 ? var_13 : var_0))));
                    }
                }
            }
        }
        var_40 = var_13;

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_41 = var_11;
            var_42 &= ((((var_12 ? var_15 : var_14))));
            var_43 = (((var_6 ? ((var_14 ? var_3 : var_1)) : (((var_1 ? var_1 : var_5))))));
            arr_47 [i_0] = (((((var_6 ? var_11 : var_5))) ? ((((var_3 ? var_5 : var_14)))) : var_9));
        }

        for (int i_14 = 2; i_14 < 15;i_14 += 1)
        {
            var_44 = ((((((var_6 ? var_12 : var_13)))) ? var_15 : var_8));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_45 &= ((((((var_13 ? var_0 : var_3)))) ? (((((var_2 ? var_2 : var_8))) ? var_4 : var_9)) : (((((var_4 ? var_1 : var_12)))))));
                        arr_54 [i_0] [i_15] [i_15] [i_0] [i_15] [i_0] &= ((((((var_5 ? var_15 : var_13))) ? var_9 : ((var_8 ? var_6 : var_14)))));
                        var_46 = ((((((((var_7 ? var_1 : var_0))) ? ((var_0 ? var_6 : var_4)) : var_11))) ? var_13 : ((var_2 ? (((var_5 ? var_4 : var_5))) : ((var_6 ? var_10 : var_1))))));
                        var_47 = var_9;
                        arr_55 [i_15] [i_16] = (((((var_11 ? ((var_3 ? var_10 : var_14)) : (((var_12 ? var_12 : var_13)))))) ? (((((var_8 ? var_2 : var_15))))) : ((var_9 ? var_6 : ((var_0 ? var_9 : var_10))))));
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_48 ^= ((((((var_11 ? var_3 : var_2)))) ? ((((var_1 ? var_9 : var_10)))) : var_10));

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    var_49 = var_13;
                    var_50 ^= ((((((var_12 ? var_7 : var_2))) ? var_13 : var_3)));
                    var_51 &= var_10;
                    var_52 ^= ((((((((var_13 ? var_9 : var_2))) ? var_1 : ((var_4 ? var_14 : var_13))))) ? ((var_6 ? ((var_5 ? var_8 : var_12)) : ((var_15 ? var_15 : var_8)))) : ((var_1 ? var_8 : var_9))));
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {

                    for (int i_21 = 3; i_21 < 14;i_21 += 1)
                    {
                        var_53 = (((((var_15 ? var_10 : var_12))) ? var_6 : ((var_6 ? var_12 : var_13))));
                        var_54 = var_7;
                    }
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        var_55 = (max(var_55, (((var_6 ? var_8 : var_12)))));
                        var_56 = (min(var_56, var_13));
                        var_57 = ((((var_13 ? var_5 : var_11))) ? ((var_6 ? var_1 : var_3)) : (((var_1 ? var_15 : var_4))));
                        arr_68 [i_22] [i_20] [i_18] [i_17] [i_0] = var_8;
                        arr_69 [i_22] [i_20] [i_18] = (((((var_3 ? var_13 : var_0))) ? ((var_4 ? var_9 : var_2)) : var_5));
                    }
                    for (int i_23 = 1; i_23 < 16;i_23 += 1)
                    {
                        arr_72 [i_0] [i_23] [i_18] [i_18] [i_0] [i_20] [i_23] = ((var_3 ? ((var_0 ? var_8 : var_0)) : (((var_3 ? var_9 : var_10)))));
                        var_58 = (((((var_5 ? var_3 : var_7))) ? var_10 : var_12));
                        var_59 = (min(var_59, ((((((var_4 ? var_10 : var_3))) ? ((var_14 ? var_8 : var_13)) : var_12)))));
                    }
                    var_60 ^= (var_2 ? ((var_10 ? var_4 : var_10)) : ((var_15 ? var_10 : var_10)));

                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        var_61 ^= (((var_8 ? var_8 : var_6)));
                        var_62 ^= ((var_8 ? (((var_4 ? var_9 : var_15))) : var_8));
                        arr_76 [i_0] [i_0] [i_17] [i_20] [i_24] = var_14;
                        var_63 ^= var_14;
                    }
                }
                var_64 = (min(var_64, var_2));
                arr_77 [i_0] [i_17] [i_17] = var_3;
            }
            var_65 = ((((var_15 ? var_5 : var_14))) ? (((var_11 ? var_6 : ((var_5 ? var_15 : var_0))))) : (((var_8 ? var_11 : var_3))));
        }
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 21;i_25 += 1)
    {
        var_66 = ((var_1 ? ((var_5 ? var_7 : var_0)) : (((var_0 ? var_6 : var_9)))));
        arr_81 [19] [i_25] = var_2;
        var_67 = (min(var_67, ((((((var_9 ? var_7 : var_1))) ? ((var_0 ? var_9 : var_9)) : ((var_3 ? var_4 : var_11)))))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 18;i_26 += 1)
    {
        arr_86 [i_26] = ((var_3 ? (((var_4 ? var_2 : var_1))) : ((var_3 ? var_8 : var_10))));
        arr_87 [i_26] = ((var_10 ? ((var_2 ? var_11 : var_5)) : var_7));
        var_68 = var_14;
        arr_88 [i_26] [i_26] = (((((var_8 ? var_12 : var_6))) ? ((var_4 ? var_14 : var_3)) : var_1));
    }
    var_69 = (((((((var_7 ? var_5 : var_15))) ? ((var_12 ? var_14 : var_14)) : var_4))) ? ((((((var_12 ? var_4 : var_4))) ? var_0 : var_13))) : (((((var_9 ? var_6 : var_3))) ? var_8 : ((var_6 ? var_15 : var_7)))));
    var_70 ^= ((((((var_7 ? var_4 : var_7))) ? (((var_9 ? var_15 : var_15))) : ((var_15 ? var_14 : var_8)))));
    var_71 &= ((((((((var_8 ? var_7 : var_12))) ? var_6 : ((var_15 ? var_5 : var_5))))) ? (((((var_7 ? var_1 : var_10))) ? ((var_14 ? var_8 : var_3)) : (((var_4 ? var_12 : var_12))))) : (((var_14 ? var_13 : ((var_7 ? var_1 : var_14)))))));
    #pragma endscop
}
