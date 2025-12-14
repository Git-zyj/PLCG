/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        var_19 &= var_15;
                        var_20 = (var_4 ? (((((var_11 ? var_7 : var_0))) ? (var_2 < var_15) : var_6)) : ((var_18 ? var_1 : var_11)));
                        arr_13 [i_0] [i_0] [8] [i_2] &= (((var_7 == var_17) ? (((var_16 ? var_18 : var_15))) : ((var_10 ? var_16 : var_0))));
                        var_21 = var_15;
                        arr_14 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = (((((var_14 ? var_3 : var_7))) ? (var_6 > var_14) : (var_7 <= var_7)));
                    }

                    for (int i_4 = 3; i_4 < 6;i_4 += 1)
                    {
                        var_22 = var_5;
                        var_23 = ((((var_0 >> ((((var_7 ? var_1 : var_6)) - 1742101255)))) / (((((var_12 ? var_10 : var_7)) % var_9)))));
                    }
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        arr_20 [i_1] [i_0] = var_4;
                        arr_21 [i_0] [i_1] [i_0] [i_0] = var_5;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_24 = (var_4 && var_0);
                        arr_24 [i_6] [i_0] [i_0] [i_0] = var_6;
                        var_25 = (min(var_25, (((((((var_2 | var_2) & (var_8 | var_12)))) ? var_12 : var_11)))));
                    }
                    var_26 = (((var_3 - var_17) ? ((var_1 ? var_12 : var_5)) : (var_2 <= var_7)));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_27 [i_7] [i_7] &= ((var_14 | var_4) + ((((var_18 || var_16) | (var_18 < var_6)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        arr_36 [i_7] [i_7] [i_7] [1] [i_7] = ((((var_14 ? (((var_8 ? var_16 : var_10))) : ((var_18 ? var_1 : var_5))))) ? var_11 : ((var_16 ? var_1 : (var_9 < var_8))));
                        arr_37 [i_7] [10] [9] [i_9] [i_9] [i_10] = ((var_14 ? ((var_8 ? var_17 : var_4)) : (var_16 < var_13)));
                    }
                }
            }
        }
        var_27 = var_3;
        arr_38 [10] = var_13;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_28 = (((var_10 <= var_16) ? var_3 : var_9));
        arr_41 [i_11] [i_11] = ((var_6 ? var_12 : var_7));
    }
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 20;i_16 += 1)
                        {
                            var_29 = (((var_14 / var_1) ? var_14 : var_6));
                            var_30 |= var_5;
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            var_31 = ((var_12 ? ((((var_10 ? var_10 : var_16)) | var_11)) : (((var_10 + var_18) ? var_8 : var_7))));
                            var_32 = (29646 % 17094476478016551534);
                            arr_59 [i_12] [i_12] [i_12] [i_13] [i_12] = var_9;
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            arr_64 [i_12 + 1] [i_12] [i_12] [17] [0] [i_12] [i_12] = var_15;
                            var_33 = ((11800958218023401680 ? 31321 : 16));
                            var_34 = ((((var_8 ? var_7 : var_3)) != (var_10 | var_11)));
                            var_35 = ((((((12288 & 1101359038) >> (var_6 && var_8)))) ? (((var_2 && var_7) ? (var_16 || var_6) : ((var_10 ? var_7 : var_1)))) : var_11));
                        }
                        for (int i_19 = 2; i_19 < 18;i_19 += 1)
                        {
                            var_36 = var_6;
                            var_37 ^= (((var_7 * var_2) ? var_7 : ((var_9 ? var_4 : var_8))));
                        }
                        var_38 &= (((45161 & 281466386776064) ? (var_5 - var_12) : ((15872 ? 2233785415175766016 : 49663))));
                        arr_68 [i_12] [i_12 + 1] [3] [i_12] [i_14 - 3] [i_15] = (((((var_13 * (var_3 != var_12)))) ? (((((var_5 ? var_4 : var_8))) ? ((16384 ? 49675 : 281466386776064)) : var_12)) : (((var_10 << (((var_5 + 1682360564) - 16)))))));

                        /* vectorizable */
                        for (int i_20 = 3; i_20 < 20;i_20 += 1)
                        {
                            var_39 = ((4194303 ? 41965 : 15861));
                            var_40 = ((var_4 % (((var_13 ? var_2 : var_13)))));
                        }
                        for (int i_21 = 2; i_21 < 17;i_21 += 1)
                        {
                            var_41 = ((var_11 ? (var_10 - var_5) : ((var_7 ? ((var_10 ? var_11 : var_6)) : ((var_13 ? var_0 : var_4))))));
                            arr_73 [i_13] [i_13] [i_12] [i_15] [i_14] [i_21] |= var_2;
                            var_42 *= (((((var_13 ? var_3 : var_12))) ? ((var_10 ? (var_5 != var_7) : (var_12 & var_8))) : var_10));
                        }
                        var_43 = ((((((var_5 & var_15) ? var_13 : var_9))) || var_9));
                    }
                }
            }
        }
        arr_74 [i_12] = (((((var_12 ? var_13 : var_11))) ? (var_7 == var_15) : (var_13 || var_13)));
        arr_75 [i_12] = (((((var_17 ? (var_13 == var_1) : (var_9 <= var_8)))) ? var_13 : ((var_16 ? var_13 : var_2))));
    }
    #pragma endscop
}
