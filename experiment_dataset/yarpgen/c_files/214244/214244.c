/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? ((var_4 ? (var_8 ^ var_6) : ((var_4 ? var_5 : var_1)))) : ((var_9 ? var_4 : ((var_5 ? var_2 : var_1))))));
        arr_3 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_1] = (((((var_3 ? var_3 : var_2))) || (((var_4 ? var_5 : var_6)))));
            var_10 += var_2;
            arr_9 [i_2] = (((var_8 <= var_8) ? (var_2 || var_3) : (var_3 <= var_2)));
            var_11 = (((var_6 || var_8) ? var_9 : ((var_9 ? var_2 : var_6))));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_12 = (((((var_0 ? var_3 : var_8))) ? (((var_2 << (var_9 - 8216)))) : ((-2072063915 ? -2072063915 : 8))));
                        var_13 = var_7;
                        var_14 -= (((var_1 != var_7) ? var_4 : var_1));
                    }
                }
            }
            var_15 = ((var_2 <= var_3) <= ((var_1 ? var_5 : var_7)));
            var_16 = var_4;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_17 *= (((((var_9 ? var_4 : var_7))) ? (((var_5 ? var_2 : var_3))) : ((var_5 ? var_3 : var_7))));
                var_18 ^= ((((var_5 << (var_7 - 18024370161222395089))) <= ((var_2 ? var_6 : var_0))));
                var_19 = var_5;
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_25 [i_7] [i_7] [i_7] = ((((var_0 ? var_1 : var_6)) != ((var_4 ? var_8 : var_4))));
                arr_26 [i_7] [i_3] [i_1] [i_7] = ((var_3 ? ((var_8 ? var_7 : var_4)) : (((var_5 ? var_0 : var_9)))));
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                arr_32 [2] [2] [i_9 + 1] = (((((var_0 ? var_5 : var_0))) ? ((var_8 ? var_9 : var_7)) : (var_0 << var_1)));
                arr_33 [i_1] [i_1] [i_1] = ((var_9 ? var_9 : (var_9 >> var_1)));
                var_20 -= ((var_0 <= ((var_7 << (var_3 - 57836)))));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_21 = (min(var_21, (((var_3 ? (var_4 ^ var_8) : ((var_2 ? var_0 : var_8)))))));
                var_22 = (min(var_22, (var_5 <= var_2)));
            }
            var_23 = var_9;
            arr_37 [i_1] [i_1] = ((var_6 ^ (13 * var_2)));
            var_24 = (max(var_24, ((((((var_4 ? var_3 : var_3))) ? (var_2 <= var_3) : (var_7 || var_2))))));
        }

        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                arr_45 [i_11] [i_1] [i_11] = ((((((-2072063915 + 2147483647) << (1967218981 - 1967218981)))) ? var_8 : ((var_4 ? var_9 : var_4))));

                for (int i_13 = 3; i_13 < 9;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_25 |= ((var_9 ? ((var_9 ? var_0 : var_0)) : ((var_6 ? var_6 : var_1))));
                        arr_50 [i_11] [i_11] [i_12] [i_13] [i_14] [i_12] = (((((var_9 ? var_5 : var_1))) ? var_9 : (var_0 - var_5)));
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_26 = (max(var_26, ((((((var_1 ? var_0 : var_4))) <= ((var_3 ? var_1 : var_7)))))));
                        arr_55 [i_1] [i_1] [i_1] [i_11] [i_1] [i_1] = var_1;
                        arr_56 [i_1] [i_12] [i_1] [i_1] [i_1] [i_1] |= ((var_5 ? ((var_0 ? var_2 : var_9)) : (var_3 <= var_0)));
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_27 = var_5;
                        var_28 = ((0 ? 1341103119 : 1));
                        var_29 = (((1 << 2) ? ((var_4 ? var_2 : var_7)) : (var_9 / var_3)));
                        arr_60 [i_1] [i_11] [i_11] [i_13 + 1] [i_16] = var_3;
                        var_30 -= (((var_2 >> var_1) ? var_1 : var_8));
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        arr_64 [i_1] [i_12] [i_11] = var_5;
                        arr_65 [i_1] [i_11] [i_11 + 1] [i_12] [i_13] [i_17] = (((((var_2 ? var_3 : var_1))) ? ((var_1 ? var_4 : var_4)) : (var_2 / var_4)));
                        arr_66 [i_1] [i_1] [i_11] [i_1] [i_1] = ((var_0 ? var_9 : ((18446744073709551601 ? 1 : var_2))));
                        arr_67 [i_11] [i_11] = (((((20 ? 698597029 : 227))) ? 0 : 0));
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                    {
                        var_31 ^= (((((var_3 << (var_3 - 57834)))) ? (var_5 ^ var_8) : ((var_3 ? var_9 : var_7))));
                        arr_70 [i_11] = ((((var_1 ? var_6 : var_0)) <= (var_8 - var_2)));
                        var_32 -= ((var_6 ? (var_7 / var_8) : (((var_8 ? var_4 : var_6)))));
                        var_33 = (min(var_33, ((((((var_5 ? var_9 : var_0))) ? (var_5 ^ 698597023) : var_9)))));
                    }
                }
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    var_34 *= var_8;
                    arr_75 [i_11] [i_11] = var_5;
                    var_35 = var_6;
                    var_36 = var_0;
                }
                var_37 ^= var_8;
            }
            for (int i_20 = 1; i_20 < 1;i_20 += 1)
            {
                arr_79 [i_1] [i_11] [i_20] = (((var_4 <= var_1) ? ((var_6 ? var_0 : var_7)) : (((var_2 ? var_2 : var_4)))));
                arr_80 [i_1] [i_11] [i_11] = var_3;
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                arr_83 [i_11] = ((((var_1 ? var_5 : var_4)) ^ ((var_1 ? var_5 : var_6))));
                var_38 += var_8;
                var_39 = (min(var_39, var_9));
            }
            arr_84 [i_11] = var_8;
            arr_85 [i_1] [i_11] = ((var_6 <= (1 <= 33554176)));
        }
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 10;i_24 += 1)
                {
                    {
                        arr_93 [i_22] [i_22] [i_22] [i_24] = (var_1 <= var_3);
                        var_40 -= ((var_3 <= ((var_3 ? var_3 : var_7))));
                        arr_94 [i_22] [i_22] [i_22] [i_24] = (((var_8 + 2147483647) >> ((0 ? 6447 : 18))));
                    }
                }
            }
        }
    }
    var_41 = ((var_4 ? (((var_1 << ((var_0 ? var_6 : var_0))))) : var_7));
    var_42 = ((((((((var_4 ? var_1 : var_9))) ? (var_5 * var_6) : (var_3 / var_6)))) ? ((((65535 ? var_0 : var_2)) * (var_3 / var_9))) : var_4));

    for (int i_25 = 0; i_25 < 13;i_25 += 1)
    {

        for (int i_26 = 0; i_26 < 13;i_26 += 1)
        {
            arr_101 [i_26] [1] [1] = ((var_7 ? (((((var_3 ? var_4 : var_0))) ? ((var_6 << (var_4 + 117))) : ((var_0 ? var_1 : var_8)))) : ((var_2 >> (126 <= 11)))));
            arr_102 [i_25] = var_9;
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
        {
            arr_106 [i_25] = (38639 ? 1 : ((1 ? 0 : 18446744073709551614)));
            var_43 = ((((var_3 ? var_3 : var_0)) <= var_3));
            arr_107 [i_25] = var_4;
        }
        for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 13;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    for (int i_31 = 1; i_31 < 12;i_31 += 1)
                    {
                        {
                            arr_120 [i_25] [i_28] [i_28] [i_28] [i_31] = var_8;
                            var_44 += (((((var_3 <= var_4) <= var_2)) ? (((((1 ? -97 : -1288496242))) ? ((var_9 ? var_5 : var_0)) : var_1)) : ((var_1 ? var_6 : ((var_5 ? var_4 : var_1))))));
                            var_45 ^= ((((((var_4 * var_8) ? ((var_5 ? var_9 : var_8)) : (var_5 * var_1)))) ? ((((((var_5 ? var_5 : var_4))) <= ((-4119965551853703617 ? var_0 : 18446744073709551607))))) : var_4));
                            arr_121 [1] [1] [1] [i_30] [i_30] [i_28] = var_8;
                            var_46 += var_0;
                        }
                    }
                }
            }
            var_47 *= var_6;
        }
        arr_122 [i_25] [i_25] = (((((var_8 + 2147483647) << ((((((var_4 ? var_4 : var_6)) + 131)) - 24)))) * ((((var_1 << (var_7 - 18024370161222395086))) << (-3038524891890854942 + 3038524891890854942)))));
        arr_123 [i_25] |= (((1 || var_6) ? ((((((var_6 ? var_8 : var_5))) <= ((var_5 ? var_8 : var_7))))) : var_2));
    }
    for (int i_32 = 0; i_32 < 12;i_32 += 1)
    {
        var_48 = var_4;
        var_49 ^= ((((var_8 || (var_5 <= var_6))) ? ((((var_9 || var_7) ? (70 << var_2) : (var_4 <= var_5)))) : var_7));
    }
    #pragma endscop
}
