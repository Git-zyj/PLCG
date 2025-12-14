/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((11619089525644209780 + var_3), (var_7 + var_6))) >= var_1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        arr_3 [i_0] = ((1400250885148407591 ? var_7 : var_0));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = ((var_8 ? (arr_9 [i_0] [i_2 - 1]) : (arr_8 [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                        var_15 = ((var_12 ? var_12 : 10451531812342831745));
                        arr_14 [i_0] [i_0] [i_2] [i_0] = (((((var_4 ? var_9 : -6760846828336028596))) ? (((arr_4 [i_0]) ^ 4095)) : ((((!(arr_8 [1] [i_2] [i_1] [i_0])))))));
                        arr_15 [i_0] [i_2] = (var_6 ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_0 - 1]) : var_6);
                    }
                }
            }
            var_16 = ((var_2 ? (arr_12 [i_0 - 1]) : (arr_12 [i_0 - 1])));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_17 = (((((var_11 ? var_7 : var_11))) / var_2));
                            arr_25 [i_0] [i_0] [i_0] [i_6] [i_7] = (var_0 ? (arr_24 [i_0] [1] [i_5 + 1] [i_6 - 1] [i_0 - 2]) : (arr_1 [i_0]));
                        }
                    }
                }
            }
            arr_26 [i_0] [i_4] = ((var_1 ? (arr_10 [i_0]) : (arr_10 [i_0])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_18 = 0;
                    arr_35 [i_0] = (((((var_12 ? (arr_7 [8] [8] [i_9] [i_9]) : 23272))) ? var_8 : var_0));
                    arr_36 [i_10] [i_0] [i_8] [i_0] [i_0] = ((var_0 ? (arr_5 [i_0]) : (arr_33 [i_0] [i_0] [7] [i_0] [i_0] [i_0 + 1])));
                    var_19 = ((var_12 ? var_4 : ((var_4 ? var_7 : (arr_8 [i_10] [i_0] [1] [i_0])))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        var_20 = ((-var_11 ? var_5 : (var_6 / var_11)));
                        arr_44 [i_0] [i_8] [i_8] [i_11] [1] = var_6;
                        var_21 = ((var_9 ? var_3 : var_4));
                    }
                    for (int i_13 = 3; i_13 < 17;i_13 += 1)
                    {
                        arr_47 [i_0] [13] [i_9] [13] = (((arr_13 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 2]) - (arr_13 [i_0] [i_0 + 1] [i_0] [i_0 - 2])));
                        arr_48 [i_0] [16] [i_0] [i_0] [i_13 + 1] = var_7;
                    }
                    var_22 = (((arr_20 [i_0 - 1]) ^ (var_12 ^ 7995212261366719860)));
                    var_23 = ((142 ? 419384410221804080 : 23272));
                    arr_49 [i_0] = var_0;
                    arr_50 [i_11] [i_0] [i_0] [i_0] = (((arr_38 [i_0 + 2] [i_0 + 1] [i_0] [i_0]) ? var_12 : var_11));
                }
                var_24 = ((var_12 ? var_3 : var_11));
                arr_51 [i_8] [i_0] = 419384410221804104;
            }
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                arr_56 [i_0] [i_0] = (((55819 / var_5) + (arr_31 [i_8] [i_0] [i_14 + 1] [14] [i_0 + 2])));

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_59 [i_0] [i_0] [i_14 + 1] [i_0] = (((arr_30 [i_14 + 1]) ? var_12 : var_9));
                    var_25 = (arr_52 [i_14 + 1] [i_15]);

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_62 [i_0] [i_8] [i_0] [i_8] [i_15] [i_8] [i_0] = 11619089525644209780;
                        arr_63 [i_0] [i_0] [i_14] [i_8] [i_14] = (59 >= var_11);
                    }

                    for (int i_17 = 1; i_17 < 16;i_17 += 1) /* same iter space */
                    {
                        arr_66 [0] [i_8] [0] [i_15] [i_0] = ((~((~(arr_65 [i_15] [i_15] [i_15] [i_14] [i_14] [i_17] [i_14])))));
                        arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17 - 1] [i_17 - 1] = var_12;
                        var_26 = 3780010987348308857;
                    }
                    for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
                    {
                        var_27 = ((var_2 ? var_10 : var_2));
                        var_28 = ((((var_5 >> (10451531812342831773 - 10451531812342831765))) >> (((var_5 & var_2) - 118))));
                    }
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        var_29 = ((var_6 ? var_0 : ((((var_3 >= (arr_43 [i_0] [i_8] [i_0] [17])))))));
                        arr_73 [6] [i_8] [i_15] [i_15] [i_19] [i_15] [i_0] = ((var_6 ? (arr_4 [i_0]) : (arr_4 [i_0])));
                        arr_74 [i_0] [12] [15] [15] = (arr_19 [i_0 - 2] [i_14 + 1]);
                    }
                    for (int i_20 = 2; i_20 < 16;i_20 += 1)
                    {
                        var_30 = var_5;
                        arr_77 [i_0] [i_8] [i_0] [i_0] [i_0] = (((arr_70 [i_0] [i_8] [i_14 + 1]) ? var_1 : ((10451531812342831754 ? 61 : var_7))));
                        var_31 = ((var_5 ? var_9 : (arr_58 [i_0])));
                        var_32 = (((arr_53 [i_20 - 1] [i_14 + 1] [i_0 + 2] [i_0 - 2]) ? 419384410221804083 : (arr_53 [i_20 - 2] [i_14 + 1] [i_0 - 2] [i_0 - 1])));
                    }
                    arr_78 [i_0] = var_10;
                }
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    var_33 = ((var_6 ? var_12 : (arr_40 [i_14 + 1] [i_14] [4] [i_14] [1] [i_14])));
                    arr_82 [i_0] [i_0] [i_14] [i_21] = ((-23261 ? 58917 : 419384410221804106));
                    arr_83 [i_0] [i_21] [i_14] [i_21] = ((var_5 ? (var_8 || var_2) : var_6));
                }
            }
            var_34 = (((((1 ? var_10 : var_3))) ? (arr_4 [i_0]) : var_3));

            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                arr_87 [i_0] [i_22] = 7995212261366719876;
                arr_88 [i_0] [i_8] [i_8] [i_0] = ((var_8 >= (arr_9 [i_0] [i_0])));
            }
        }
        var_35 = ((arr_64 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) >= var_11);
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        var_36 = ((var_4 ? (arr_91 [i_23]) : var_7));
        var_37 = ((var_5 ? var_5 : (68 / var_2)));
        var_38 = ((var_7 || var_0) ? (((var_4 ? var_9 : var_1))) : (((arr_91 [i_23]) ? 10451531812342831745 : (arr_90 [i_23]))));
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 17;i_24 += 1)
    {
        var_39 = 1;
        var_40 = ((var_10 ? (arr_33 [10] [i_24] [i_24] [i_24] [i_24] [i_24]) : var_9));
        var_41 = (((var_9 + var_0) - (var_12 ^ var_11)));
        var_42 = (arr_79 [i_24] [i_24] [i_24] [i_24]);
    }
    #pragma endscop
}
