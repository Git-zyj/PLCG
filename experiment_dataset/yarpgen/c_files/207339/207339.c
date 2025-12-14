/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, (((-(max((max(var_11, var_7)), (max(var_17, var_7)))))))));
        arr_3 [i_0] = ((~(-32767 - 1)));
        arr_4 [i_0] = (((var_19 ? -var_3 : -680)));
        var_21 ^= ((-(max(var_12, (((var_7 ? var_17 : var_9)))))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_22 ^= ((~(max(var_18, ((var_13 ? var_19 : 0))))));

            for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [12] [i_0] [i_2] [i_1] |= (max(((max(var_19, var_19))), (~var_3)));
                    arr_14 [i_2] = ((max(var_8, var_4)));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_23 = (min(var_23, var_14));
                    var_24 = ((var_6 > (~var_6)));
                }
                arr_17 [i_0] [i_1] [i_2 - 1] [i_2] = (max(var_18, (max(var_4, var_3))));
            }
            for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
            {
                var_25 = (max(((max(var_17, var_4))), (max(var_11, var_19))));
                var_26 *= (max(var_1, -var_10));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_25 [i_6] [i_1 + 1] [i_1] [i_0] = var_5;
                var_27 = (((((((var_0 >> (var_7 - 12476378402787861008)))))) ^ -var_6));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_32 [i_7] [i_7] [i_6] [i_1] [i_7] = var_19;
                            var_28 = var_0;
                            var_29 *= (max((!var_3), (max((max(var_11, var_18)), var_4))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_30 = ((~((~(60653 * 1)))));
                            var_31 = (max(var_18, (!var_1)));
                            var_32 = ((max(((var_12 ? var_15 : -8073)), -var_16)));
                            arr_39 [i_0] [12] [i_0] = ((var_2 ? (((!var_15) ? var_6 : (max(var_2, 1186279912276392176)))) : var_17));
                            var_33 = (var_15 ? ((max(var_10, var_17))) : (max(var_2, var_11)));
                        }
                    }
                }
            }
            var_34 ^= ((((!((max(var_14, var_18)))))));
            arr_40 [9] [i_1] = max(var_5, ((max(var_17, var_19))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_35 = (~var_3);

            for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
            {
                var_36 ^= ((var_10 << (var_5 - 8751)));
                arr_45 [i_0] [12] [i_12] = (var_4 - var_13);
                var_37 -= var_5;
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
            {
                var_38 = ((var_7 ? var_4 : var_6));
                arr_48 [i_0] [i_0] [i_0] = (var_2 ^ var_16);
            }
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                arr_51 [9] [i_0] [i_0] = var_19;
                var_39 += var_5;
                var_40 |= var_18;
                arr_52 [1] [1] [i_14 + 2] = ((var_17 ? var_16 : (~var_15)));
                var_41 += var_15;
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_42 = ((var_1 ? var_4 : var_10));
                arr_55 [i_0] [i_11] [i_15] [i_15] = var_16;
                var_43 = (~var_5);
            }
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_44 += ((((((max(65535, 0)))) == var_0)));
            var_45 = (!var_4);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 15;i_18 += 1)
                {
                    {
                        arr_66 [8] [i_16] [i_18 + 1] = (max((max(var_0, ((max(4294967293, 3532983989874603892))))), var_8));
                        arr_67 [8] [14] [i_0] [i_0] = (max((max((((1037815366 ? var_13 : 15664))), var_11)), (((!(!var_8))))));
                        var_46 -= (max((var_7 | var_1), (max(var_3, var_10))));

                        for (int i_19 = 3; i_19 < 15;i_19 += 1)
                        {
                            arr_70 [i_16] [i_16] = (((!-4094) >= 18446744073709551613));
                            var_47 = (max((!var_19), (max(((var_8 ? var_16 : var_13)), ((max(var_5, var_19)))))));
                            var_48 = var_2;
                            arr_71 [8] [i_16] [i_17] [12] [i_19] = (max((~var_13), var_7));
                        }
                        for (int i_20 = 0; i_20 < 16;i_20 += 1)
                        {
                            var_49 = ((+(max((~var_11), var_10))));
                            var_50 = ((!(((var_18 ? var_3 : var_18)))));
                        }
                    }
                }
            }
            var_51 ^= (max(65408, 109));
            arr_74 [10] [i_16] = var_12;
        }
    }
    for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
    {
        var_52 = max((max(var_12, var_3)), var_10);
        var_53 = ((!((max(((46426 ? -8 : -1267241730720658600)), var_15)))));
    }
    for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
    {
        var_54 = (((max(235, var_10))));
        var_55 = ((max((max(var_15, var_3), -var_16))));
        var_56 = -var_12;
    }

    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {
        var_57 = (max((((!(var_10 || var_1)))), (max(var_7, var_18))));
        var_58 = (max(var_58, (var_0 == 4294967295)));
        var_59 = (max(var_0, 0));
        var_60 = (((max(var_18, var_6)) >> (((var_17 ? var_15 : 1)))));
    }
    var_61 |= ((~(~var_5)));
    var_62 |= (max(var_7, ((max((((~(-32767 - 1)))), 9223372036854775807)))));
    #pragma endscop
}
