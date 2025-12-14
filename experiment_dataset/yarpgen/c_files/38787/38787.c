/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((min((var_8 | var_0), (min(var_4, var_0))))) ? (((((var_0 ? var_8 : var_8))) ? var_4 : (((var_6 ? var_5 : var_9))))) : (min(-var_6, var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (arr_6 [i_0] [i_1] [i_0])));
                    var_12 = (min(var_12, (max(var_8, 127))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_13 = (~var_7);
                        var_14 = (arr_7 [i_3 + 1] [1]);
                        var_15 = ((var_0 ? var_8 : (arr_2 [i_1])));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_16 ^= ((((min(var_8, (var_2 / var_9)))) ? (((((min(var_1, var_7))) ? (arr_8 [i_2 + 3] [i_2 + 1] [i_2] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_8 [9] [i_1] [1] [9] [i_1] [i_2])))) : (min(var_2, (((var_7 ? 8128 : 0)))))));
                        var_17 = (max(var_17, (((-((((min(var_0, var_3)) == var_2))))))));
                    }
                    var_18 = (min(var_18, var_4));
                    arr_13 [i_2] [i_1] [13] [11] = (arr_7 [i_1] [i_1]);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_19 |= (max(((((((arr_12 [i_5] [6] [i_5] [i_5]) >> (20265 - 20243)))) / var_0)), ((((arr_7 [i_5] [i_5]) / (arr_2 [i_5]))))));
        var_20 += ((0 ? 1 : -1));
        var_21 = ((((max(((40908 ? 3257290352 : 1)), (9238 >= 1224271918)))) ? var_4 : ((((((((arr_2 [0]) && var_9)))) / (max(var_9, var_0)))))));

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_5] = (((max(((((arr_9 [i_6] [1] [i_5] [i_5]) != var_8))), (((arr_9 [i_5] [i_6] [i_5] [i_5]) ? var_5 : var_9))))) || -var_8);
            var_22 ^= ((((min((((var_8 - (arr_12 [15] [12] [i_6 - 1] [i_5])))), ((var_0 / (arr_1 [i_6 - 1])))))) ? (((((((arr_14 [i_5]) >= var_0))) < ((1 ? 1 : 1))))) : (max((arr_10 [i_5]), (max(var_5, (arr_6 [14] [i_5] [i_6])))))));
            var_23 = (max(((((((var_4 ? var_2 : var_4))) && (((var_9 ? var_7 : var_7)))))), (min((var_1 - var_5), (~var_7)))));
        }
        var_24 *= ((((var_7 ? (arr_17 [i_5] [i_5]) : var_6))) && (((var_7 ? 9664513977136298918 : (arr_14 [i_5])))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_25 *= (arr_22 [i_7 + 1]);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    {
                        var_26 = var_8;
                        var_27 = (var_0 / var_2);

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_28 *= ((140 ? -54 : 29825));
                            var_29 |= 30242;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_30 ^= (var_4 & var_5);
                            arr_41 [i_15] [0] [i_14] [i_13] [i_12] [1] [11] = (var_5 || var_5);
                        }
                        var_31 = arr_40 [1] [18] [i_7] [1] [i_7];
                        var_32 &= (arr_39 [i_7] [1] [i_13] [i_14] [i_7 - 1]);
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_33 = ((((((arr_22 [i_7 + 1]) * (arr_24 [i_7] [i_7 + 1] [i_7 + 1])))) ? ((((arr_35 [i_16] [i_12] [i_12] [i_7]) << (var_4 - 6506946070433855460)))) : var_6));
                        var_34 = (max(var_34, (var_6 / var_0)));
                        var_35 -= (arr_39 [i_7] [i_12] [i_13] [i_16] [i_7]);
                    }
                    var_36 = (~27768);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {

                    for (int i_19 = 3; i_19 < 21;i_19 += 1)
                    {

                        for (int i_20 = 1; i_20 < 21;i_20 += 1)
                        {
                            var_37 = (1 / -105);
                            arr_53 [10] [i_19 - 3] [i_18] [1] [12] = (((arr_31 [i_20 - 1] [i_19 + 1] [i_19] [i_19 - 2] [i_19] [i_19] [i_17]) ? (arr_29 [i_19 - 2] [i_18] [i_18] [i_19]) : var_0));
                        }
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            var_38 *= (((arr_44 [i_19 - 3] [1] [21] [i_19 + 1]) ? (arr_44 [i_19 - 2] [i_17] [i_18] [i_17]) : var_0));
                            var_39 = (var_6 && var_0);
                            var_40 = var_9;
                            var_41 = var_4;
                        }
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_42 ^= var_9;
                            var_43 = (((arr_23 [i_17]) ? (arr_44 [i_7] [1] [i_18] [i_19]) : (~65535)));
                            arr_60 [i_18] [i_17] [i_18] [i_19 - 1] [i_22] = ((((((arr_57 [i_18] [i_19 - 1] [i_17] [i_17] [i_18] [i_18]) ? var_8 : var_8))) ? ((((arr_26 [11] [i_22] [i_22] [i_18]) ^ var_5))) : var_0));
                            var_44 *= var_5;
                        }
                        var_45 = (min(var_45, (arr_28 [i_7 + 1] [i_7 + 1] [1] [i_19])));
                        var_46 *= var_5;
                    }
                    var_47 ^= 9223372036854775783;
                }
            }
        }
        var_48 = (min(var_48, ((((arr_46 [i_7] [i_7] [i_7 - 1]) ? var_9 : var_8)))));
    }
    for (int i_23 = 0; i_23 < 19;i_23 += 1)
    {

        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            var_49 = (arr_32 [i_24] [10] [i_24] [i_24] [i_23] [i_24] [i_24]);

            for (int i_25 = 3; i_25 < 17;i_25 += 1)
            {
                var_50 = var_8;
                var_51 ^= ((max(var_0, var_3)));
            }
            for (int i_26 = 0; i_26 < 19;i_26 += 1)
            {

                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {
                    var_52 = (min(var_52, var_6));
                    var_53 = (((1 >= 937151819) * (3 && 7317645777145777980)));
                }
                /* vectorizable */
                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {
                    var_54 = (arr_28 [6] [i_24] [6] [6]);
                    arr_75 [i_28] [i_28] [i_28] [i_26] [i_24] [17] &= ((var_7 < (arr_62 [i_23])));
                    var_55 ^= ((~((var_0 ? var_8 : var_2))));
                }
                var_56 = 2626460787;
            }
            for (int i_29 = 4; i_29 < 16;i_29 += 1)
            {

                for (int i_30 = 0; i_30 < 19;i_30 += 1)
                {
                    arr_81 [i_30] [1] [i_24] [i_30] = (((arr_56 [i_23] [i_23] [i_30] [i_23]) ? (min((min((arr_25 [i_30] [i_23] [i_23]), -1)), 33522)) : (arr_24 [17] [i_29 + 1] [i_29 + 3])));
                    var_57 ^= (arr_70 [10] [i_24] [10]);
                    var_58 = var_9;
                    var_59 = var_9;
                }
                /* vectorizable */
                for (int i_31 = 2; i_31 < 17;i_31 += 1)
                {
                    var_60 = (((arr_32 [i_31] [i_31 - 1] [i_31 - 2] [i_31] [i_23] [i_23] [i_31 - 1]) ? var_1 : (arr_32 [i_31 + 2] [i_31 + 2] [i_31 + 1] [i_31] [i_31] [18] [i_31 - 1])));
                    var_61 &= (((((var_3 ? var_0 : var_8))) ? var_3 : var_9));
                }
                arr_86 [i_29 + 3] [i_29 + 3] [i_23] [i_24] = (((min((max(var_7, var_4)), (!var_5))) <= (min(var_4, ((((arr_59 [i_29 - 1] [0] [i_23] [i_23] [i_23]) < (arr_30 [i_24]))))))));
                var_62 *= (min(((max((var_0 || var_3), ((var_7 ? (arr_46 [i_29 + 2] [i_24] [i_23]) : (arr_79 [i_29 + 3] [i_29] [i_29] [i_23])))))), ((11168988539262636864 ? 9223372036854775789 : 0))));
            }
        }
        for (int i_32 = 0; i_32 < 19;i_32 += 1)
        {
            var_63 |= (-9239 ? var_8 : (-9223372036854775784 != 1));
            var_64 |= (!0);
        }
        var_65 = ((~(((var_9 + var_6) + ((var_5 ? var_1 : var_3))))));
    }
    /* LoopNest 2 */
    for (int i_33 = 0; i_33 < 1;i_33 += 1)
    {
        for (int i_34 = 3; i_34 < 23;i_34 += 1)
        {
            {
                var_66 = var_0;
                var_67 |= (((((var_8 / 1) ? (var_5 + var_8) : (arr_93 [12] [i_34 - 1])))) ? var_4 : (max((arr_92 [4] [4]), var_6)));
            }
        }
    }
    #pragma endscop
}
