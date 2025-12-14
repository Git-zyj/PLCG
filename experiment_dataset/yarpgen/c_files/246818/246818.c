/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 6442450944;
                var_21 = 6078659531766264282;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_22 = -6078659531766264268;
                    arr_6 [i_0] = -6078659531766264283;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] = -6078659531766264283;
                            var_23 = -6078659531766264286;
                            var_24 = 6078659531766264277;
                        }
                        arr_18 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4] = 67092480;
                        var_25 = (min(var_25, 0));
                        var_26 = 233;
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_27 -= -9223372036854775784;
                        arr_23 [i_0] [i_0] [i_3] [i_0] = 85;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_28 [i_7] [i_0] [i_3] [i_0] [i_0] = 67076096;
                            var_28 = 1594060974;
                            arr_29 [i_7] [i_0] [i_3] [i_0] [i_0] = 16;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_1] [i_6] [i_8] = 1;
                            var_29 = (max(var_29, -6078659531766264284));
                        }
                    }

                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        arr_35 [i_0] = 62;
                        var_30 = 3770419549;
                        arr_36 [i_0] [i_1] [i_0] [i_9] = 34;
                        var_31 = (-2147483647 - 1);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_32 &= 2102868606;
                        var_33 = (min(var_33, 6078659531766264290));
                    }
                }
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [i_11] [i_1] [i_0] = 3554439246;
                                var_34 = (max(var_34, 18446744073642475520));
                                var_35 += -5256309455235348377;
                                arr_48 [i_0] [i_1] [i_11] [i_12] [i_12] [i_0] = 1;
                                var_36 = 1;
                            }
                        }
                    }
                    arr_49 [i_0] [i_1] [i_0] = 1;

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            var_37 -= 1;
                            var_38 = 6078659531766264274;
                            var_39 = 1;
                            var_40 = 1;
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            arr_58 [i_0] [i_0] = -7660313609991723770;
                            var_41 = -1;
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            arr_61 [i_1] [i_1] [i_0] [i_0] [i_14] [i_11] = 4369020790654130609;
                            var_42 = 49789;
                        }
                        arr_62 [i_0] [i_1] [i_1] [i_11] [i_14] [0] &= 1;
                        arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] = 8;
                        arr_64 [i_0] [i_1] [i_11] [i_11] [i_0] = 0;
                    }
                    for (int i_18 = 2; i_18 < 7;i_18 += 1)
                    {
                        var_43 -= 1;
                        arr_67 [i_0] [i_0] [i_11] [i_18] = -1447810625;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        arr_70 [i_19] = 3614;
        var_44 = 0;
    }
    var_45 ^= var_0;
    #pragma endscop
}
