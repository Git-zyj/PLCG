/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 6362;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_11 += 1;
        arr_3 [i_0] = 21702;
        var_12 = (max(var_12, (arr_0 [i_0])));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_1] = var_0;
                    var_13 -= 4294967295;
                }
            }
        }
        var_14 = (min(var_14, 88));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_15 = -1;
            var_16 ^= 610157992;
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_17 = 88;
                            arr_25 [i_1] [i_6] [i_6] = -41;
                        }
                    }
                }
            }
            var_18 += (arr_15 [i_5]);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_19 = var_1;
            arr_30 [i_9] = 65535;
        }
    }
    for (int i_10 = 3; i_10 < 12;i_10 += 1)
    {
        var_20 = var_9;

        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_21 = 9;
            arr_35 [i_10] [i_11] [i_10] = (arr_16 [i_10] [i_10] [i_11 + 2]);

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_22 = 40;
                    var_23 = 26478;
                    var_24 = -35;
                }
                arr_41 [2] [i_11] [i_12] &= 26478;
                var_25 |= 0;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_26 += var_5;
                            var_27 = (min(var_27, (arr_19 [i_12] [i_12] [i_15])));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_60 [i_10] = 40;
                            var_28 ^= 255;
                        }
                    }
                }
                var_29 = var_0;
                var_30 |= (arr_17 [i_11]);
            }
            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                var_31 = (arr_11 [i_10] [i_11] [i_19] [i_10 - 1]);
                var_32 = 1741651556;

                /* vectorizable */
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    var_33 ^= var_0;
                    var_34 = var_7;
                    var_35 = var_3;
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    arr_69 [i_10] [i_11 + 1] [i_10] [i_21] = 1;
                    var_36 += var_6;
                }
                for (int i_22 = 0; i_22 < 13;i_22 += 1)
                {
                    var_37 = 242;
                    var_38 -= 0;
                    var_39 += 0;
                }
                /* vectorizable */
                for (int i_23 = 4; i_23 < 12;i_23 += 1)
                {
                    var_40 = (arr_72 [i_10]);
                    var_41 = (arr_26 [i_11]);
                    arr_77 [i_10] [i_10] = 2660361721;
                }
                var_42 &= 13491441329055953530;
                arr_78 [i_10] [i_11 + 1] [i_10] = 1;
            }
        }
        /* vectorizable */
        for (int i_24 = 2; i_24 < 9;i_24 += 1)
        {
            var_43 = 1;
            /* LoopNest 2 */
            for (int i_25 = 2; i_25 < 12;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 12;i_26 += 1)
                {
                    {
                        var_44 += 1;
                        var_45 = 66;
                    }
                }
            }
            var_46 = var_6;
            arr_86 [i_10] = var_3;
        }
        for (int i_27 = 1; i_27 < 12;i_27 += 1)
        {
            var_47 &= 1965341387069101574;
            var_48 *= var_9;
            var_49 = 9405492521292932551;

            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                arr_91 [i_10] = var_7;

                for (int i_29 = 1; i_29 < 11;i_29 += 1)
                {
                    var_50 = var_6;
                    var_51 = (arr_87 [i_10] [i_10]);

                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        var_52 = var_3;
                        var_53 = var_3;
                    }
                    for (int i_31 = 0; i_31 < 13;i_31 += 1)
                    {
                        var_54 = (min(var_54, 1));
                        arr_100 [i_10] [i_10] [i_10] = 67108863;
                        var_55 = (min(var_55, 95));
                        arr_101 [i_10] [i_10] [i_27] [i_28] [i_29] [i_10] = -86;
                    }
                    var_56 -= 4;
                }
            }
        }

        for (int i_32 = 0; i_32 < 13;i_32 += 1)
        {
            var_57 = 3;
            arr_104 [i_10] = -49;
            var_58 &= 35184372088831;
        }
        /* vectorizable */
        for (int i_33 = 2; i_33 < 11;i_33 += 1)
        {
            arr_107 [i_10] [10] |= 1;
            var_59 = 7;
        }
        /* vectorizable */
        for (int i_34 = 0; i_34 < 1;i_34 += 1)
        {
            var_60 -= (arr_1 [i_10]);
            var_61 += (arr_33 [i_10 - 1] [i_34] [i_34]);
            var_62 = 97;
        }
    }
    #pragma endscop
}
