/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 2] = (((var_1 & 4575657221408423936) & var_10));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
            {
                var_12 = (arr_0 [i_0 - 2]);
                var_13 ^= (((arr_8 [i_0 - 2] [i_1] [i_2 + 1] [i_1]) ? var_1 : var_8));
                var_14 = (max(var_14, (((var_10 ? 2326672656452044129 : var_5)))));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_14 [i_0 - 2] [i_2] = ((var_0 ? (arr_11 [i_2]) : (arr_11 [i_2])));
                    var_15 = ((((-(arr_10 [i_0 - 1] [i_2] [i_3]))) >= (!3292336338782945371)));
                }
                for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_2] [i_2] = -1;
                    arr_19 [i_0] [i_2] [2] [i_0] = -var_3;
                    var_16 = (arr_1 [i_4 - 1]);
                }
                for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_17 = var_6;
                    arr_24 [i_0 + 1] [i_1] [i_2] [i_5] [i_1] = ((var_6 <= (arr_23 [i_2])));
                    var_18 ^= (var_6 + var_1);
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_2] [i_7 - 1] = (arr_8 [i_0] [2] [i_0] [i_0 - 2]);
                        arr_30 [i_2] = var_2;
                        arr_31 [i_7 - 3] [i_2] [4] [i_2] [10] = (((arr_1 [i_0 - 2]) ? (3292336338782945373 / 18446744073709551598) : var_10));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_19 = ((3292336338782945373 ? 30 : 14703923684451846037));
                        var_20 = 1;
                        var_21 ^= var_4;
                        arr_34 [i_2] = (((arr_4 [i_8] [i_8]) % var_5));
                        var_22 += var_6;
                    }
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_23 = (max(var_23, (((255 ? (arr_32 [i_2] [i_2] [i_2 - 2] [0] [i_2] [i_0] [i_2]) : 15154407734926606244)))));
                        var_24 ^= var_1;
                    }
                    var_25 = (arr_0 [i_2 - 2]);
                }
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    var_26 = ((((var_5 ? (arr_17 [i_0] [i_1] [i_1] [i_10]) : 18446744073709551608)) <= -var_1));
                    var_27 -= (((var_4 | 68) ? (!var_9) : (!30)));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_28 ^= -var_4;
                    var_29 ^= 0;
                    arr_42 [i_2] = (!4575657221408423936);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_30 = (arr_12 [i_2]);
                    arr_46 [i_0] [i_1] [i_2] [i_2] = ((1846602788 ? var_2 : (-21 - 282472489)));
                }
            }
            for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] [5] [i_1] [0] = var_1;
                var_31 &= ((var_2 ? var_1 : (arr_1 [i_13])));
            }
            arr_51 [i_0] = (var_9 < var_1);
            arr_52 [i_1] [i_1] [i_1] &= (-var_6 ? (188 <= 33776997205278720) : -var_7);
            var_32 ^= (var_2 & -9223372036854775799);
        }

        for (int i_14 = 3; i_14 < 8;i_14 += 1)
        {
            var_33 = ((15154407734926606244 ? (!2221415496) : var_1));
            var_34 ^= (~3609735120);
        }
    }
    for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
        {
            arr_61 [i_15] [i_15] [i_15 - 2] = (!var_9);
            arr_62 [i_15 - 1] [i_15] = (((arr_28 [i_16]) ? 5222471113278023925 : -var_7));
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_35 = ((2147483647 <= (0 && var_8)));
                            var_36 = (max(var_36, (var_9 + 6)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
        {
            var_37 = (max(var_37, -var_7));
            var_38 ^= (var_1 || 127);
            var_39 ^= (!0);
            var_40 = var_8;
        }
        arr_72 [i_15] = (((18446744073709551598 ? (arr_69 [i_15] [i_15] [i_15] [i_15] [i_15]) : 5222471113278023934)));
    }
    for (int i_21 = 3; i_21 < 21;i_21 += 1)
    {

        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            var_41 ^= ((((max((1 || 4711426206841377280), (min(105, var_8))))) <= ((7141438277938399768 ? -62 : 2147483647))));
            arr_79 [i_21] [i_21] = (min((!5222471113278023930), var_8));
            arr_80 [18] [i_22] = arr_74 [i_21];
            arr_81 [i_21] [1] = ((~(max(var_6, var_1))));
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 21;i_23 += 1)
        {
            arr_85 [i_21] |= -52;
            var_42 ^= ((var_3 < (((arr_74 [i_21]) | 5641070660307214300))));
            arr_86 [i_23 + 1] [i_23] = var_2;
        }
        for (int i_24 = 1; i_24 < 21;i_24 += 1)
        {
            arr_89 [i_21] = ((((var_6 > 1) && var_10)));
            var_43 = (!(!var_4));
            var_44 = (max(var_44, (((2147483647 ? (1 + -8748202418075711426) : 1)))));
        }
        /* vectorizable */
        for (int i_25 = 1; i_25 < 20;i_25 += 1)
        {
            var_45 = (min(var_45, ((((var_8 - 32) && ((((arr_91 [i_21] [i_21] [i_21 - 2]) - 32))))))));

            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                arr_94 [i_21] [1] [i_21] |= (((arr_83 [10] [i_21] [i_21 - 2]) && (arr_90 [i_21] [i_21])));
                var_46 = (((arr_92 [i_21] [i_25 - 1] [i_21] [i_26]) ? var_3 : 6310742128718005270));
            }
            arr_95 [i_21 - 3] [i_21 + 1] [i_21 - 3] = (((arr_75 [i_21 - 1] [i_25]) ? var_4 : var_6));
        }
        arr_96 [1] [i_21] = var_9;
    }
    #pragma endscop
}
