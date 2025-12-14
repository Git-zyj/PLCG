/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= max((((0 && var_13) ? (max(0, var_12)) : var_4)), var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 ^= (arr_1 [i_1] [i_1]);
            var_19 = (((((-(arr_1 [i_1] [i_1])))) ? 1 : -1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_1] [i_3] = ((~(arr_9 [i_1])));
            arr_12 [i_1] [i_1] [i_1] |= 1;
            var_20 = (max(var_20, 1));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_21 = -2078612648;
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((!(arr_16 [i_5 + 2])));
                    }
                }
            }
            arr_22 [i_3] = 257698037760;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_22 = ((1464186335 == (arr_6 [i_1] [i_6] [i_6])));
            var_23 = (max(var_23, ((((arr_19 [i_1]) - (arr_19 [i_6]))))));
            var_24 &= (((arr_4 [i_1] [i_6]) - (arr_3 [i_1] [i_1])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_29 [i_6] [i_6] [i_6] |= arr_20 [i_1] [i_1] [i_7] [i_7] [i_7] [i_1];
                var_25 = 1;
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                arr_32 [i_1] = (((arr_9 [i_8 - 1]) ? (arr_6 [i_8 + 2] [i_8 + 1] [i_8 + 1]) : 5426079692283632993));

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_36 [i_1] [i_1] [i_9] |= (arr_28 [i_9] [i_6] [i_1] [i_8 + 1]);
                    arr_37 [i_1] [i_1] [i_1] [i_1] = ((0 && (arr_8 [i_8 - 1] [i_8 - 1] [i_8])));
                    arr_38 [i_6] = 60045;
                }
                var_26 = ((!(arr_6 [i_1] [i_6] [i_8 + 2])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_45 [i_1] [i_6] [i_1] = 1;
                            var_27 &= (arr_13 [i_8] [i_8 + 1] [i_10 + 4]);
                            arr_46 [i_11] [i_8] [i_8] [i_1] = (arr_41 [i_1] [i_6] [i_1] [i_10] [i_11] [i_6]);
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((((arr_4 [i_1] [i_6]) & (arr_10 [i_1] [i_1] [i_1]))))));
        }
        arr_47 [i_1] = 26753;

        /* vectorizable */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            var_29 = (min(var_29, (~22469)));
            var_30 = (arr_4 [i_1] [i_12]);
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_31 *= ((((((((arr_0 [i_1]) ? -29 : 1))) || ((min(-714503327, 1))))) ? ((((1 ? (arr_51 [i_1] [i_1]) : 526897796287872213)))) : (((arr_39 [i_1] [i_13]) ? 17514440350160117284 : (((arr_7 [i_1] [i_1] [i_1]) | (arr_16 [i_13])))))));
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_32 = (((arr_7 [i_15 - 2] [i_15 + 1] [i_15]) << (((arr_3 [i_15 - 1] [i_15 - 1]) + 1481470325))));
                            var_33 &= ((((arr_59 [i_15 - 2] [1] [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15 - 2] [i_15 - 1]) * (arr_59 [i_15 - 2] [i_15] [i_15] [i_15] [i_15 - 2] [i_15 + 1] [i_15 - 1]))));
                            arr_63 [i_1] [i_13] [i_1] [i_15] [i_13] = max((((4206289354 && 18446744073709551605) % (((arr_40 [i_1] [i_13] [i_15] [i_16]) ^ 65529)))), ((((arr_5 [i_15 - 2]) | 119))));
                        }
                    }
                }
            }
            arr_64 [i_1] [i_1] [i_13] = (arr_3 [i_1] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 16;i_18 += 1)
            {
                {
                    arr_72 [i_17] = (((((1243220144 ? (arr_41 [i_1] [i_17] [i_1] [i_18] [i_18] [i_1]) : 11))) || (((max(2724319170, (arr_69 [i_1] [i_17] [i_17] [i_18])))))));
                    var_34 = (arr_27 [i_17]);
                    arr_73 [i_17] [i_17] [i_17] = 65535;
                }
            }
        }
        var_35 = ((((((arr_40 [i_1] [i_1] [i_1] [8]) % (arr_40 [0] [i_1] [i_1] [i_1])))) ? (max((((32766 && (arr_3 [i_1] [4])))), (arr_26 [i_1] [i_1] [i_1]))) : 126));
    }
    var_36 = var_3;
    #pragma endscop
}
