/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-92 * 26991);
    var_17 = (2250 * 681649658);
    var_18 |= ((1466147517 << (255 - 248)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 = (!9774);
            arr_5 [i_0] [i_0] = var_10;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = (arr_1 [i_1] [i_0]);
                arr_10 [1] [i_0] [i_0] [i_0 + 1] = (arr_1 [i_0] [i_0]);
                var_20 = (max(var_20, ((((arr_4 [i_0 + 1]) + (arr_4 [i_0 - 2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_21 -= ((((0 && (arr_14 [i_0] [i_0] [13] [i_0 + 2] [i_0]))) && var_5));
                            arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = ((((((arr_0 [i_4]) ? (arr_3 [i_0] [2] [i_0 - 1]) : var_7))) ? (arr_4 [i_0 - 2]) : (arr_7 [i_0] [i_0] [i_2] [i_4])));
                            var_22 *= (((((arr_8 [i_4] [8] [i_2] [i_0]) || var_8))) >> (((1 | -4096) + 4104)));
                            var_23 = (max(var_23, 1));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_24 = var_5;
                            var_25 |= var_3;
                            var_26 += 1;
                            var_27 = -4109;
                            var_28 = (((arr_2 [i_0] [i_0] [i_0 + 1]) ? ((185 ? var_12 : -32759)) : var_4));
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_29 = (-(arr_1 [i_0 - 2] [i_0]));
                    var_30 = (max(var_30, (((1 << (-2 + 32))))));
                }
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    var_31 = 2047;
                    var_32 = var_14;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_33 = (max(var_33, (((0 || (-64 || -2104872790))))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_34 = (max(var_34, ((((arr_18 [i_0 + 1]) ? var_14 : (arr_18 [i_0 + 3]))))));
                        arr_33 [i_0 + 1] [i_0] [i_5] = ((!(arr_17 [i_0])));
                        arr_34 [i_0] [i_10] [i_5] [i_1] [i_0] = ((var_14 && (((3613317638 ? (arr_15 [i_0] [3] [i_0] [1] [i_11]) : var_4)))));
                    }
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_38 [i_0] [i_0] [i_5] [i_0] [i_12] = ((var_2 ? 1 : 1));
                    var_35 = ((~var_0) ^ var_6);
                }
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_36 = (max(var_36, var_14));
                    arr_43 [i_0] [i_0] = ((58 > (((1 != (arr_30 [i_0] [i_0] [i_13] [i_14]))))));
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                {
                    var_37 &= (2147483647 == 254);
                    var_38 -= ((0 << (var_10 - 64)));
                    var_39 += (((((~(arr_6 [i_0 - 1])))) ? var_3 : (~var_11)));
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                {
                    var_40 ^= var_15;
                    var_41 = (((-2147483647 - 1) || (((58 ? 681649661 : 15669793660986705413)))));
                    var_42 += ((var_10 | (arr_50 [i_0 + 2] [i_0 + 1])));
                }
                var_43 *= 0;
                var_44 = (~-66);
            }
        }
        for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
        {
            var_45 = var_4;
            var_46 = ((var_10 != (arr_4 [i_0 - 1])));
        }
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            var_47 = ((0 ? 3613317641 : 0));
            arr_57 [i_18] [i_0] [i_18] |= (0 ? 197 : 1466147532);
            var_48 ^= ((30345 ? -586871921 : -1281590679));
            arr_58 [i_18] [i_18] &= (arr_36 [i_18] [i_18] [i_18]);
        }
        var_49 ^= 1;
        var_50 = (-26991 ^ 1);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            {
                                arr_69 [1] [13] [i_21] [i_0] = (((var_1 - (arr_64 [i_0] [i_21] [i_20] [i_0] [i_0] [i_0]))));
                                var_51 += 3613317634;
                                var_52 ^= (((~(arr_31 [6] [i_0] [i_0] [i_21] [i_0]))));
                                var_53 = (((arr_8 [i_0] [i_0] [i_0 - 2] [i_0 - 1]) ^ 14657));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 15;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            {
                                var_54 -= ((!(arr_29 [i_0 + 2])));
                                arr_75 [i_0] [i_19] [i_23] |= -var_10;
                            }
                        }
                    }
                    var_55 = (((var_8 < var_12) && var_2));
                    arr_76 [i_0] [i_0] [i_0] [i_0] = 89;
                    arr_77 [i_0] [1] [i_0] = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 1;i_25 += 1)
    {
        var_56 = var_1;
        var_57 = 70368744177663;
    }
    for (int i_26 = 3; i_26 < 21;i_26 += 1)
    {
        arr_84 [i_26] = (((max((arr_81 [i_26 - 3]), var_2)) * (!15906352839825464858)));
        var_58 = 1993580139588743077;
        var_59 = ((-(min((arr_81 [i_26 + 1]), var_3))));
    }
    #pragma endscop
}
