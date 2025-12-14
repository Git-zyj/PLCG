/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = ((var_6 == (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_0] [i_2] = (((arr_4 [i_0] [i_1] [i_2]) ? (((!(arr_1 [i_0])))) : 1388377415));
                        arr_11 [i_0] [i_1] [i_1] = (((18026 << (-14 + 25))) & (arr_8 [i_2] [i_2] [i_2] [i_2]));
                        arr_12 [i_0] [i_0] = ((1389 ? 17444 : -108513894));
                        var_14 = 16725;
                        var_15 = (-25280 - 31465);
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 6;i_4 += 1)
        {
            var_16 = -32742;
            arr_17 [i_0] = arr_13 [i_0];
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_17 |= (((arr_13 [i_5 - 1]) ? 1022 : (arr_19 [2] [i_5 - 1] [i_5])));
                var_18 = (min(var_18, (arr_22 [i_0] [i_5] [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_19 = (!-1390);
                            var_20 = ((-1389 ? (arr_8 [i_7 + 1] [i_7 - 4] [i_5 - 1] [i_5 + 1]) : var_10));
                            var_21 ^= arr_23 [7] [i_5] [i_6] [i_7];
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {
                var_22 = (arr_25 [i_0] [i_5] [i_5 + 1] [i_5 + 1] [7]);
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 6;i_11 += 1)
                    {
                        {
                            var_23 -= var_9;
                            var_24 = (!var_9);
                        }
                    }
                }
            }
            var_25 += (var_0 && -31233);
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_26 = (-1265243050 | 18038);
            arr_39 [i_0] = ((~(arr_2 [i_0])));
            arr_40 [i_0] [i_0] = ((var_6 >= (arr_18 [i_0] [i_0] [i_12])));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_27 = -31466;
            var_28 = (arr_0 [i_0]);
            arr_43 [i_0] [i_0] [i_0] = var_9;
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_29 = (max(var_29, ((var_12 ? -1379 : (arr_29 [i_16] [i_15 - 1] [i_14 - 1])))));
                        var_30 = ((var_3 ? ((-(arr_31 [i_15] [i_14] [i_0]))) : (arr_41 [i_0] [i_14] [i_15 - 1])));
                    }
                    arr_50 [i_0] [i_0] [i_0] = var_11;
                    arr_51 [i_0] [i_0] [i_15 + 1] [i_15] = -32740;
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 9;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_31 = (!var_0);
                                var_32 = -2052308172;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                {
                    var_33 = ((var_7 ? var_12 : (arr_56 [i_19] [i_20] [i_20] [i_0])));
                    var_34 = 33553920;
                }
            }
        }
        var_35 = var_0;
    }
    for (int i_21 = 2; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_36 *= (arr_64 [i_21] [i_21]);
        var_37 = (((-19337 >= -28385) ? (min((arr_64 [i_21] [i_21 - 1]), ((-(arr_64 [i_21 - 1] [i_21]))))) : ((28672 ? (arr_65 [i_21 - 1]) : (arr_65 [i_21 + 3])))));
    }
    for (int i_22 = 2; i_22 < 11;i_22 += 1) /* same iter space */
    {
        var_38 = (((((((arr_66 [i_22 + 2] [i_22]) ? (arr_67 [i_22]) : (arr_65 [i_22]))) | 18026)) >> (((((!(arr_67 [i_22 + 3])))) % (min(-13940, -951322854))))));
        var_39 = -16544;
        var_40 &= var_3;
    }
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        for (int i_24 = 2; i_24 < 22;i_24 += 1)
        {
            {

                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 25;i_27 += 1)
                        {
                            {
                                arr_80 [i_24 - 2] [i_25] [i_26] [12] = (((((arr_73 [i_24 + 1] [i_24 + 1]) ? var_4 : var_6)) > (((!(!var_11))))));
                                arr_81 [i_23] [i_24] [i_25] [i_26] [8] [i_27] = ((arr_69 [i_26]) ? (arr_69 [i_23]) : -32);
                                var_41 -= (32742 - (arr_76 [i_23] [i_24 + 1] [i_24 + 1] [i_24 + 3] [i_27] [i_25]));
                            }
                        }
                    }
                    var_42 ^= (!var_2);
                    var_43 = (max(var_43, ((((((~(arr_72 [i_24 + 2] [i_24 - 2] [i_24])))) && (((-(var_12 && var_6)))))))));
                }
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    var_44 = (max(32750, ((((((var_2 && (arr_75 [1] [i_24] [i_24])))) >= (min((arr_70 [i_23]), var_6)))))));
                    arr_84 [i_24] = min((var_0 < 8916), (((arr_72 [i_23] [i_24 - 1] [i_28]) ? var_0 : var_7)));
                }
                /* vectorizable */
                for (int i_29 = 0; i_29 < 25;i_29 += 1)
                {
                    var_45 = var_3;
                    arr_88 [i_29] [i_24 + 2] [i_29] = ((!(arr_87 [i_24 + 2] [i_24 + 2] [i_23])));
                }
                var_46 = (max(var_46, (arr_85 [i_23] [i_24] [i_24] [i_23])));
                var_47 = max(var_5, ((((var_8 % (arr_72 [i_23] [i_23] [i_24]))))));
            }
        }
    }

    for (int i_30 = 1; i_30 < 21;i_30 += 1)
    {
        arr_91 [i_30] = 31465;
        var_48 = (arr_79 [i_30] [18] [i_30] [i_30 + 3] [i_30] [i_30] [i_30]);
    }
    for (int i_31 = 3; i_31 < 12;i_31 += 1)
    {
        /* LoopNest 3 */
        for (int i_32 = 1; i_32 < 10;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 13;i_33 += 1)
            {
                for (int i_34 = 4; i_34 < 12;i_34 += 1)
                {
                    {
                        arr_103 [i_31] [i_32 + 1] [i_32 + 1] [i_31] [i_32 + 1] = ((max(var_7, 1294749646)) >> ((((max(-16544, (arr_74 [i_31 - 3] [i_34 - 3])))) + 16566)));
                        var_49 = min((min((((arr_96 [i_31] [i_32] [i_31 - 3]) ? var_1 : var_5)), ((-33553894 ? -277480268 : 16544)))), var_2);
                        var_50 = var_1;
                        var_51 = arr_100 [i_31] [i_31] [i_33] [i_34 - 2];
                    }
                }
            }
        }

        for (int i_35 = 0; i_35 < 13;i_35 += 1)
        {
            var_52 = -18046;
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 13;i_36 += 1)
            {
                for (int i_37 = 0; i_37 < 13;i_37 += 1)
                {
                    {
                        var_53 = ((((((max(33553907, (arr_66 [i_31 - 2] [i_31 - 2])))) ? ((max(var_3, (arr_78 [i_31 - 3] [i_31] [i_31] [i_31] [i_31 - 2])))) : (min(var_1, 1713837370))))) ? (max(-var_4, (arr_102 [i_31] [i_31] [i_35] [i_36] [i_36] [i_37]))) : var_3);
                        var_54 &= -951890308;
                        var_55 = (~985118374);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_38 = 1; i_38 < 12;i_38 += 1)
            {
                for (int i_39 = 0; i_39 < 13;i_39 += 1)
                {
                    {
                        var_56 = min(var_3, (((!((min(var_3, (arr_106 [i_38 - 1] [i_31 + 1]))))))));
                        var_57 = (arr_108 [i_31] [i_31 + 1] [i_31] [i_31]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_40 = 2; i_40 < 9;i_40 += 1)
        {
            var_58 = ((((var_11 || (arr_67 [i_31]))) ? (arr_90 [i_40]) : (arr_65 [i_40])));
            var_59 = ((var_11 + (arr_115 [i_31 - 3] [i_31] [i_40 + 1] [i_40 + 2])));
        }
        for (int i_41 = 4; i_41 < 12;i_41 += 1)
        {
            arr_127 [i_31 - 2] [i_31] = arr_74 [i_31 - 2] [i_31 - 2];
            arr_128 [i_31] [i_31] = max((max((arr_75 [i_31] [i_31] [i_31 + 1]), -951890304)), (arr_71 [i_31]));
        }
        var_60 *= 27480;
    }
    /* vectorizable */
    for (int i_42 = 2; i_42 < 22;i_42 += 1)
    {
        var_61 = (max(var_61, ((var_4 ? var_7 : var_0))));
        var_62 ^= (arr_78 [i_42 - 1] [i_42] [i_42 - 1] [i_42 - 1] [i_42 + 1]);
        var_63 = var_2;
    }
    var_64 = var_1;
    #pragma endscop
}
