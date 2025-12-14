/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min((min(var_16, var_14)), (min(var_6, (max(var_4, var_3))))));
        arr_4 [i_0] = (min(((var_5 ? var_1 : var_0)), (max(var_4, var_6))));
        arr_5 [i_0] = (max(((min(var_5, var_9))), (max((((var_14 ? var_12 : var_14))), (min(var_11, var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 -= ((var_10 ? var_6 : var_13));
            arr_11 [i_2] = ((var_2 ? var_7 : var_0));

            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_21 += ((var_17 ? var_12 : var_16));
                    var_22 += var_8;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [i_5] [i_1] [3] [1] [i_1] = ((var_12 ? var_16 : var_10));
                    var_23 = ((var_18 ? var_18 : var_11));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_24 = ((16 ? 35259 : -30957));
                    var_25 = var_11;
                    arr_22 [i_6] [14] [13] [7] [9] = ((var_9 ? var_16 : ((var_4 ? var_15 : var_0))));
                    arr_23 [13] [i_2] [i_3] [8] [i_6] [i_6] = var_1;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_26 += var_3;
                        var_27 = var_15;
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_28 &= ((var_9 ? var_13 : var_0));
                        var_29 -= ((((var_12 ? var_11 : var_1))) ? var_10 : var_8);
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_30 = var_15;
                        arr_30 [i_6] [i_6] [i_3] [i_3] [i_3] = var_6;
                    }
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_38 [i_11] [i_10] [i_3] [i_2] [i_1] = (var_6 ? var_14 : var_14);
                        var_31 = (max(var_31, (((35268 ? -6397344966870699567 : 3043060008)))));
                        var_32 &= var_14;
                    }
                    arr_39 [i_10] [i_10] [i_3] [i_3] [i_2] [i_1] = ((var_11 ? var_15 : var_11));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_33 = var_13;
                        var_34 = ((var_3 ? var_8 : var_17));
                        var_35 += var_6;
                        arr_42 [i_12] [i_12] [i_12] [1] [i_12] = ((var_12 ? var_12 : var_15));
                    }
                    for (int i_13 = 2; i_13 < 12;i_13 += 1)
                    {
                        arr_46 [i_1] [i_1] [i_3] [i_1] [15] = ((var_18 ? var_10 : ((var_16 ? var_10 : var_11))));
                        var_36 ^= var_6;
                        arr_47 [i_1] [i_2] [i_3] [i_10] [i_13] = var_8;
                        arr_48 [i_1] [i_2] [i_3] = (var_5 ? var_12 : var_18);
                    }
                    var_37 = ((6397344966870699556 ? 1354029284 : -31440));
                }
                var_38 *= ((var_16 ? var_4 : var_18));

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    var_39 *= var_15;
                    var_40 = var_16;
                    var_41 -= var_0;
                }
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
            {
                arr_55 [i_1] [i_2] [i_15] = ((var_4 ? var_16 : var_9));
                var_42 = (min(var_42, var_7));

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {

                    for (int i_17 = 2; i_17 < 13;i_17 += 1)
                    {
                        var_43 = (min(var_43, var_15));
                        var_44 = ((var_9 ? var_18 : var_12));
                        var_45 += ((var_16 ? var_7 : var_3));
                        var_46 = (max(var_46, var_11));
                    }
                    var_47 = (min(var_47, var_10));
                    arr_61 [i_1] [i_15] [i_1] = var_16;
                    var_48 = (max(var_48, var_7));
                }
            }
        }
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            var_49 = ((var_0 ? var_12 : var_4));
            arr_64 [i_1] = ((var_9 ? var_13 : var_18));
        }
        arr_65 [i_1] = ((var_3 ? var_8 : var_17));

        for (int i_19 = 4; i_19 < 15;i_19 += 1) /* same iter space */
        {

            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                arr_72 [i_20] [i_20] [i_20] = ((var_4 ? var_1 : var_7));

                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    var_50 = (min(var_50, (((var_18 ? var_17 : var_1)))));
                    arr_76 [i_21 + 1] [i_19] = ((var_11 ? var_18 : var_7));
                }
                var_51 = (min(var_51, (((var_2 ? ((var_10 ? var_11 : var_10)) : var_3)))));
                var_52 = (min(var_52, var_12));
            }
            arr_77 [i_1] [i_1] [i_19] = var_10;
            var_53 = var_16;
        }
        for (int i_22 = 4; i_22 < 15;i_22 += 1) /* same iter space */
        {
            var_54 = var_15;

            for (int i_23 = 4; i_23 < 14;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    var_55 -= var_15;

                    for (int i_25 = 0; i_25 < 16;i_25 += 1)
                    {
                        var_56 += var_17;
                        var_57 += (var_18 ? (((var_11 ? var_10 : var_1))) : var_4);
                        var_58 = ((var_15 ? var_2 : var_4));
                    }
                }
                for (int i_26 = 1; i_26 < 14;i_26 += 1)
                {
                    var_59 += var_10;

                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        var_60 = ((var_13 ? var_0 : var_3));
                        var_61 = (var_4 ? var_14 : var_6);
                        arr_93 [3] [i_23] [3] [i_26] [6] = var_14;
                    }

                    for (int i_28 = 3; i_28 < 15;i_28 += 1)
                    {
                        var_62 = var_16;
                        var_63 = (min(var_63, (((var_6 ? var_8 : var_2)))));
                        arr_98 [i_23] [i_26] [i_26 + 1] [i_23] [i_22] [i_23] = ((var_7 ? var_1 : var_4));
                        arr_99 [4] [i_1] [i_23] [i_26 - 1] [i_23] [i_23] [i_26] &= var_12;
                    }
                    arr_100 [i_23] [i_22] = ((var_2 ? var_6 : ((var_17 ? var_2 : var_13))));
                }
                var_64 = ((var_6 ? var_12 : var_4));
                var_65 += ((var_14 ? var_9 : var_16));
            }

            for (int i_29 = 0; i_29 < 16;i_29 += 1)
            {
                arr_103 [i_1] [i_29] [i_29] = var_17;
                arr_104 [i_1] [i_29] = var_17;
            }
            var_66 = ((var_7 ? var_9 : var_18));
        }
        var_67 = (max(var_67, (((var_7 ? var_10 : var_0)))));
    }
    var_68 = (((min(var_15, ((max(var_12, var_5)))))) ? var_6 : (((((var_12 ? var_9 : var_9))) ? var_3 : (min(var_8, var_5)))));
    #pragma endscop
}
