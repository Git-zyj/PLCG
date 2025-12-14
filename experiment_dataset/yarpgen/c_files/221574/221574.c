/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = -7166499786882929883;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_18 [i_0] [i_2] = -875695437;
                            var_18 = (min(var_18, -7166499786882929901));
                            var_19 = -4486;
                            var_20 = (min(var_20, 1));
                        }
                    }
                }
            }
            var_21 &= -110;
            arr_19 [i_0 + 4] [i_0] = -24;
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            var_22 = (~21577);
            arr_22 [i_5] = ((~(-9223372036854775807 - 1)));
            var_23 += -1461995555;
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            var_24 |= -7166499786882929882;
            var_25 &= (~7210);
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            arr_27 [18] [18] [i_0] |= 4294967295;
            arr_28 [1] |= -8817288236225154748;
            var_26 = (min(var_26, 7166499786882929883));
        }
        arr_29 [i_0] [i_0 + 2] = 1143809137;
        arr_30 [i_0] [i_0 + 2] = -1;
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_33 [i_8] = ((~(~0)));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_27 ^= (~32739);
                            var_28 ^= -875695438;
                            arr_44 [i_8] [i_9] [i_9] [i_9 + 2] [i_9] = -1;
                        }
                        arr_45 [i_8] [i_8] [i_8] [i_10] [i_10] [i_11 - 2] = ((-(!7166499786882929876)));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {

            /* vectorizable */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                arr_52 [i_13] [i_13] [i_13] [3] = -0;
                arr_53 [i_15] = (~-16930);
                arr_54 [i_13] [i_13] = (~1462486300786881815);
                var_29 = (min(var_29, 5346708326503398527));
            }
            arr_55 [i_13] [i_13] [i_13] = -875695451;

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                arr_58 [9] [i_14] [i_14] = (+-875695430);
                arr_59 [i_13] [12] [i_13] |= -7538269836208502935;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_30 = (((~(-9223372036854775807 - 1))));
                            var_31 = (min(var_31, -875695440));
                            arr_64 [i_13] [5] [5] [i_17] [i_13] = -32740;
                            var_32 = 12410376732079096281;
                        }
                    }
                }
            }
            arr_65 [i_13] [i_13] [i_13] = (~4444801694149688801);
        }
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {

            /* vectorizable */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                arr_72 [i_20] [1] = (!1462486300786881814);
                var_33 = (!585171060);
            }
            var_34 = (max(var_34, (((!(~126))))));
        }
        arr_73 [i_13] = ((~(~2097151)));
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 20;i_22 += 1)
        {
            {
                var_35 = 1003187159;
                arr_78 [i_21] [i_21] [i_22] = ((!(((-(!117))))));
                var_36 = ((!((!(~818411717441229516)))));
            }
        }
    }
    #pragma endscop
}
