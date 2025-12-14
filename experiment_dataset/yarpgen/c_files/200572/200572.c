/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_14 = ((((1764669475 ? 536870912 : 18)) != ((((((max(2509862641, 0))) || 1764669475))))));
            arr_5 [i_0] [i_1] [i_1] = (max(((min(12, -17))), -var_3));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = (arr_8 [i_0] [18] [i_0]);
            arr_11 [22] [i_2] [i_2] = var_10;
            arr_12 [24] [i_2] [i_0] = (((min(126, 9))) ? (arr_6 [i_0] [i_2 - 1]) : -0);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_15 = ((var_8 ? var_5 : var_4));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_23 [23] [23] [i_3] [i_5] [i_6] = var_10;
                            var_16 = (max(var_16, (((var_8 <= (arr_20 [i_6] [i_0] [i_0] [i_4 + 2]))))));
                            var_17 = (max(var_17, ((((arr_16 [i_0] [i_0]) > (arr_16 [i_0] [i_0]))))));
                            var_18 = 59;
                            var_19 = (max(var_19, ((~(arr_18 [i_3 + 3] [i_0] [i_3 + 2])))));
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_7] [i_7] = ((var_5 ? (arr_20 [i_7] [i_7] [i_7] [i_7]) : var_5));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_20 = (max(var_20, (~var_0)));
                            arr_36 [i_0] [i_7] [i_8] [i_7] [i_10] = var_8;
                        }
                    }
                }
            }
            arr_37 [i_7] = var_3;
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            var_21 = (max(var_21, ((-72 ? (1811130798 % -7) : (2601061902 / 47)))));
            arr_40 [i_11] [i_11] [i_11] = ((((max(var_2, (arr_30 [9] [i_11] [i_11] [i_11] [13] [i_11])))) <= (((!((min((arr_34 [i_11] [i_11] [19] [i_0] [i_0]), (arr_13 [i_0] [i_11] [i_11])))))))));
            var_22 = ((var_8 ^ (~var_3)));
            arr_41 [i_11] = (((!3942149140) << (((arr_7 [i_0] [16]) - 1889769184))));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                var_23 = 35;
                var_24 -= ((2458477468 ? 32768 : 1866715095));
            }

            for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
            {
                arr_49 [i_12] = var_13;
                var_25 &= var_10;
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                arr_54 [i_15] [i_12] [i_0] = var_13;
                arr_55 [i_0] [i_12] [i_12] [i_15] = (!486009108);
                var_26 = (max(var_26, (((((max((arr_39 [i_0] [10] [i_15]), 14))) && (var_7 < var_10))))));
                var_27 = (max(var_27, var_8));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
            {

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_28 *= var_4;
                    var_29 = (max((min(-1, -13)), ((((-(arr_8 [1] [i_12] [i_16])))))));
                }

                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    arr_67 [i_12] [i_12] = (arr_61 [i_12] [i_16] [i_12] [i_12]);
                    arr_68 [18] [18] [18] [0] [i_12] [12] = ((var_8 ? (max(1406706765, 52)) : (((min(-82, -17))))));
                    var_30 &= (~4194304);
                    arr_69 [i_16] &= (((((var_10 - 20) % (min(2570616602, -34)))) >> (((arr_47 [i_18] [i_0] [i_16] [i_18]) + 29))));
                    arr_70 [i_12] [i_12] [i_16] [i_12] [i_18] [i_18] = var_8;
                }
                var_31 = ((1345474828 ? (arr_50 [i_12]) : 2525103844));
            }
            for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
            {
                arr_74 [i_0] [i_12] = var_6;
                arr_75 [i_12] [i_19] = var_10;
                arr_76 [i_19] [i_12] [i_0] [i_0] &= 23;
            }
            arr_77 [i_0] [i_12] = ((!(!-108)));
            var_32 = var_4;
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
        {
            var_33 = ((~(min(var_10, (arr_21 [i_0] [i_0] [i_0] [10] [i_0] [10] [i_20])))));
            var_34 = (min(((-(3737486355 >= -4))), ((var_5 ? ((min(var_6, var_13))) : (-1 >= 1811130802)))));
            arr_80 [i_20] = min(1266630963, (((var_7 != (max((arr_42 [i_20]), var_10))))));
            arr_81 [i_0] [i_0] [6] = (1994596897 % ((((var_13 + 2147483647) >> var_2))));
        }
        var_35 *= ((var_3 ? 1661928114 : (((((arr_33 [i_0] [i_0] [11]) <= var_9))))));
    }
    var_36 *= var_0;
    var_37 = 35;
    var_38 = var_12;

    /* vectorizable */
    for (int i_21 = 3; i_21 < 16;i_21 += 1)
    {
        var_39 = var_4;

        for (int i_22 = 3; i_22 < 17;i_22 += 1)
        {
            arr_88 [i_21] = var_0;
            arr_89 [i_21] [i_21] = (arr_3 [i_21] [i_21] [1]);
            arr_90 [i_21 + 2] [i_21] = var_12;
            arr_91 [i_21] [i_22 + 1] [i_22] = ((!(arr_30 [11] [4] [i_21 - 2] [i_21] [i_21] [i_21 - 1])));
        }
    }
    #pragma endscop
}
