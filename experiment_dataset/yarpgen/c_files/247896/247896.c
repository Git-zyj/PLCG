/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(((var_17 >> (8191 - 8180)))))) ? (((var_18 ? (min(4294967295, 14575622)) : var_9))) : 1252120946090212845));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_20 = ((!(arr_5 [i_0] [i_1 - 1] [i_1])));
                        var_21 = ((14575622 ? 1 : 3415318082));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_22 = ((((14575605 ? var_7 : (arr_2 [i_0] [i_2]))) >= ((8876111661990755857 << (1252120946090212852 - 1252120946090212819)))));
                            var_23 = ((-((10416098081636154665 ? var_4 : var_6))));
                            var_24 = (((((1 > (arr_1 [i_2]))))) & (~3415318082));
                            var_25 = arr_7 [4] [4] [i_4];
                            var_26 = ((var_1 ? var_1 : (arr_11 [i_0] [i_0] [14] [i_0] [i_0] [i_0])));
                        }
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_27 &= (-(((arr_11 [i_0] [i_1 + 1] [i_0] [7] [i_1 - 2] [i_5 + 1]) ? (arr_10 [i_0] [i_1 - 1] [i_0] [i_5 - 2] [i_1 + 1] [i_5 - 1]) : (arr_10 [i_0] [i_0] [2] [i_2] [i_1 - 2] [i_5 + 3]))));
                        var_28 = (~306859257);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_29 = arr_3 [i_0] [i_0] [i_2];
                        var_30 *= (arr_5 [i_1 + 1] [i_6 - 1] [5]);
                    }

                    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_31 = (arr_9 [i_0]);
                            var_32 = (((arr_23 [i_8 - 1] [i_7 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (arr_23 [i_8 + 1] [i_7 - 1] [7] [i_2] [i_1 + 1]) : (arr_18 [i_0] [i_0] [i_8 - 1] [i_7 - 1] [i_0])));
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_33 = (min(var_33, (max(4294967280, 3676680546))));
                            var_34 = 4071;
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_35 = (max(var_35, (!0)));
                            var_36 = (min(var_36, (10264126897974081564 & 65535)));
                            arr_29 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_0] = (-127 - 1);
                            arr_30 [i_0] [i_1] [5] [i_7] [i_10 - 2] |= ((~(((arr_2 [i_7] [i_7]) ^ (((~(arr_12 [i_10] [i_7] [i_2] [i_1] [i_0]))))))));
                            var_37 = (min(var_37, (((61458 ? (((((min(23921, var_10)) >= -107)))) : (((var_11 % var_6) ? 8186 : 17194623127619338771)))))));
                        }
                        arr_31 [13] [i_2] [i_0] = 1;
                        var_38 ^= (min((!1252120946090212852), ((1 < (2241706413207587303 | var_16)))));
                    }
                    for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_2] [i_1] |= 132413793;
                        var_39 -= (-1892953248 + 40831);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_40 = ((1 ? -1146107109 : 9223372036854775552));
                                var_41 -= (((((((arr_35 [i_13] [i_1 + 1] [i_1 - 2] [i_1]) ? var_4 : (arr_24 [i_0] [6] [i_1 - 2] [i_2] [1] [i_12] [i_13])))) ? (!15) : ((3415318060 ? 3303980285067751751 : (arr_26 [i_1] [i_1] [i_1] [i_1]))))));
                                var_42 = var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
