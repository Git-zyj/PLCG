/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [16] = (arr_0 [i_0] [i_0]);
        var_12 ^= 50090;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = (arr_1 [i_0]);
            arr_5 [i_1] [i_1] [13] = (!1638632993538194512);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = 113;
            arr_9 [i_0] [i_2] [i_2] = 1;

            /* vectorizable */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_15 = (max(var_15, (arr_7 [i_0] [i_0] [i_0])));
                    var_16 = arr_8 [i_2];
                }

                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_2] = (arr_13 [7] [i_3 - 4] [i_3 - 4] [18] [i_0]);
                    var_17 *= 1;
                }
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    var_18 = 4202082352066286034;
                    arr_21 [i_2] = 11000;
                    var_19 = 31;
                    arr_22 [i_2] [i_2] = 1;
                    arr_23 [7] [i_2] [i_2] [i_3] [i_2] [i_2] = (arr_19 [16] [i_2] [i_3]);
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_20 = ((~(!1)));
                    var_21 = (max(var_21, (arr_19 [i_0] [i_0] [4])));
                }
            }

            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_22 *= (arr_13 [i_0] [i_2] [i_0] [i_8] [i_9]);
                    var_23 = (arr_20 [1] [i_8]);
                    var_24 = (min(var_24, (arr_11 [i_9])));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_25 ^= 98;
                        var_26 = (arr_24 [i_0] [i_0] [i_0] [1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_27 *= (arr_16 [i_0] [i_0] [i_0] [i_9] [i_0]);
                        var_28 = (min(var_28, -122));
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_29 = 5;
                        arr_39 [i_0] [i_0] [i_0] [i_2] = (arr_10 [i_2]);
                        var_30 = (arr_30 [i_2] [i_2] [11] [i_12]);
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        var_31 = -61;
                        var_32 = (!69);
                        arr_43 [i_0] [i_2] [i_0] [i_0] [i_0] [12] = (arr_3 [i_2]);
                        var_33 += (+-118);
                    }
                }

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {

                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        var_34 |= ((~(((!(arr_10 [i_0]))))));
                        var_35 = 1;
                        var_36 |= (~1);
                    }
                    var_37 = (arr_30 [i_2] [i_2] [i_8] [15]);
                    var_38 = (arr_45 [i_0] [i_0] [4] [4]);
                }
                arr_50 [12] [i_2] [i_2] = arr_17 [i_0] [i_2] [i_0] [i_2];
            }
            for (int i_16 = 4; i_16 < 16;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_39 = (arr_1 [i_17]);
                    var_40 = (min(var_40, (arr_10 [i_0])));
                }
                for (int i_18 = 3; i_18 < 17;i_18 += 1)
                {

                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 18;i_19 += 1)
                    {
                        var_41 = (arr_17 [i_0] [i_2] [i_2] [i_18]);
                        arr_64 [i_0] [i_2] [i_16] [i_2] [i_2] = 107;
                        var_42 = 69;
                        var_43 = (arr_56 [i_0] [i_2]);
                    }
                    arr_65 [i_0] [2] [i_2] [i_0] [0] [8] = (((-(arr_53 [i_0] [i_2] [11] [i_2]))));
                }
                /* vectorizable */
                for (int i_20 = 1; i_20 < 16;i_20 += 1)
                {
                    var_44 = (!1);
                    arr_68 [i_0] [i_0] [i_16] [i_2] = (arr_59 [i_0] [i_0] [i_2]);
                }
                var_45 = 239;
                var_46 ^= (arr_3 [i_0]);
            }
        }
        for (int i_21 = 2; i_21 < 17;i_21 += 1) /* same iter space */
        {
            var_47 = (!3887517581);
            var_48 = (max(var_48, 0));
            var_49 = (arr_24 [i_0] [17] [17] [17] [17]);
        }
        for (int i_22 = 2; i_22 < 17;i_22 += 1) /* same iter space */
        {
            arr_74 [i_22] [i_22] = 163;
            arr_75 [i_0] [i_0] |= 1;
            var_50 = 67108860;
        }
        var_51 = (arr_26 [i_0] [i_0]);
    }

    for (int i_23 = 0; i_23 < 16;i_23 += 1)
    {

        /* vectorizable */
        for (int i_24 = 4; i_24 < 15;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 16;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 13;i_26 += 1)
                {
                    {
                        var_52 ^= 182199307;
                        var_53 *= -35;
                    }
                }
            }

            for (int i_27 = 0; i_27 < 16;i_27 += 1)
            {
                var_54 = ((!(arr_38 [i_23] [7] [i_23] [i_27] [i_27])));
                var_55 = 1;
            }
            var_56 = 2594154534;
        }
        arr_87 [i_23] = 93;
    }
    var_57 = var_1;
    var_58 = (max(var_58, var_6));

    for (int i_28 = 2; i_28 < 17;i_28 += 1)
    {

        for (int i_29 = 4; i_29 < 17;i_29 += 1)
        {
            arr_95 [i_29] |= 185;
            var_59 = (arr_91 [i_28] [2]);
            arr_96 [i_29] [11] [11] = (arr_91 [i_28] [i_28]);
        }
        var_60 ^= ((~(arr_93 [13] [i_28] [i_28])));
    }
    for (int i_30 = 0; i_30 < 11;i_30 += 1)
    {
        arr_99 [i_30] = (arr_69 [i_30] [i_30]);
        var_61 = (arr_32 [i_30]);
    }
    for (int i_31 = 2; i_31 < 12;i_31 += 1) /* same iter space */
    {
        arr_103 [6] |= -24;
        arr_104 [i_31] [1] = ((((!(arr_41 [i_31] [i_31])))));
    }
    for (int i_32 = 2; i_32 < 12;i_32 += 1) /* same iter space */
    {
        arr_108 [i_32] = (arr_60 [11] [i_32] [i_32] [16] [0] [16]);

        for (int i_33 = 4; i_33 < 14;i_33 += 1)
        {
            var_62 ^= (arr_86 [i_33] [2] [i_33] [i_33]);
            var_63 = 0;
            var_64 |= (arr_19 [i_33] [i_33] [i_33]);
            var_65 ^= 12;
        }
        arr_111 [i_32] = (((~(((!(arr_1 [i_32 + 2])))))));
    }
    #pragma endscop
}
