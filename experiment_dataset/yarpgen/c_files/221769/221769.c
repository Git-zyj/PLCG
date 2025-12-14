/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = 32256;

                for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = 437;
                                arr_14 [i_1] [i_4] [i_4] [i_3] [i_2] [i_3] [1] = 3632690769;
                                arr_15 [i_0] [i_0] [i_4] [i_2 - 1] [i_3] [i_4] = 4;
                            }
                        }
                    }
                    var_19 = (max(var_19, 25465));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, 4611686018427387904));
                    arr_18 [i_1] [i_5] = 9182797920114256439;
                    var_21 = 3632690759;
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_22 *= 3632690782;
                    arr_22 [i_0 - 2] [i_1] [i_6] = 353461298722598833;
                }
                for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {

                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            var_23 = 895359763;
                            arr_32 [i_7] = 439;
                            arr_33 [i_0] [i_7] [i_1] [i_7] [i_7 + 2] [i_8] [1] = 7841093679811692694;
                            arr_34 [i_9] [3] [i_7 + 1] [i_7] [i_7] = 1;
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            arr_37 [i_0] [i_7] = 443;
                            arr_38 [i_7] [1] [i_7] [i_10] [i_1] [i_10 - 2] [i_10] = 446;
                            arr_39 [i_0] [i_1] [i_7 - 1] [i_8] [i_7] [i_10 - 2] [i_10] = 65076;
                        }

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_24 += 90;
                            var_25 = 65078;
                        }
                        var_26 = 2007861557078601378;
                        arr_43 [i_7] = 65106;
                        var_27 = 1;
                    }

                    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_28 = (min(var_28, 11954175190158790967));
                            arr_50 [i_13] [i_7] [i_7] [i_1] [i_0] [i_7] [15] = 9664;
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_29 = -8;
                            arr_53 [i_0] [i_7] [i_7] [i_12] [i_14] = 2087201134;
                            var_30 = 2007861557078601378;
                            var_31 = 1;
                        }
                        arr_54 [i_7] [i_12] = 1358680115;
                        var_32 = 14320657371734172408;
                        var_33 *= -671763597;
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [i_1] [i_7] [i_0] &= 14985486504260479432;
                        arr_59 [i_0] [i_7] [i_0] [i_15] [i_15 - 1] = 4096;
                    }
                }
                var_34 = 11972059839722506589;

                for (int i_16 = 3; i_16 < 14;i_16 += 1)
                {
                    var_35 = 11972059839722506591;
                    var_36 = 1;
                }
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    arr_68 [i_0 + 2] [1] [i_17] = 13315424643963473776;
                    arr_69 [3] [i_17] &= 1;
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_37 = -8;
                    arr_72 [i_0] [i_1] [i_1] [i_18] = 1358680114;
                }
                for (int i_19 = 1; i_19 < 14;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        for (int i_21 = 2; i_21 < 13;i_21 += 1)
                        {
                            {
                                var_38 = 651145771;
                                var_39 = 15249096496293267029;
                                arr_81 [i_19] = 1;
                                var_40 = (min(var_40, 1));
                                arr_82 [i_0] [i_1] [i_19] [i_20] [i_19] = 1;
                            }
                        }
                    }
                    arr_83 [i_0] [i_0] [i_19] [i_0] = 16256719932074003903;
                    var_41 = 25696;
                }
            }
        }
    }
    #pragma endscop
}
