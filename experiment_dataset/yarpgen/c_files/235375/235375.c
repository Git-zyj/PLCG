/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = -536870912;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_11 += (((arr_6 [i_2] [i_1] [i_0] [i_1]) ? 1 : var_10));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_12 = ((arr_6 [i_3 + 2] [18] [i_3 + 1] [i_3]) ? var_10 : (arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 1]));
                            arr_14 [i_0] [i_0] = var_9;
                            var_13 = (-2147483647 - 1);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_14 = (min(var_14, 8070450532247928832));
                            var_15 = (max(var_15, 4503599627370495));
                            arr_18 [7] [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_5] = (var_1 >= 3533345190);
                        }
                        arr_19 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] = -2492923580094041811;
                        arr_20 [i_0] = (var_2 < 0);
                    }
                }
            }
        }
        arr_21 [i_0] = -1;
        arr_22 [i_0] = (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_9 : (max(var_5, var_1)))) & (((((var_7 ? (arr_12 [3] [3] [i_0] [i_0] [i_0] [i_0]) : var_9))) ? (((var_3 ? var_8 : var_1))) : ((-5269 ? 761622106 : 1))))));
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        arr_27 [i_6] [i_6] = (min((((max(var_1, 3533345178)) >> ((((3533345176 ? var_8 : var_8)) - 35)))), ((min(65535, var_10)))));
        arr_28 [i_6] [i_6] = (min(var_1, (35325 & -17748)));
        arr_29 [i_6] [i_6 + 1] = ((((arr_1 [i_6 - 1]) ? var_3 : var_9)));
        arr_30 [i_6] = ((((max((arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 1]), var_2))) % (arr_24 [i_6 + 1])));
        var_16 = var_2;
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_17 = (((!var_10) << (761622105 - 761622098)));
        var_18 += 98;
        arr_33 [i_7] [i_7] = ((761622106 < ((-125 ? var_0 : 32512))));
    }

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_19 += (arr_17 [i_8] [12] [i_8] [i_8] [i_8] [i_8]);
        arr_36 [i_8] = (((0 > 761622122) <= (min((((761622100 ? 761622106 : 26644973))), var_3))));
        var_20 = ((((min(-45, (~761622109)))) % ((var_6 ? (arr_0 [i_8] [i_8]) : 24183))));

        for (int i_9 = 4; i_9 < 9;i_9 += 1)
        {
            arr_39 [i_9] [i_8] = ((-1 ? ((((1 <= (max(-6678589960987458473, 12)))))) : var_5));
            var_21 *= (min(0, (min((min(0, -24216)), (max(65535, var_6))))));
            var_22 &= 17;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_23 = ((((min(var_5, ((min(65535, (arr_6 [i_8] [i_8] [i_10] [13]))))))) ? ((min((var_4 || 13495925050706028053), 3533345185))) : 7364434724378390163));
            arr_44 [i_8] [i_8] [i_10] = 127;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_24 = (((((((arr_34 [i_8]) || var_8)) ? var_8 : (var_1 <= var_2))) * (((65535 != ((var_3 << (var_1 - 1067))))))));
                            var_25 = (max(var_25, var_1));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_26 = (~(!var_1));
            arr_56 [i_8] [i_14] = ((67 ? ((-1 % ((-8824185151906927713 ? 1 : 2147483639)))) : 1));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 8;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    {
                        var_27 = (arr_12 [i_8] [i_15] [i_16] [i_17] [i_17] [i_17]);
                        var_28 += ((var_7 * (arr_5 [i_16 + 1] [i_15] [i_8])));
                    }
                }
            }
            arr_64 [i_8] [i_15] = (arr_15 [i_15] [i_15] [i_15] [i_15] [i_8] [i_8]);
        }
    }
    #pragma endscop
}
