/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, ((((arr_0 [i_0] [18]) <= var_11)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (-32767 - 1);
            arr_8 [i_1] [i_1 + 1] [i_1] = 124;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 = -59;
                        var_17 = (min(var_17, (((var_4 == (((103 != (arr_1 [i_1 - 1])))))))));
                        arr_13 [i_3 + 2] [i_3] [i_1] [i_3] = (arr_0 [i_1 - 1] [i_1 - 1]);

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (max(var_18, (arr_5 [6])));
                            arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] = ((274964320 ? 173 : 274964302));
                            arr_17 [i_0] [i_1 - 2] [i_2] [i_3] [i_1] = (((var_14 + var_2) >= ((((arr_10 [1] [1] [i_1]) ? -30433 : var_8)))));
                            var_19 = (((arr_15 [i_1 - 2] [i_1] [13] [i_1 - 2] [i_3]) == ((1 << (-346227500 + 346227505)))));
                        }
                    }
                }
            }
            var_20 = (min(var_20, (((var_0 ? 1 : var_0)))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 = ((var_2 ? (var_12 && 3313583454) : var_14));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_7));
                            var_23 = (3313583462 < 8191);
                        }
                    }
                }
            }
            arr_29 [i_0] [i_5] = var_10;
            var_24 = (((8169 ? var_3 : (arr_20 [i_0] [i_0] [i_0] [i_5]))));
        }
        arr_30 [i_0] = (arr_1 [i_0]);

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_25 = (min(var_25, 1993160567));
                            var_26 = var_9;
                        }
                    }
                }
            }
            arr_42 [i_9] [i_0] [i_0] = (arr_39 [i_0] [i_9] [i_0] [i_9] [i_9] [i_9]);
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_27 = (min(var_27, (((-32748 ? (arr_25 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : var_1)))));
            var_28 = (((arr_21 [i_0] [8] [i_0] [i_13]) ? var_2 : (arr_21 [i_13] [i_13] [i_13] [i_13])));
            var_29 = (arr_0 [i_0] [i_13]);
            var_30 = (min(var_30, var_3));
        }
    }
    var_31 = (var_11 ^ var_3);

    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_32 = var_6;
        var_33 = (min((((var_12 + var_7) == ((var_0 ? (arr_19 [i_14] [i_14] [i_14]) : 32763)))), ((((4294967295 ? (arr_5 [10]) : (arr_19 [i_14] [i_14] [1]))) < (1 <= 10539)))));
    }
    for (int i_15 = 4; i_15 < 21;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    {
                        var_34 = (((4020002971 ? 57355 : 10375)));
                        var_35 *= (arr_48 [i_15]);
                        var_36 ^= (-5314973818686603236 / 2029731270002031086);
                        var_37 = ((+(((arr_48 [i_15 + 2]) * (arr_53 [i_15 - 4])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    {
                        var_38 += 1;
                        var_39 = (max(var_39, (arr_49 [i_21] [i_20] [i_20])));
                        var_40 = ((max((arr_53 [i_15 - 3]), (arr_59 [i_20] [i_21] [i_19]))));
                        arr_63 [i_21] [i_19] [i_19] [i_15] = (((arr_55 [i_15 - 2] [i_15 + 2] [i_15 - 2] [i_15] [i_15 + 2]) ? ((var_5 ? (arr_55 [i_15 - 2] [i_15 - 1] [i_15] [i_15] [i_15 + 2]) : var_7)) : (arr_59 [i_15 - 4] [i_15 + 2] [i_19])));
                    }
                }
            }
        }
    }
    var_41 -= var_7;
    #pragma endscop
}
