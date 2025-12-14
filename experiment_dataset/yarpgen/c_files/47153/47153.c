/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(var_11, var_1)) == var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_16 = ((6 ? var_1 : 14336));
        var_17 = ((-13 != -4) >> (var_13 + 1210));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (((arr_6 [i_0] [i_1] [i_1] [i_2]) ? var_3 : var_1));
                    var_19 = (min(var_19, (((arr_5 [i_0] [i_1] [i_1] [i_0]) != 542))));
                    arr_9 [i_0] [i_2] [i_0] = ((-(arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_2] = (((var_1 >= var_12) ? 65408 : 9075));
                                var_20 = (((arr_13 [i_2] [i_2] [i_2] [i_3]) - var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = (((-104 < 13217) ? (((var_5 || -12781) ? var_5 : (((-(arr_8 [i_5] [i_5] [i_5] [i_5])))))) : var_3));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = ((-(arr_28 [i_7] [i_8 + 1] [i_8 + 1] [i_7] [i_6 - 1] [i_5])));
                                var_22 = (min(var_22, ((max((max(var_13, var_0)), 28)))));
                                var_23 += (((var_4 == 173) ? 12 : -63488));
                                var_24 = (min(var_24, (0 <= -20)));
                            }
                        }
                    }
                    var_25 = ((((arr_0 [i_5] [i_5]) ? (arr_3 [i_7] [i_6 - 2] [i_5]) : var_0)));
                    var_26 = ((((var_9 % (arr_26 [i_5] [i_5])))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_41 [i_13] [i_10] [i_11] [i_13] [i_13] &= ((((-(((arr_33 [i_11]) ? 127 : 76)))) % var_13));
                            var_27 = (max((((-(arr_6 [i_5] [i_5] [i_5] [12])))), var_2));
                            var_28 = (min(var_9, (min(65409, var_3))));
                        }
                    }
                }
            }
            var_29 = ((-((((127 - 226) == ((9388 ? 609310481 : 609310481)))))));
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_30 = (arr_10 [i_14]);
            var_31 = ((~((min((arr_3 [i_5] [i_14] [i_14]), var_2)))));
            var_32 ^= (--3332836841);
            arr_44 [i_5] [i_14] = ((23578 >> (-22106 * 0)));
            var_33 = min((min((1 - var_5), (~var_11))), ((((((var_9 - 23) + 2147483647)) >> (arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                {
                    var_34 = (max(var_34, ((((8100 >= 119) < (19090 + var_10))))));
                    arr_49 [i_16] [i_15] = var_4;
                    var_35 = (min(var_35, 14774));
                    var_36 *= (max(65532, var_0));

                    for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        var_37 = ((-(arr_30 [i_16] [i_16])));
                        var_38 = (((~(arr_12 [i_16] [i_16] [5] [i_16] [i_16] [i_16 + 1]))));
                        arr_52 [i_5] [i_5] [i_16] [i_16] = ((-65416 ? (((max(14774, 65417)))) : (min((((arr_20 [i_5] [i_17]) ? (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_5]) : var_11)), (arr_20 [i_16 - 1] [i_17 + 1])))));
                    }
                    for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_39 &= ((var_12 & (((min(var_14, 26523))))));
                        arr_57 [i_5] [4] [i_16] [i_5] = (((var_3 + var_5) / ((min(var_11, 240)))));
                    }
                }
            }
        }
        var_40 = (min(var_40, 0));
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
    {
        var_41 ^= var_0;
        var_42 |= -11311;
        var_43 = var_13;
    }
    for (int i_20 = 2; i_20 < 21;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                {
                    var_44 = (max((((((var_2 ? var_2 : var_10))) ? 65395 : (arr_63 [i_20] [i_20]))), (max(((4275352012 ? 30178 : 65393)), (~3761)))));
                    var_45 = (max(19420, ((49822 ? -1394 : 4))));
                }
            }
        }
        var_46 = (((var_6 / (min(127, -3300755196157368686)))));
        arr_69 [i_20] = (((var_13 < (arr_64 [i_20 + 1] [i_20 + 1]))) ? ((8321499136 ? 3685656815 : -19421)) : ((((var_5 >= (arr_64 [i_20 + 1] [i_20 - 1]))))));
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 13;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                {
                    var_47 = (125 & 0);
                    var_48 = ((1 << (16501 - 16487)));
                    var_49 ^= ((((max((arr_64 [i_23] [i_23]), (arr_22 [i_23] [i_23] [i_23] [i_23])))) ? var_3 : ((min(var_9, 119)))));
                }
            }
        }
    }
    var_50 = -var_14;
    #pragma endscop
}
