/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 += var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
        var_18 = var_13;
        var_19 |= var_9;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_20 = var_11;

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_21 |= var_4;
                var_22 = var_1;
                var_23 |= var_2;
                var_24 = (arr_5 [i_0] [i_1] [i_0]);
            }
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                var_25 = (arr_2 [i_3] [0] [i_3]);
                var_26 = (arr_6 [i_1]);
                var_27 += (arr_10 [i_0]);
            }
            var_28 += var_2;
            var_29 = var_10;

            /* vectorizable */
            for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
            {
                var_30 = (arr_8 [i_4] [i_1] [9]);
                var_31 = var_2;

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_32 = (arr_5 [0] [i_4] [i_5]);
                    var_33 += var_14;
                    var_34 += var_8;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_35 += var_14;
                    arr_19 [i_0] [i_0] [i_1] [1] [i_6] [i_6] = var_7;
                    var_36 = (arr_3 [0]);
                    var_37 = var_7;
                }
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
            {
                var_38 = (arr_5 [i_1] [i_1] [i_7]);
                var_39 = (arr_16 [i_7] [i_7] [i_1] [i_0]);
                arr_23 [i_7] = (arr_10 [i_0]);
                var_40 = arr_18 [i_0] [i_0] [i_1] [i_7];
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_41 = var_8;

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_42 += var_8;
                        var_43 = arr_15 [i_1] [i_8];
                    }
                    var_44 = var_13;
                    var_45 = var_9;
                    var_46 = var_3;
                }

                for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_47 = (arr_26 [i_0] [i_1] [i_8] [i_11]);
                    var_48 += var_0;
                    var_49 = arr_22 [i_0] [i_1] [6] [i_11];
                    var_50 = (max(var_50, var_8));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    var_51 = arr_1 [i_0];
                    var_52 += var_12;
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_53 += (arr_9 [i_0]);
                    var_54 |= var_7;
                    arr_41 [i_13] [6] [1] [1] [1] = var_0;
                    var_55 = (arr_16 [i_0] [i_0] [3] [i_0]);
                }

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_56 = (arr_33 [4] [i_14]);
                    var_57 += (arr_2 [i_0] [i_8] [i_14]);
                    var_58 = (arr_36 [i_0] [1] [i_8] [i_14] [i_1]);
                    var_59 = (max(var_59, var_13));
                    var_60 = (min(var_60, var_13));
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                var_61 = (max(var_61, var_4));

                for (int i_17 = 1; i_17 < 8;i_17 += 1)
                {
                    var_62 = (arr_39 [i_0] [i_15]);
                    var_63 = var_7;
                    var_64 = var_3;
                }
                var_65 |= var_1;
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 10;i_19 += 1)
                    {
                        {
                            var_66 = (arr_3 [i_0]);
                            var_67 += (arr_37 [i_0] [i_0] [i_18 + 1] [i_0]);
                            var_68 = (arr_38 [i_0] [i_0] [i_16] [i_18] [i_19]);
                            var_69 = (arr_34 [i_0] [i_15] [i_16] [i_18] [i_19 - 1] [i_16]);
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0] |= var_8;
                        }
                    }
                }
            }
            var_70 = var_4;
            var_71 = var_11;
        }
        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
        {
            var_72 = (arr_54 [i_0] [i_20] [2] [i_20] [i_20]);
            var_73 = (max(var_73, (arr_54 [i_0] [i_20] [i_20] [i_20] [i_20])));
            var_74 = var_10;
            var_75 = (arr_5 [i_0] [i_20] [0]);
        }
        arr_60 [i_0] [i_0] = var_11;
    }
    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_76 += var_3;
        var_77 = var_12;
        var_78 = var_3;
    }
    #pragma endscop
}
