/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = 6;
                var_17 |= var_10;
                var_18 -= var_3;

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_19 ^= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_11));
                                var_21 = var_12;
                                var_22 = var_3;
                                var_23 -= 1;
                            }
                        }
                    }
                }
                var_24 = var_5;
            }
        }
    }

    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_19 [i_6 - 1] = (arr_18 [i_5] [i_6 + 2] [i_5 - 4]);
            var_25 = -1;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_26 = var_4;
            var_27 = var_6;
        }
        var_28 = var_9;
        var_29 ^= (arr_21 [i_5 + 4] [i_5]);
        var_30 = 10394964250068576378;
        var_31 = (min(var_31, var_10));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_32 |= 6072314982507438706;
        var_33 = var_3;
        var_34 *= 0;
        var_35 = var_4;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_10] [i_10] = (arr_25 [i_9] [i_10]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_36 -= (arr_24 [i_8] [i_9]);
                                var_37 = (min(var_37, var_7));
                            }
                        }
                    }
                    var_38 = var_5;

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {

                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            var_39 &= var_8;
                            var_40 = (arr_38 [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14 + 1] [15]);
                            var_41 = var_15;
                            var_42 = (arr_29 [i_14 + 1] [i_14 + 3] [i_14 + 3] [i_14]);
                        }
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            var_43 &= 18446744073709551600;
                            var_44 = (arr_38 [i_8] [i_9] [i_10] [i_13] [i_15 - 2]);
                            var_45 |= (-2147483647 - 1);
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_46 = (arr_38 [i_8] [i_9] [i_10] [i_13] [i_13]);
                            arr_45 [i_8] [i_8] [i_10] [i_10] [i_10] &= 0;
                            arr_46 [i_8] [i_8] [i_10] [i_10] [i_8] [i_16] = (-32767 - 1);
                            var_47 = (max(var_47, 281337537757184));
                        }
                        var_48 = var_12;
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        var_49 = (arr_33 [i_8]);
                        var_50 = var_12;
                        var_51 += var_6;
                        var_52 = var_8;
                    }
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {
                        var_53 = var_5;
                        var_54 = 303249528;
                        var_55 = (arr_23 [i_18]);
                        arr_52 [i_18] [i_10] [i_10] [i_8] = (arr_51 [i_18] [i_18] [i_10]);
                        var_56 = (min(var_56, 18446744073709551608));
                    }
                    arr_53 [i_10] [i_8] [i_10] [i_10] = (arr_50 [i_10] [i_10] [i_10] [i_9] [i_8]);
                }
            }
        }
    }
    for (int i_19 = 2; i_19 < 10;i_19 += 1)
    {
        var_57 = (arr_50 [i_19] [i_19 - 2] [i_19 + 1] [15] [i_19]);
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 10;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    var_58 = var_1;
                    var_59 = var_3;
                    var_60 |= -1942509330;
                }
            }
        }
        var_61 = 237;
    }
    for (int i_22 = 1; i_22 < 10;i_22 += 1)
    {
        arr_66 [i_22] = (arr_55 [i_22] [i_22 + 1]);
        var_62 = 9310012612509533543;

        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            var_63 = (max(var_63, (arr_40 [i_22] [i_22 - 1] [i_22 - 1] [i_22 + 1] [i_23])));

            for (int i_24 = 1; i_24 < 9;i_24 += 1)
            {
                var_64 = 8191;
                var_65 = 4503565267632128;
            }
        }
        var_66 = -1626380399;
    }
    var_67 = var_15;
    #pragma endscop
}
