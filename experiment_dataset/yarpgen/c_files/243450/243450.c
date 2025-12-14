/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(-494059200, 1)));
    var_15 = (!var_7);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_6 [10] = ((arr_2 [i_0]) ? (arr_2 [i_1]) : 1);
            arr_7 [i_0] = ((-1 == (arr_5 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = 1;
            var_16 = 3941958912;
        }
        arr_12 [4] = ((1 ? (((1 ? (arr_1 [i_0]) : 69557321))) : -4158771499));
        arr_13 [i_0] = (-127 - 1);
        var_17 = (min(var_17, (((min(var_11, (arr_3 [i_0])))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_18 = (((arr_14 [i_3 + 2]) ? (arr_14 [i_3 - 2]) : (arr_16 [i_3 + 3])));
        arr_17 [i_3] [i_3 + 2] = (arr_15 [1]);
        var_19 = (((arr_16 [13]) ? 24680 : (((arr_14 [i_3]) ? var_6 : var_2))));
        var_20 = (max(var_20, (((-(-2147483647 - 1))))));
    }
    for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = ((max((arr_21 [i_4 - 3] [i_5]), (arr_21 [i_5] [i_5]))));
            var_22 = (((((!(arr_15 [i_4 - 3])))) << ((((31 ? 52 : var_10)) - 21))));
            var_23 = (min(var_23, (((var_3 ^ (((!(arr_20 [i_4 - 3])))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_24 = ((max((min(2147450880, var_13)), (-127 - 1))));
                        var_25 ^= (min((min(var_11, ((-120 ? (arr_16 [4]) : (arr_28 [i_5] [i_5] [i_5] [12]))))), ((((arr_26 [i_4 - 1] [i_4 - 1]) == var_11)))));
                    }
                }
            }
            var_26 = (((((max((arr_28 [i_4 + 3] [i_4 + 1] [i_5] [i_4 + 3]), (max(-126, var_1)))))) | (min(3, 2447733715))));
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_27 = (((((((min(93, -13))) - 1))) ? ((min(1002827595, ((1 ? 238115434 : (arr_23 [i_4] [13] [i_4 + 3])))))) : (max(var_9, 1))));

            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                var_28 = min(((((arr_20 [i_4]) == (268402688 == 39798)))), ((((arr_16 [16]) ? (arr_34 [i_4] [i_8 - 1]) : 1))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_29 = (min((arr_27 [i_4] [i_4] [i_9] [i_9 - 2]), (arr_25 [i_4] [i_9])));
                            var_30 = ((!(!var_1)));
                            var_31 = 402653184;
                            arr_42 [0] [10] [i_9] [i_10] = (((((((var_8 ? 66 : (arr_38 [i_4] [i_8] [i_9] [i_10] [i_11])))) ? (min(var_13, var_7)) : 57))) ? (min(((min(1002827595, 463291701))), (arr_26 [i_4 + 3] [i_10 + 1]))) : (((-var_8 + (arr_34 [i_4 - 3] [i_8 + 3])))));
                            var_32 = (max((arr_20 [0]), 463291700));
                        }
                    }
                }
                var_33 = (max(var_8, (arr_22 [i_4 - 3] [i_4 - 4])));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_34 += var_6;
                arr_45 [i_4] [i_8] [i_12] = ((1216677879 ? (max(var_6, (max(-14, -463291702)))) : (arr_34 [i_4] [i_4])));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_35 = var_1;
                            var_36 = var_0;
                            arr_55 [i_4] [i_4] [i_4] [0] [12] |= 37;
                        }
                    }
                }
                var_37 = (min(var_37, (((-(25738 ^ var_2))))));
                var_38 = var_8;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_62 [i_4] [i_4 - 3] [i_8 - 1] [i_8] [i_13] [i_16] [i_17] = 1185717140;
                            arr_63 [i_4] [i_4] [i_4] [i_4] [i_4 + 2] = ((((((arr_15 [5]) ? var_10 : (arr_27 [i_4] [i_13] [i_16] [i_17])))) ? 63 : 3323094075));
                            var_39 = (((arr_53 [i_8] [i_8 + 1] [i_8] [10] [i_8 + 3] [i_8 + 2]) ? 2446158055 : -101));
                            var_40 = (((arr_51 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_4 + 1] [i_4 - 1]) << (((((arr_27 [i_8] [2] [i_16] [i_17]) ? var_9 : 25737)) - 79))));
                        }
                    }
                }
            }
            arr_64 [13] [i_8 + 4] = (max((arr_30 [i_4 - 4]), var_2));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {
                        var_41 = (((arr_46 [i_4 - 3]) ? 40401 : (arr_48 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 4])));

                        for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
                        {
                            var_42 = (~113);
                            var_43 = (max(var_43, var_2));
                            arr_75 [i_4 + 2] [i_4 + 3] [i_4 - 3] [i_4 + 1] [i_4] [i_19] = (arr_51 [i_4 + 3] [i_4 - 3] [7] [1] [i_4 + 2] [i_4 - 1]);
                        }
                        for (int i_22 = 0; i_22 < 17;i_22 += 1) /* same iter space */
                        {
                            var_44 = ((1 ? (arr_65 [i_4 + 1] [i_4 + 1] [i_4]) : var_13));
                            var_45 = ((-8577110787496449046 ? 4 : -6579510442930258664));
                        }
                        var_46 = 255;
                    }
                }
            }
            var_47 = (((arr_24 [i_4 - 2] [i_4 - 4]) ? -83 : -1017038125));
        }
        for (int i_23 = 0; i_23 < 17;i_23 += 1)
        {
            var_48 = (arr_18 [i_4 - 4]);
            var_49 |= -79;
            var_50 = ((min(var_6, (arr_54 [1] [i_23] [i_4 - 3] [i_4 - 1] [i_4]))));
        }
        var_51 = (((((max(-941389942, 4294967295)) ? var_9 : (min(30031, 634461047892205282))))));
        arr_81 [i_4] = ((49 == (((arr_39 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4]) ? 595718093 : -108))));
        arr_82 [1] [i_4] = (((!1) ? ((min((arr_19 [i_4] [6]), 65535))) : (min((arr_29 [i_4] [i_4 - 4] [i_4]), 39789))));
    }
    for (int i_24 = 4; i_24 < 14;i_24 += 1) /* same iter space */
    {
        var_52 = 42944;

        /* vectorizable */
        for (int i_25 = 2; i_25 < 16;i_25 += 1)
        {
            var_53 = 128;
            arr_89 [i_24 - 4] [i_24 - 1] = var_11;
        }
        for (int i_26 = 0; i_26 < 17;i_26 += 1)
        {
            arr_92 [i_24 - 3] = var_0;
            arr_93 [i_24] [i_24] = (+-1614256231);
        }
        for (int i_27 = 0; i_27 < 17;i_27 += 1)
        {
            var_54 += var_11;

            /* vectorizable */
            for (int i_28 = 0; i_28 < 17;i_28 += 1)
            {
                arr_100 [i_27] [i_27] = 1;
                var_55 = (113 || var_9);
            }
            for (int i_29 = 1; i_29 < 15;i_29 += 1)
            {
                var_56 = -5887897640263067406;
                arr_104 [i_27] [i_27] = (min((arr_20 [i_29 + 1]), -162));
            }
            /* vectorizable */
            for (int i_30 = 0; i_30 < 1;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 17;i_31 += 1)
                {
                    var_57 += var_5;
                    var_58 = (min(var_58, (((788739172 << (((arr_60 [i_24 - 2] [i_27] [i_30] [i_30]) - 81)))))));
                }
                for (int i_32 = 0; i_32 < 17;i_32 += 1)
                {
                    var_59 ^= var_7;
                    var_60 = ((-3095077582999024784 ? var_10 : (arr_77 [i_24] [i_24] [i_27] [i_24 + 1])));
                }
                var_61 = (min(var_61, (((var_9 || var_13) != var_8))));
            }
        }
        var_62 ^= 1;
    }
    #pragma endscop
}
