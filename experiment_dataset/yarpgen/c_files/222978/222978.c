/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 *= arr_0 [9];
        arr_2 [i_0] = (((arr_0 [10]) ? ((min((arr_1 [i_0]), var_14))) : (min((arr_1 [i_0]), ((min((arr_0 [i_0]), var_13)))))));
        var_16 ^= (min(((-(arr_0 [i_0]))), (arr_1 [i_0])));
    }
    var_17 = var_13;

    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_18 = arr_3 [i_1];
        arr_6 [i_1] = arr_5 [i_1];
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = arr_4 [i_2];
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 = (arr_4 [i_4]);
                        var_20 |= var_11;
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_21 = (((arr_19 [i_2] [i_2] [i_2] [i_2]) ? (arr_21 [i_2]) : var_5));
                        var_22 = (((arr_16 [i_2] [i_6] [i_7] [i_8] [i_8]) ? (arr_16 [12] [i_6] [i_7] [i_2] [i_7]) : (arr_16 [2] [i_6] [i_7] [i_8] [i_7])));
                        var_23 += arr_27 [i_2] [i_6] [13];
                    }
                }
            }
            var_24 += var_10;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_33 [i_2] [i_6] [i_2] [i_10] = arr_17 [i_2] [i_2] [i_2] [12] [i_9] [i_10 - 1];
                        var_25 = arr_17 [i_9] [i_10] [i_2] [i_10] [i_10] [i_10];
                        var_26 = arr_27 [i_2] [i_9] [i_10 + 3];
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_27 |= (((arr_35 [i_11]) ? (arr_34 [i_11]) : (arr_34 [i_11])));

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                var_28 = arr_38 [i_11];
                arr_43 [i_11] [i_12] [i_11] = (((arr_41 [i_11] [i_12] [i_12] [i_13 + 4]) ? (arr_42 [i_12] [i_12] [i_12]) : (arr_42 [i_12] [i_12] [i_13])));
            }
            for (int i_14 = 1; i_14 < 23;i_14 += 1)
            {
                var_29 -= arr_41 [i_14 - 1] [i_11] [i_11] [8];
                arr_46 [i_12] = (arr_44 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]);
            }
            arr_47 [i_12] = (((arr_38 [i_11]) ? (arr_38 [i_11]) : (arr_38 [i_11])));
        }
        for (int i_15 = 3; i_15 < 23;i_15 += 1)
        {

            for (int i_16 = 1; i_16 < 23;i_16 += 1)
            {
                arr_54 [i_11] [i_16] = arr_44 [i_15 - 3] [i_15 - 3] [i_16 - 1] [i_16 + 1];
                arr_55 [i_16] = arr_51 [i_11] [i_15 - 3] [i_16];
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            arr_62 [i_11] [i_15] [i_16] [i_17] = (arr_50 [i_15 + 1]);
                            arr_63 [i_11] [i_11] [i_11] [i_17] [i_11] [i_11] |= arr_61 [i_15 - 3] [i_15 - 3] [i_16 + 1] [i_11] [i_16 + 1] [i_16 - 1] [i_17];
                            var_30 *= var_0;
                            var_31 = (((arr_59 [i_15 + 1] [i_16] [i_15] [i_17] [i_16] [21]) ? var_13 : (arr_51 [14] [i_15 - 3] [i_16])));
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                arr_67 [i_15] [i_15 - 1] [7] [i_11] = arr_40 [i_15 - 1] [17];
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_32 += (arr_69 [i_21 + 3] [i_15] [i_19] [i_20] [i_15 - 2] [i_21]);
                            var_33 *= ((var_0 ? (arr_64 [i_11]) : (arr_42 [i_19] [i_15 - 3] [i_19])));
                        }
                    }
                }
                var_34 = var_11;
                var_35 *= (arr_65 [i_15] [i_15 + 1] [i_15 - 1]);
            }

            for (int i_22 = 1; i_22 < 23;i_22 += 1)
            {
                var_36 -= var_4;
                arr_75 [i_11] = (arr_53 [i_11] [i_15 - 1] [i_11]);
                var_37 = (arr_38 [i_15 + 1]);

                for (int i_23 = 1; i_23 < 20;i_23 += 1)
                {
                    arr_79 [i_23] [i_15] [22] [i_15] = arr_34 [i_11];
                    arr_80 [i_11] [i_15] [i_22] [i_23] [i_23] = (arr_35 [i_23 + 1]);
                }
            }
            var_38 = (((arr_51 [i_15 - 3] [i_15 - 2] [7]) ? (arr_51 [i_15 + 1] [9] [9]) : (arr_51 [i_15 - 1] [i_15] [i_11])));
        }
        /* LoopNest 3 */
        for (int i_24 = 1; i_24 < 22;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 22;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    {

                        for (int i_27 = 0; i_27 < 24;i_27 += 1)
                        {
                            var_39 &= var_1;
                            var_40 = var_3;
                            var_41 = ((var_8 ? (arr_44 [i_11] [i_24] [i_25] [i_26]) : (arr_64 [i_27])));
                        }
                        for (int i_28 = 0; i_28 < 24;i_28 += 1) /* same iter space */
                        {
                            var_42 -= arr_38 [i_11];
                            var_43 = arr_48 [i_24 + 1] [i_25 - 1] [i_25 - 1];
                            var_44 = arr_72 [i_24 + 2] [i_24 + 2] [i_24] [i_24 - 1];
                            var_45 -= arr_59 [i_11] [i_11] [i_25] [i_11] [i_24] [i_28];
                        }
                        for (int i_29 = 0; i_29 < 24;i_29 += 1) /* same iter space */
                        {
                            arr_95 [i_24] [i_24] [i_24 - 1] [i_26] [i_24 - 1] [i_24] [i_24] = arr_61 [i_11] [i_11] [i_24] [i_24] [i_25] [i_26] [i_29];
                            arr_96 [i_24] [i_24 - 1] [i_25] [i_26] [i_29] [i_26] [i_29] = (arr_44 [i_29] [16] [i_25 + 1] [9]);
                        }

                        for (int i_30 = 2; i_30 < 23;i_30 += 1)
                        {
                            var_46 *= arr_89 [i_30 + 1];
                            var_47 += (((arr_92 [i_11] [i_24 + 1] [i_25 + 1] [i_26] [i_11]) ? var_11 : (arr_85 [i_11] [i_24] [i_25] [i_26] [i_30 - 2])));
                            arr_100 [i_26] = (arr_60 [i_11] [9] [i_25] [i_26] [i_30 - 1]);
                            var_48 = ((~(arr_86 [i_30])));
                        }
                    }
                }
            }
        }
    }
    for (int i_31 = 0; i_31 < 16;i_31 += 1)
    {
        var_49 = min((((!(arr_38 [i_31])))), ((min(var_14, (arr_45 [i_31] [i_31] [i_31] [i_31])))));
        arr_103 [i_31] = (arr_3 [i_31]);
        var_50 -= min((arr_84 [i_31] [i_31]), (min((arr_84 [i_31] [i_31]), (arr_84 [i_31] [i_31]))));
        arr_104 [i_31] = (arr_83 [i_31] [i_31] [i_31] [i_31]);

        /* vectorizable */
        for (int i_32 = 0; i_32 < 16;i_32 += 1)
        {
            var_51 |= var_9;
            var_52 = arr_98 [i_31] [i_31] [i_31] [i_32] [i_32];
            var_53 = (((arr_51 [i_31] [i_32] [i_32]) ? (arr_51 [i_31] [i_31] [i_32]) : (arr_51 [i_31] [i_32] [i_32])));
            var_54 = (arr_81 [i_32]);
        }
        for (int i_33 = 0; i_33 < 16;i_33 += 1)
        {
            arr_110 [i_31] = (min(((min((arr_86 [i_31]), var_10))), (min((((arr_41 [i_31] [i_31] [i_31] [i_33]) ? var_0 : (arr_66 [i_31] [i_33] [i_31]))), (arr_86 [i_31])))));
            var_55 |= var_2;
        }
        /* vectorizable */
        for (int i_34 = 0; i_34 < 16;i_34 += 1)
        {

            for (int i_35 = 0; i_35 < 16;i_35 += 1)
            {

                for (int i_36 = 1; i_36 < 15;i_36 += 1)
                {
                    var_56 = (((arr_116 [i_36] [i_36 + 1] [i_36 - 1] [i_36 + 1]) ? (arr_66 [i_36 - 1] [i_36 - 1] [i_36 - 1]) : (arr_57 [i_31] [i_36 + 1] [i_35])));
                    arr_119 [i_31] [i_34] [i_31] [i_36] = (((arr_81 [i_36]) ? (arr_52 [i_34] [i_34] [i_35]) : var_13));
                }
                for (int i_37 = 1; i_37 < 12;i_37 += 1)
                {
                    var_57 = (arr_120 [i_37] [i_37 + 1] [i_37 + 3] [i_37] [i_37 + 2]);

                    for (int i_38 = 0; i_38 < 16;i_38 += 1)
                    {
                        arr_124 [i_31] [i_35] [2] [i_31] [i_31] = arr_68 [i_31] [i_35] [i_37 + 3] [i_37];
                        var_58 = arr_51 [i_31] [i_34] [i_35];
                    }
                }
                for (int i_39 = 1; i_39 < 14;i_39 += 1)
                {
                    var_59 += (!var_10);
                    arr_128 [i_31] [i_34] [i_35] [0] |= (arr_52 [i_39] [i_39 + 2] [i_39]);
                    var_60 += (((arr_57 [i_31] [i_34] [i_35]) ? (arr_57 [i_31] [i_34] [i_35]) : var_1));
                    var_61 -= arr_42 [i_34] [i_34] [i_34];
                }
                var_62 -= ((-(arr_5 [i_31])));
                var_63 -= (arr_36 [i_31]);
            }
            /* LoopNest 2 */
            for (int i_40 = 0; i_40 < 16;i_40 += 1)
            {
                for (int i_41 = 0; i_41 < 16;i_41 += 1)
                {
                    {

                        for (int i_42 = 0; i_42 < 16;i_42 += 1)
                        {
                            arr_136 [i_34] [i_31] [i_31] = arr_40 [i_34] [i_34];
                            arr_137 [i_41] [i_31] [i_31] = (((arr_71 [21] [21] [i_40]) ? (((arr_131 [i_31] [i_31] [i_34] [i_40] [i_41] [i_41]) ? var_0 : (arr_4 [i_31]))) : (arr_39 [5] [i_34] [i_41])));
                            var_64 |= (arr_115 [i_31]);
                        }
                        for (int i_43 = 0; i_43 < 16;i_43 += 1) /* same iter space */
                        {
                            var_65 -= arr_116 [i_31] [i_34] [i_40] [0];
                            var_66 *= ((!(arr_78 [i_43] [i_41] [i_34] [i_31])));
                            var_67 = (((arr_57 [3] [i_40] [i_31]) ? (arr_5 [i_40]) : (arr_99 [i_31] [i_31] [i_31] [i_31])));
                            var_68 *= arr_82 [i_31];
                        }
                        for (int i_44 = 0; i_44 < 16;i_44 += 1) /* same iter space */
                        {
                            arr_143 [i_31] [i_41] [i_40] [i_34] [i_31] = arr_38 [15];
                            var_69 += arr_64 [i_31];
                        }
                        var_70 = (arr_94 [i_31] [i_34] [i_40] [i_41] [i_34] [i_41]);
                        arr_144 [i_31] [i_31] [i_40] [6] = arr_126 [i_34] [i_40];
                        var_71 = (arr_114 [i_31] [i_40]);
                    }
                }
            }
        }
    }
    var_72 = (min(var_9, (min(var_2, var_2))));
    var_73 *= var_14;
    #pragma endscop
}
