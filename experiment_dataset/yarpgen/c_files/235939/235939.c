/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((((var_9 ^ 65535) ? ((65535 ? var_16 : 65526)) : 65532)), ((max((!var_12), 9)))));
    var_21 = (max((min(((min(13, var_14))), ((var_12 ? 1 : 0)))), ((min(65526, 0)))));
    var_22 = (max(var_3, ((((~0) && var_1)))));
    var_23 |= var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] &= (arr_0 [i_0]);
        arr_3 [0] &= var_6;
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] = (((((((var_12 ? 0 : 1))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [4] [4]) : var_0)) : 18)) != 4));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_15 [9] [i_2] [i_2] = (arr_1 [i_1 + 1] [i_1 + 1]);
                    arr_16 [i_2] = (((arr_1 [i_1 - 3] [i_1 - 3]) ? (19 != 4) : (arr_8 [i_1] [i_1 - 3])));
                    arr_17 [5] [i_1] [i_1] [i_1 - 2] = var_8;
                }
                var_24 = (arr_12 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 2] [i_1]);
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_25 = (((((65526 ? (arr_13 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1]) : (arr_13 [i_1 + 1] [i_1] [i_1] [i_1 - 4] [i_1])))) ? ((65517 ? var_11 : (arr_13 [7] [i_0] [i_0] [i_1 - 4] [i_4]))) : ((65535 ? 65535 : 65535))));
                arr_22 [i_0] [i_0] [i_0] = var_19;
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_26 = (max(var_26, (8 % var_3)));
                    var_27 = var_1;
                }
                var_28 = (min(((((min(0, 65533))) || var_19)), ((!(((65514 ? var_8 : 0)))))));
            }
            arr_29 [i_0] = ((((max(var_13, var_12))) ? (min(0, var_15)) : (((0 ? 65517 : 65535)))));
            arr_30 [i_1] = (+(((65517 >= (((arr_12 [i_0] [i_0] [i_1 - 3] [i_1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1] [i_1 - 3] [i_1] [i_0] [i_0]) : var_6))))));

            /* vectorizable */
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                var_29 = 0;
                arr_34 [i_7 - 1] = ((-(arr_31 [i_1] [i_7])));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                var_30 = (min(var_30, ((((arr_33 [i_1 - 2] [i_1 - 2] [i_1]) ? (arr_31 [6] [i_1 + 2]) : (arr_31 [i_1] [i_1 - 3]))))));
                arr_37 [i_0] [i_1] [i_8 + 2] [i_8] = arr_19 [i_8] [i_1];
                arr_38 [i_0] &= (var_4 && var_18);
                arr_39 [i_0] [i_0] = ((var_19 ? (arr_7 [i_1 - 4]) : var_14));
            }
            var_31 += (min(((max(((max(11, 0))), (~7)))), var_10));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_42 [i_9] [i_9] [i_9] = (max(((max(65527, 1))), ((-((max(var_11, 11)))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 7;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_32 = ((65527 ? 65516 : 65535));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((max(var_6, (min(65535, 65535)))), 65511));
                            var_33 = (min((max((max(var_15, 65525)), (((65527 ? var_13 : 13))))), (((65535 >> ((((var_11 >> (65529 - 65528))) - 23474)))))));
                            var_34 = (min(var_17, ((65529 ? 0 : 65524))));
                        }
                    }
                }
            }
            var_35 = (max(var_35, 24));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            arr_56 [i_13] = 65522;

            for (int i_14 = 2; i_14 < 10;i_14 += 1)
            {
                var_36 = ((-(var_6 <= var_10)));
                var_37 = (((var_7 || var_10) <= (arr_10 [i_14 - 2] [i_14] [i_14 + 1])));
            }
            var_38 = (((arr_60 [i_0]) ? (((arr_9 [i_0] [i_0]) - 65527)) : ((65511 ? var_2 : (arr_6 [i_13] [i_13] [0])))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                arr_67 [2] [0] [i_16] = ((var_18 > (arr_33 [i_0] [i_15] [i_16])));
                var_39 = 3;
            }
            for (int i_17 = 2; i_17 < 8;i_17 += 1)
            {
                arr_70 [i_0] [i_15] [i_15] [i_17] = (((!var_10) ? 3 : (arr_7 [i_15])));

                for (int i_18 = 3; i_18 < 9;i_18 += 1)
                {
                    arr_75 [i_0] [i_15] [i_17] [8] = 7;
                    var_40 *= var_12;

                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_41 = (((((0 ? 18 : 6))) ? 65530 : 4));
                        var_42 |= var_5;
                        var_43 = 14;
                        arr_79 [i_0] [i_0] [i_15] [i_17] [i_15] [i_18] [i_19] = ((65527 ? 0 : 8));
                    }
                    var_44 = ((~65527) ? 65490 : (!65522));
                }

                for (int i_20 = 4; i_20 < 10;i_20 += 1)
                {
                    var_45 &= ((~((5 ? (arr_19 [i_0] [i_17]) : (arr_66 [i_0] [i_15] [i_17] [i_20])))));
                    var_46 = ((~(arr_6 [i_20 + 1] [5] [i_20])));
                    arr_82 [i_0] [i_15] [i_17 + 1] [i_17] [i_20] = ((var_15 ? (arr_78 [i_17 - 2] [i_20] [10] [i_20 - 4] [2]) : ((var_18 ? 65498 : var_18))));
                    var_47 = 65498;
                    var_48 &= var_9;
                }
            }
            var_49 = 65535;
            arr_83 [i_0] = (arr_52 [i_15] [i_0]);
        }
    }
    #pragma endscop
}
