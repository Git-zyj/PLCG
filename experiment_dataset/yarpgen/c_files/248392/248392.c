/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_17;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [9] [i_1] [9] = 0;
                    var_19 = ((~(((((-1839304579 ? var_11 : 1184332576))) & ((-1839304598 ? -1839304579 : var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 3] [i_1] [i_1] [i_2] [i_1] [4] [i_4] = (((!(arr_12 [i_3] [i_0 - 3] [9]))));
                                var_20 = (1839304562 == var_12);
                                var_21 &= ((+((((arr_0 [i_0 - 2]) != 66)))));
                                var_22 = (((-9223372036854775807 - 1) * 0));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = (max((arr_5 [i_0 - 3] [11] [i_0]), -var_11));
        var_23 = (min(-1, 1));
        var_24 |= (((((65472 ? var_10 : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1])))) ? (((190 ? var_10 : var_4))) : ((var_17 ^ ((var_7 ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0 - 3] [i_0] [i_0])))))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_25 = ((233 ? (max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5]))) : 182));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_26 = ((var_7 < ((((arr_3 [i_5] [i_5] [0]) < (((0 ? (arr_12 [9] [i_7] [11]) : (arr_22 [i_5])))))))));
                            var_27 *= (max(((((var_9 ? var_17 : 2581656293668810258)))), var_15));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (((((var_0 + 2147483647) >> (57467 == var_9))) >= (((var_12 && (arr_5 [i_5] [i_6 + 3] [5]))))))));
                            var_29 = 9;
                            var_30 = ((((var_12 == ((max(var_7, 1))))) ? var_14 : ((((min(-1839304582, 78)))))));
                            arr_31 [i_5] [i_10] [i_7] [i_8] [i_5] = 62;
                        }
                        var_31 = 14080015058128839886;
                        var_32 = (min(var_32, 15));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 8;i_12 += 1)
                        {
                            var_33 = ((!(arr_10 [i_6] [i_7] [i_7] [i_7])));
                            var_34 = ((((23329 ? -1839304552 : 242)) != var_1));
                            var_35 = (arr_25 [i_5] [i_6] [i_6] [6] [i_12 - 3] [i_6 + 3]);
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 8;i_13 += 1)
                        {
                            var_36 = arr_10 [0] [i_6] [i_7 + 1] [i_7 + 1];
                            var_37 = (min(var_37, var_13));
                            var_38 = var_15;
                            var_39 = (!var_7);
                            var_40 = ((var_14 != ((((var_4 != (arr_39 [i_5] [i_5] [i_7] [i_5] [i_5])))))));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_41 = (!-14);
                            var_42 = (-5296326779141261770 != 10026923365046598803);
                            var_43 = (((((177 + var_7) >> (var_14 - 3116025981316519187))) == 0));
                            var_44 = (max(var_44, (arr_22 [i_11])));
                            var_45 = (((((!(arr_0 [i_6 + 1])))) || ((((arr_40 [6] [i_7 + 1] [i_6 - 1] [6] [i_14]) ? var_8 : (arr_40 [i_6] [i_7 + 1] [i_6 + 3] [5] [i_6 + 3]))))));
                        }
                        arr_44 [i_5] [i_7] [i_6] [i_5] = (((((1536040102509976042 == (((max((arr_39 [i_5] [i_5] [5] [i_5] [i_11]), (arr_28 [2] [i_5] [i_6] [i_6] [i_7 + 1] [i_6] [i_6])))))))) >> (((var_1 || ((!(arr_39 [i_5] [i_5] [i_7] [i_5] [i_5]))))))));
                        var_46 = ((((min(1, (arr_28 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1] [i_7 - 1])))) ? (((~(max(var_16, var_15))))) : (arr_42 [i_5] [i_6] [7] [9])));
                        arr_45 [i_6] &= ((((((arr_4 [i_5] [i_6] [i_7]) ? (arr_6 [i_6] [11] [11]) : 1))) ? (max((((var_5 ? var_5 : (arr_20 [i_5] [i_11])))), ((14080015058128839886 ? (arr_26 [i_11] [i_11] [9] [i_7] [i_6 + 1] [i_5] [i_5]) : 255)))) : (var_4 >= var_11)));
                    }

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_50 [i_5] = (((arr_1 [i_5] [i_6 + 3]) ? var_2 : 4467570830351532032));

                        for (int i_16 = 1; i_16 < 8;i_16 += 1)
                        {
                            arr_55 [i_5] [i_5] [6] [i_15] [i_16 + 2] = var_1;
                            var_47 = ((~(arr_9 [i_16 + 1] [i_6 + 3])));
                            var_48 |= (arr_29 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]);
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_49 = var_1;
                            var_50 = (min(var_50, 1));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_5] [i_5] [i_7] [0] [i_5] [9] = var_3;
                            arr_63 [i_5] [i_6] [i_5] [i_5] [i_6] = (arr_49 [i_5] [i_6 + 2]);
                            arr_64 [i_5] [i_15] [i_7] [i_7] [i_6] [i_5] = (arr_12 [i_5] [i_5] [2]);
                            var_51 = (min(var_51, (((-(var_17 ^ var_11))))));
                        }
                        var_52 ^= var_15;
                    }
                }
            }
        }
        var_53 = ((-1 < (((max((arr_12 [10] [i_5] [8]), var_6)) & (arr_5 [i_5] [i_5] [i_5])))));
    }
    #pragma endscop
}
