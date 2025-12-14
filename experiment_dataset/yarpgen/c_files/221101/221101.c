/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((!4119433200) ? var_2 : (!var_8))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] = (var_6 ? (!var_6) : (!var_10));
            arr_6 [1] [i_0] [i_0] = ((423 ? var_9 : (((!var_5) ? (~var_6) : var_9))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_17 -= (!var_13);
                var_18 -= var_13;
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_19 = var_12;

                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    var_20 = (((-24 ? -24 : -21)));
                    arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4] = ((var_9 ? var_14 : var_9));
                }
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                var_21 = var_8;
                arr_18 [i_0] = ((var_10 ? var_8 : (!var_5)));
                var_22 = 23;
            }
            arr_19 [i_0] [i_0] = ((var_2 ? -var_9 : var_7));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            var_23 = (max(var_23, (~var_2)));
            var_24 = (!var_8);
            var_25 = (min(var_25, var_5));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_26 ^= var_14;

            for (int i_8 = 4; i_8 < 17;i_8 += 1)
            {
                arr_27 [i_8] = (!24);
                var_27 -= var_12;
                var_28 = (min(var_28, var_14));
                var_29 = (min(var_29, ((((var_13 ? var_0 : var_10))))));
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_30 = ((!(!var_8)));
                var_31 ^= ((-((var_1 ? var_11 : -var_14))));
                var_32 -= ((-var_0 ? -var_6 : var_6));
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_35 [i_0] [i_0] [i_10] = var_15;
                arr_36 [i_0] [15] [i_10] = ((var_2 ? var_14 : var_13));
                arr_37 [i_10] [i_7] [i_0] = var_8;
            }
        }
        arr_38 [i_0] = var_7;

        /* vectorizable */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_42 [i_11] = var_0;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    {
                        var_33 = ((var_9 ? var_12 : var_6));
                        arr_47 [i_13] [i_13] [i_12] [4] [i_12] = var_7;
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 17;i_14 += 1)
        {

            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_34 -= ((-(!var_14)));
                            var_35 ^= (+-24);
                            var_36 -= var_8;
                        }
                    }
                }
                var_37 ^= var_1;
            }
            for (int i_18 = 4; i_18 < 15;i_18 += 1)
            {
                arr_61 [4] [i_14 - 1] [i_18] |= var_15;
                var_38 -= (((((~(~var_15)))) ? var_8 : (!var_13)));
                arr_62 [6] [i_0] [i_14] [i_14] = (~var_3);
            }
            for (int i_19 = 2; i_19 < 16;i_19 += 1)
            {
                arr_66 [i_19 - 2] [i_14] [12] = var_12;
                var_39 |= var_9;
            }
            arr_67 [8] [2] &= var_14;
            arr_68 [i_14] [14] [i_0] = var_11;
            var_40 -= var_4;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            arr_71 [i_0] [i_20] [i_20] = var_7;
            var_41 = var_10;
            var_42 ^= (~var_10);
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 12;i_21 += 1)
    {

        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            var_43 *= var_1;

            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    arr_82 [i_21] [i_22] [i_21] [i_24] = var_1;
                    var_44 = var_14;
                    var_45 = ((var_9 ? (~var_4) : ((var_13 ? var_3 : var_9))));
                    var_46 &= var_8;
                }
                var_47 = var_3;
                var_48 = ((((var_1 ? var_4 : var_13))) ? (!var_9) : ((-13 ? 20 : 35)));
            }
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                var_49 -= var_2;
                arr_85 [i_21] [i_21] [i_22] [i_21] = var_11;
            }
            for (int i_26 = 0; i_26 < 12;i_26 += 1)
            {
                var_50 &= var_7;

                for (int i_27 = 4; i_27 < 8;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 12;i_28 += 1)
                    {
                        var_51 = (max(var_51, var_6));
                        var_52 ^= var_8;
                        var_53 ^= 5;
                        arr_93 [i_28] [i_28] [i_21] [i_27] [i_28] = (~var_9);
                        arr_94 [i_21] [i_28] [i_28] [i_21] [i_21] [7] = var_10;
                    }
                    var_54 = (!-var_13);
                    var_55 = var_8;
                    arr_95 [10] [i_22] [i_26] [i_26] [i_27] = var_12;
                }
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    arr_99 [i_22] [i_22] [i_29] [i_29] [i_22] = -var_14;

                    for (int i_30 = 1; i_30 < 11;i_30 += 1)
                    {
                        var_56 = var_1;
                        var_57 = var_1;
                        var_58 = -var_7;
                        var_59 = var_3;
                        arr_102 [4] [i_22] [i_29] [i_22] [i_22] = var_15;
                    }
                    arr_103 [8] [i_21] |= (~var_15);
                    arr_104 [i_29] [i_29] = ((!(~var_7)));
                    var_60 = var_8;
                }
                for (int i_31 = 0; i_31 < 12;i_31 += 1)
                {
                    arr_107 [i_31] [i_31] = ((var_9 ? var_1 : var_10));
                    var_61 = (max(var_61, (((!(!var_1))))));
                    arr_108 [i_21] [5] [3] [11] = ((var_11 ? var_12 : (~var_11)));
                    var_62 = (max(var_62, -var_10));
                }
            }
        }
        for (int i_32 = 2; i_32 < 11;i_32 += 1)
        {
            arr_113 [i_32] = -var_13;
            arr_114 [i_32] [i_21] [8] = ((var_14 ? (!var_8) : var_12));
        }
        for (int i_33 = 0; i_33 < 12;i_33 += 1)
        {
            var_63 = (max(var_63, ((((var_8 ? var_6 : var_10))))));
            var_64 = ((~(!var_2)));

            for (int i_34 = 1; i_34 < 10;i_34 += 1)
            {
                var_65 = (((((var_7 ? var_1 : var_15))) ? var_12 : var_8));
                arr_122 [i_21] [i_21] [i_34 - 1] |= var_15;
            }
        }
        var_66 = var_11;
        arr_123 [i_21] [i_21] = var_4;
    }
    #pragma endscop
}
