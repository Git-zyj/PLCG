/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 3;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = -69;
            arr_5 [i_0] = -14;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, 14));
            arr_8 [i_0] = 440464241;
            arr_9 [i_0] [i_2] [i_2] = 440464241;
        }
        arr_10 [i_0] = 12;
        var_23 = (max(var_23, 24831));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_4] [12] [i_4] [i_4] = 532676608;
                        arr_23 [i_3] [i_5] [1] [i_3] = 3762290692;
                    }
                }
            }
            var_24 = (min(var_24, 536805376));
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 15;i_9 += 1)
                {
                    var_25 = 224;
                    arr_30 [i_3 + 2] [i_3] [i_3 + 1] [3] = 6;

                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_3] [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_3] = 1;
                        var_26 -= 4290406108535057608;
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, -323779768242546650));
                        var_28 = (max(var_28, -14));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_39 [i_3] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] = 2067097224292628785;
                        var_29 = 4960328572935016228;
                        arr_40 [i_3] [14] [i_3] [i_9] [i_12] = 245;
                        arr_41 [1] [1] [1] [i_9] [i_3] [i_12] = 23006;
                        var_30 -= 13207740410580192356;
                    }
                }
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    arr_45 [i_3] [i_3] [i_3] [i_3] [11] = 13486415500774535373;

                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {
                        arr_49 [7] [7] [i_3] [13] [i_14] = 100;
                        var_31 = 11950068221670712977;
                        arr_50 [i_3] = -456077685;
                        arr_51 [i_3] [i_8] [16] [i_14 + 1] = 7313831156915539589;
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_54 [i_3] [i_3] [10] [1] [i_3] [i_15] [i_3] = 268435456;
                        arr_55 [12] [i_7] [1] [i_13] [i_3] = 7;
                    }
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        arr_60 [i_3 - 1] [i_7 - 2] [i_8] [i_7 - 2] [i_3] [0] = 536870912;
                        var_32 -= 1;
                    }
                    arr_61 [i_8] [9] [i_3] [i_13 - 1] = 574773103;
                }
                for (int i_17 = 3; i_17 < 16;i_17 += 1)
                {
                    arr_64 [i_3] [i_7] [i_7] [i_7 - 1] [i_7] = 3545668701;
                    arr_65 [1] [1] [i_8] [i_3] = -426475777;

                    for (int i_18 = 1; i_18 < 16;i_18 += 1)
                    {
                        arr_68 [4] [i_3] [i_8 + 1] [i_3] [i_3 + 1] = 18446744073709551615;
                        arr_69 [i_3 + 1] [i_7 - 1] [i_3] [i_17 + 1] [i_18 - 1] = 0;
                        var_33 = 0;
                    }
                    arr_70 [i_3 - 1] [i_3 - 1] [i_3] = -21299;
                }
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    arr_73 [2] [i_3] [i_3] [i_7 - 2] [11] [i_19] = 1821547149;
                    arr_74 [i_3] [i_3] [16] = 96;
                }
                arr_75 [i_3] [i_3] = 100;
            }
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        {
                            var_34 = 173;
                            arr_85 [3] [i_7] [i_3] [i_21] [i_7] = -646579137834737105;
                        }
                    }
                }
                arr_86 [i_3] [i_3] [i_3] = 1;
                var_35 = 0;
            }
            arr_87 [i_3] = 15457372477838602837;
        }
        var_36 = (max(var_36, 1731879255475869368));
        arr_88 [1] &= 54072;
    }
    for (int i_23 = 4; i_23 < 10;i_23 += 1)
    {
        arr_91 [i_23] = 221;
        arr_92 [4] [4] = 31021;
    }
    var_37 = 3306166520;
    var_38 = var_14;
    var_39 = 2555577515;
    #pragma endscop
}
