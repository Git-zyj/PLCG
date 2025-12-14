/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_2 ? var_7 : -239))) ? (((~(var_10 <= var_13)))) : ((-(min((-32767 - 1), var_7))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(3929945277, (-32767 - 1)));
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = (((((3929945277 ? var_4 : (min(var_7, (arr_3 [i_1] [i_1])))))) ? (((-8961500234346136637 && (arr_4 [i_1])))) : (!0)));
        var_18 = ((~(((((-(-32767 - 1)))) & var_4))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_19 = ((((max(33, (arr_8 [i_5] [i_4] [i_2]))) >> (((-32767 - 1) - 4294934521)))));
                            var_20 |= (max((((arr_6 [i_5]) ? var_10 : (((-8961500234346136637 + 9223372036854775807) >> (-1419728434 + 1419728478))))), (((98 * (arr_7 [i_1] [i_2] [i_5 + 2] [i_4]))))));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_21 = var_2;
                            var_22 = 238;
                            var_23 = (1 ? 126 : 1);
                            var_24 = (((((min(var_8, (arr_7 [i_1] [i_2] [i_3] [i_6]))))) ? (((((var_7 ? 3072 : 18))) ^ var_7)) : var_0));
                            var_25 = (arr_13 [i_2] [i_2] [i_3] [i_4] [i_4] [i_3]);
                        }
                        var_26 = (((arr_13 [i_1] [i_3] [i_3] [i_4] [i_4] [i_1]) ? ((((-(arr_15 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]))))) : (arr_7 [i_1] [i_2] [i_3] [i_4])));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_27 = (((max((arr_5 [i_7] [i_7]), (arr_4 [i_7]))) - (255 + 4294967295)));
        var_28 = ((((arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ^ (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_29 = var_10;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_30 = var_0;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_31 += ((((min((((arr_24 [i_11] [i_8]) ? var_5 : var_5)), ((365022019 | (arr_17 [i_7])))))) ? (var_12 != var_12) : ((62464 ? (arr_3 [i_10 + 1] [i_8]) : (arr_3 [i_11] [i_9])))));
                                var_32 = -6308949327356508344;
                                var_33 = (((((~((98 ? var_8 : -126))))) ? 32761 : (((arr_26 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_8]) * (arr_13 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_8])))));
                                var_34 = (arr_25 [i_7]);
                                var_35 = 16;
                            }
                        }
                    }
                    var_36 = ((153 * ((min(var_12, 1821968525)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            var_37 = (~var_6);

            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_38 = ((3074 ^ (arr_9 [i_12] [i_12] [i_12] [i_12])));
                var_39 = (((arr_25 [i_14]) ? var_7 : var_9));
                var_40 = arr_9 [i_14] [i_14] [i_13] [i_12];
            }
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {
                var_41 = (((arr_5 [i_13] [i_15]) > -8961500234346136637));

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    var_42 = var_11;
                    var_43 = (((arr_5 [i_16] [i_15 - 1]) != 157));
                    var_44 = (arr_22 [i_15 + 1] [i_15 - 2] [i_15] [i_15 - 2]);
                }
            }
            var_45 = var_6;
            var_46 = (arr_29 [i_13]);
            var_47 ^= (((arr_30 [i_13] [i_12]) | 13));
        }
        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
        {
            var_48 = -1401998049;
            var_49 = (arr_37 [i_12]);
            var_50 = (((3072 ? (-2147483647 - 1) : (arr_39 [i_12] [i_12] [i_12] [i_17]))));
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            var_51 = (min(var_51, ((((arr_22 [i_18] [i_18] [i_18] [i_12]) ? (-127 - 1) : (arr_8 [i_12] [i_12] [i_12]))))));
            var_52 = -119;
        }
        var_53 &= (((125 - (arr_47 [i_12] [i_12] [i_12]))));

        for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
        {
            var_54 = 1;
            var_55 = (((arr_25 [i_12]) ^ var_0));
        }
        for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    {
                        var_56 *= (((arr_55 [i_12] [i_20] [i_21] [i_22] [i_22]) < (!var_9)));
                        var_57 = (arr_46 [i_20] [i_22]);
                    }
                }
            }
            var_58 += (((1821968525 ? (arr_9 [i_12] [i_12] [i_20] [i_20]) : (arr_12 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) == (((var_2 ? (-32767 - 1) : var_4))));
        }
        for (int i_23 = 0; i_23 < 10;i_23 += 1)
        {
            var_59 = (((arr_18 [i_23] [i_23]) % (arr_18 [i_23] [i_12])));
            var_60 = (((arr_57 [i_12] [i_23] [i_23]) ? var_13 : var_4));
        }
        var_61 = (arr_8 [i_12] [i_12] [i_12]);
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
    {
        var_62 ^= (arr_48 [i_24] [i_24]);
        var_63 = 7261;
        var_64 = (((-1821968520 | 17723314693825371665) ? var_4 : (((-8961500234346136619 + 9223372036854775807) >> (arr_34 [i_24] [i_24] [i_24] [i_24])))));
    }
    var_65 = var_3;
    #pragma endscop
}
