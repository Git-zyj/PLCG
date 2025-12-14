/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-var_6);
    var_17 = (var_4 && var_6);
    var_18 = -19209;
    var_19 = (~var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~27913082);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_11 [10] [i_0] [i_0] [i_0] = var_12;

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_20 *= -27913083;
                    arr_16 [i_0] = (((((var_7 / (arr_1 [6])))) || var_14));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_2] [2] [i_0] [i_4] = ((((-1570355413 + (arr_2 [i_3]))) != (92 >= 1)));
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = var_5;
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, var_9));
                    arr_24 [i_0] [i_1] [i_0] [i_5] = (((arr_22 [i_0] [i_1] [i_2] [i_5]) ? 1570355420 : var_10));
                }
                arr_25 [i_0] [i_1] [i_2] &= 279535701;
                var_22 -= var_6;
            }
            for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_23 *= (arr_9 [i_6] [i_6] [i_6] [i_6]);
                arr_28 [i_0] = -1570355413;
            }
            for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= 92;
                    arr_36 [i_0] [i_1] [i_1] [i_7] = -27913082;
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, var_5));
                    arr_40 [i_7] [1] [9] = 88278667;
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, (~var_10)));
                    var_26 = var_4;
                    var_27 = var_2;
                }
                arr_43 [i_0] [i_7] = var_10;
            }
            var_28 ^= ((((((-27913054 | (arr_23 [i_0] [i_0] [2] [i_1]))) + 2147483647)) >> (((!(arr_13 [i_0] [2] [i_0]))))));
            arr_44 [i_0] [i_0] [i_0] = 27913039;
        }
        var_29 = (arr_32 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {
                        var_30 &= (max((((var_6 ? var_0 : 7))), (arr_52 [i_13 + 3])));
                        arr_57 [i_11] [i_11] [i_11] |= 1570355412;
                        var_31 = 0;
                        var_32 *= (-9223372036854775807 - 1);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                arr_70 [i_11] [9] [i_16] [i_17] [2] &= (((((255 ? var_5 : -2094219770737614338)))) ? ((0 ? ((-(arr_41 [i_11] [i_11] [i_11] [i_11]))) : (~1))) : ((((-1 <= -24168) < (((arr_62 [3]) ? -763090122 : var_0))))));
                                arr_71 [i_11] [3] [i_11] [i_11] [i_11] = (min((((arr_9 [i_17 + 1] [5] [i_17] [i_17]) + ((var_14 ? 0 : 214)))), 1878544661));
                            }
                        }
                    }
                    arr_72 [i_15] [i_15] [i_15] [i_15] = ((24167 ? (arr_9 [i_11] [i_15 + 1] [i_15 + 1] [i_16]) : -1));
                }
            }
        }
        arr_73 [i_11] = ((1 && ((max(1, var_6)))));
        arr_74 [i_11] [i_11] = ((~(min(var_3, var_1))));
    }
    #pragma endscop
}
