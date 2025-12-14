/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((min(var_9, var_18))) ? var_9 : var_19)) >> var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 ^= (max(((2147483647 ^ (arr_0 [i_0]))), ((max((arr_3 [i_0]), (arr_0 [i_0]))))));
        var_22 = (var_16 | (((arr_3 [i_0]) ? -61 : (arr_3 [i_0]))));
        var_23 -= (((arr_3 [i_0]) & ((((((arr_0 [i_0]) & 25))) ^ (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [13] = (-7054346328638507489 || 123);
        arr_9 [i_1] = (((((!((max(7054346328638507517, -6836)))))) >> (((((arr_6 [i_1]) ? -var_7 : var_14)) + 52))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 &= (min(-49, (((((1 ? 3 : -2120981866))) & ((var_8 ? (arr_11 [i_2]) : (arr_5 [i_2])))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                arr_18 [i_2] [i_3] [i_4 - 3] = (((-7054346328638507509 ? (arr_17 [i_2] [i_3] [i_4 + 1]) : (arr_14 [i_2] [i_2]))));
                var_25 *= ((var_11 & (!23)));
                var_26 = 5;
                var_27 = (max(var_27, ((((arr_2 [i_2]) ? (arr_1 [i_3]) : var_13)))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_23 [i_3] [7] [i_5] = (((arr_16 [i_3]) - (((7524319084562017936 ? (arr_21 [i_2]) : var_12)))));
                arr_24 [1] [i_3] [1] [i_5] = (~-1);
                var_28 ^= var_1;
            }
            var_29 += 1;
            arr_25 [i_2] [i_3] = ((!(arr_10 [i_2] [i_3])));
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_34 [i_2] [i_2] [i_6] [i_7] [i_8] [i_8] = (max(((~((min((arr_5 [i_2]), var_13))))), (~1)));
                        var_30 = (max(var_30, ((~(arr_0 [i_6 - 1])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_31 = (min(var_31, var_6));

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_42 [i_2] [i_6] [i_6] = max(var_2, 1);
                            var_32 -= (((((~(~var_19)))) ? 100 : 2393883028));
                        }
                        arr_43 [i_2] [i_6] [i_9] [i_9] = (((min(((~(arr_15 [i_2] [i_6 - 1] [i_6 - 1] [i_10]))), 1901084277)) & (((103079215104 ? ((1829905846802367881 ? (arr_36 [i_6] [9]) : (arr_40 [i_2] [i_2] [i_2] [i_2] [i_2]))) : var_13)))));
                        arr_44 [i_2] [i_2] [i_6] [i_2] = (max(var_12, (((arr_12 [i_6] [i_6 + 1]) ? -var_17 : (max(4294967287, 562681883840158137))))));
                    }
                }
            }
            arr_45 [i_6] [i_6] = (max((((arr_28 [i_6] [i_6 - 1]) ? var_16 : (arr_28 [i_6] [i_6 + 1]))), (max((arr_28 [i_6] [i_6 + 1]), var_7))));
            arr_46 [i_2] [i_6] [i_6] = ((((((arr_29 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) + 9223372036854775807)) << (((((arr_29 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]) + 3346453600689979935)) - 60)))));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_49 [i_2] [i_2] [i_12] = ((((-(max(var_19, var_1)))) == (((var_15 / 1) * (arr_11 [i_12])))));
            arr_50 [i_2] [i_12] [i_12] = var_0;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    {
                        var_33 = (max(var_33, var_7));
                        var_34 = (((var_15 ? 18446744073709551597 : var_12)));
                    }
                }
            }
            arr_60 [i_2] [5] [i_13] = ((((((arr_57 [6] [i_13] [i_13] [i_13]) ? var_9 : (arr_47 [i_2] [i_13] [0])))) - 4585045397752899860));
        }
        arr_61 [i_2] = (max((((arr_36 [i_2] [i_2]) / (arr_36 [i_2] [i_2]))), ((((max(var_17, 1633212984))) ? (arr_5 [i_2]) : (arr_10 [i_2] [i_2])))));
        arr_62 [i_2] = (((min(((((arr_31 [i_2] [i_2] [4] [i_2]) ^ 4294967288))), (-1 & 323962525)))) && ((max((arr_54 [i_2] [i_2] [i_2]), (arr_52 [i_2] [i_2] [i_2])))));
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 13;i_16 += 1)
    {
        arr_66 [i_16] [i_16] = 527765581332480;
        arr_67 [i_16] = (((arr_1 [i_16 - 1]) ? (((arr_64 [i_16]) ? (arr_7 [i_16]) : (arr_3 [i_16]))) : var_8));
    }
    #pragma endscop
}
