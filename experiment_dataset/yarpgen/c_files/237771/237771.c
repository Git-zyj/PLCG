/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 -= (max((((var_15 ^ 31998) ? var_3 : var_15)), (var_11 || var_16)));
    var_19 = (((((33538 ^ var_5) ? (((min(3584, var_7)))) : (~var_12))) ^ 0));
    var_20 = (((max(147, var_14))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_21 |= (max((min((max(2147483646, 31998)), (((var_2 + 2147483647) << (((var_2 + 119) - 14)))))), (((!((max(var_12, 21192))))))));
                var_22 = ((~(max(8711642195348994090, 196))));

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [i_0] [3] [i_2] [9] [i_3] = (max((min((var_7 ^ var_9), ((min(var_1, var_6))))), (min(var_5, var_0))));
                    var_23 = (min(((var_15 ? 33522 : var_8)), (arr_8 [1] [1] [i_1] [i_0])));
                    var_24 = ((var_1 ? (((-1286894955 || 1017104824004227014) ? var_1 : var_14)) : ((~(arr_0 [i_2 + 2] [i_2 + 2])))));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_4] [0] [i_1] [2] = var_1;
                    arr_15 [i_0] |= ((31991 << (3584 - 3574)));
                }
            }
            for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
            {
                var_25 = (((!3840319866846987336) << (var_5 + 23047)));

                /* vectorizable */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_26 = 3584;

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_23 [i_6 + 2] [i_5] [i_1] [i_0] = -var_2;
                        arr_24 [i_0] [0] [i_5] [i_6] [i_7] [i_6] = var_5;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_27 = var_14;
                        var_28 = (((var_6 ? 61952 : 33538)));
                    }
                    arr_28 [i_5] [i_0] [i_0] = ((var_11 << (((-31978 + 31996) - 15))));
                    var_29 = var_13;
                    arr_29 [i_0] [i_1] [3] [i_6] = var_12;
                }
            }
            var_30 = (min(var_30, var_6));
        }

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_31 *= ((((((max(196, var_9))) ? 16 : (197 > var_4))) << (((((arr_27 [11]) ? 1221587900 : (!var_6))) - 1221587894))));
            arr_32 [i_0] [i_9] = (max((arr_17 [i_0] [i_9]), (max((arr_10 [i_0] [18] [i_9] [i_0] [i_9] [i_9]), (1 ^ 15285210589824724716)))));
            var_32 = ((((max((arr_25 [i_0] [i_9] [i_9] [i_0] [i_9]), var_15))) ? var_14 : var_5));
        }
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            arr_35 [i_0] = (var_2 ^ var_12);
            var_33 = ((((((max(0, 8078))))) ? var_5 : var_12));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_34 = ((-var_16 ? ((max(9763, (max((arr_1 [i_0] [i_0]), var_7))))) : ((~((min(var_10, var_10)))))));
                var_35 ^= 1;
                arr_43 [i_0] [i_0] [1] = ((!(var_2 >= var_12)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_36 = (arr_7 [i_13] [i_14]);
                            var_37 = (((min(4294967295, (!24644))) >= ((min((var_11 || var_5), (max(var_15, var_16)))))));
                            var_38 = (max(var_38, (((!(!1))))));
                            var_39 -= ((((((((var_12 ? var_1 : 23))) ? (max(var_2, var_3)) : (((var_3 ? var_5 : var_10)))))) ? (((max(var_7, 31998)))) : ((max(var_12, var_11)))));
                        }
                    }
                }
            }
            var_40 = ((var_5 ? (min((arr_25 [i_0] [11] [i_0] [i_11] [i_0]), ((max(var_0, 19))))) : (max((((arr_36 [i_11] [i_0] [i_0]) ? 1 : -8184)), ((max(33545, 21591)))))));

            /* vectorizable */
            for (int i_15 = 2; i_15 < 21;i_15 += 1)
            {
                arr_50 [i_15] [20] [i_15] = (arr_33 [i_0] [i_11] [i_11]);
                var_41 += (!0);
                var_42 ^= ((var_7 ? (arr_47 [i_15 - 2] [i_15 + 1] [i_15 - 1] [i_11] [i_11]) : 3584));
                arr_51 [i_15] [i_15] [i_15] [i_0] = (var_13 && 646464008);
                var_43 = (((arr_8 [i_15] [i_15 + 2] [i_15] [10]) ? 255 : 33538));
            }
            /* vectorizable */
            for (int i_16 = 3; i_16 < 21;i_16 += 1)
            {
                var_44 += ((var_12 ? (33538 ^ var_0) : 3022601923957832903));
                var_45 |= var_2;
                var_46 = (var_7 ? var_7 : var_0);
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                var_47 = var_2;
                var_48 = (min((~3319255695937460052), (max(79, ((var_3 << (var_16 - 2013347240)))))));
            }
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 23;i_18 += 1)
        {
            var_49 += ((-(arr_30 [i_18 + 1] [0] [i_18 + 1])));
            arr_60 [i_18] = 61;
            var_50 = (~1);
        }
    }
    /* vectorizable */
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        arr_63 [i_19] = var_11;
        arr_64 [i_19] = 255;
        var_51 -= 1;

        for (int i_20 = 2; i_20 < 20;i_20 += 1)
        {
            arr_67 [i_19] = (1766198947 >= 1);
            arr_68 [i_19] [i_20] [i_19] = 155;
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 18;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            arr_77 [i_19] [i_19] [i_21] [1] [i_22] [i_23] = var_6;
                            arr_78 [i_23] [i_22] [i_19] [i_20] [i_19] [i_19] [i_19] = (arr_46 [i_19] [i_22 + 3] [i_22 + 3] [i_20 + 1] [2]);
                            var_52 = var_7;
                        }
                        for (int i_24 = 0; i_24 < 21;i_24 += 1) /* same iter space */
                        {
                            arr_81 [i_19 - 1] [i_20 - 1] [6] [i_19] [i_24] = (var_7 >= var_9);
                            var_53 = -2;
                        }
                        for (int i_25 = 0; i_25 < 21;i_25 += 1) /* same iter space */
                        {
                            arr_86 [7] [i_19] [i_21] [i_19] [i_19] [i_19] = (((var_2 >= var_15) ? 221 : (var_0 > 26027)));
                            var_54 = ((-646463993 ? ((1023 ? (arr_75 [i_19] [i_20] [i_19] [i_19] [i_25]) : 63)) : var_0));
                        }
                        arr_87 [i_19] [i_19] = ((36 ? 0 : var_12));
                    }
                }
            }
            var_55 = (((arr_55 [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1]) >= var_11));
            var_56 = var_15;
        }
        for (int i_26 = 0; i_26 < 21;i_26 += 1)
        {
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                for (int i_28 = 1; i_28 < 19;i_28 += 1)
                {
                    for (int i_29 = 2; i_29 < 19;i_29 += 1)
                    {
                        {
                            var_57 *= ((var_5 ? (457131751 || 242) : -1));
                            arr_100 [i_19] [i_26] = var_0;
                            var_58 = (arr_42 [i_19 - 1] [11] [10] [i_19]);
                            var_59 -= (arr_56 [i_19]);
                        }
                    }
                }
            }
            var_60 = (min(var_60, var_14));

            for (int i_30 = 0; i_30 < 21;i_30 += 1)
            {
                /* LoopNest 2 */
                for (int i_31 = 2; i_31 < 20;i_31 += 1)
                {
                    for (int i_32 = 3; i_32 < 20;i_32 += 1)
                    {
                        {
                            var_61 = (min(var_61, (((65535 ? var_0 : ((((arr_83 [i_26] [i_30] [15]) > 68))))))));
                            var_62 = (var_1 || var_7);
                        }
                    }
                }
                arr_110 [i_19] [i_26] [i_30] = (253 / var_8);
            }
            for (int i_33 = 1; i_33 < 20;i_33 += 1)
            {
                var_63 = (((arr_48 [i_19] [i_19]) << (((4915819020624260642 << 0) - 4915819020624260641))));
                var_64 = var_1;
            }
            for (int i_34 = 1; i_34 < 20;i_34 += 1)
            {
                /* LoopNest 2 */
                for (int i_35 = 1; i_35 < 20;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 21;i_36 += 1)
                    {
                        {
                            var_65 = ((var_4 ? var_12 : (arr_89 [i_19])));
                            var_66 = ((~((-646464006 ? var_5 : (arr_83 [14] [i_26] [i_19])))));
                        }
                    }
                }
                arr_122 [i_19] = (var_15 ? var_14 : 1);
            }
        }
    }
    for (int i_37 = 1; i_37 < 12;i_37 += 1)
    {
        var_67 = ((var_13 ? (arr_0 [i_37 - 1] [i_37]) : ((~((max(var_11, var_2)))))));

        /* vectorizable */
        for (int i_38 = 0; i_38 < 16;i_38 += 1)
        {
            var_68 = (var_15 ^ var_13);
            var_69 = (-9223372036854775807 - 1);
            /* LoopNest 3 */
            for (int i_39 = 1; i_39 < 15;i_39 += 1)
            {
                for (int i_40 = 3; i_40 < 15;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 1;i_41 += 1)
                    {
                        {
                            arr_137 [i_38] [i_38] [8] [i_40] [12] &= ((var_11 ? 20 : var_2));
                            var_70 = (max(var_70, ((((arr_105 [i_40 - 1] [i_38] [i_40 - 3] [14] [4]) ^ var_6)))));
                        }
                    }
                }
            }
        }
        for (int i_42 = 3; i_42 < 15;i_42 += 1)
        {
            var_71 = var_10;
            var_72 = (min(var_72, (((min(var_16, 62337))))));
        }
        var_73 = (min(var_10, var_8));
    }
    for (int i_43 = 0; i_43 < 17;i_43 += 1)
    {
        arr_145 [8] &= (max(((((max((arr_13 [i_43] [i_43] [i_43]), var_0))) ? (0 ^ var_10) : var_0)), ((~((max(var_8, -6)))))));
        arr_146 [i_43] = ((-(max(((min((arr_107 [i_43] [i_43] [i_43] [i_43] [i_43] [i_43]), var_10))), var_13))));
        /* LoopNest 2 */
        for (int i_44 = 0; i_44 < 17;i_44 += 1)
        {
            for (int i_45 = 0; i_45 < 17;i_45 += 1)
            {
                {
                    var_74 = 0;
                    arr_152 [i_44] &= (var_2 > -var_11);
                    var_75 = (max(35, 196));
                }
            }
        }
    }
    #pragma endscop
}
