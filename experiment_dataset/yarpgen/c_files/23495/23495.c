/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = var_17;
        arr_3 [i_0] [i_0] = (((min(var_12, var_18)) + var_11));
        arr_4 [i_0] [i_0] = 242;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = (14735146188685998899 == 16040260269185781561);
            arr_9 [i_1] [i_0] [i_1 - 1] = 30;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        var_21 = (((1 ? var_6 : var_14)));

                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_4] = (arr_7 [i_0] [i_1]);
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_0] = var_11;
                            var_22 = ((arr_15 [i_1] [i_3 + 2] [i_4 - 1]) ? (arr_15 [i_1] [i_3 + 2] [i_4 - 1]) : (arr_15 [i_1] [i_3 + 2] [i_4 - 1]));
                        }
                        arr_19 [i_1] = var_4;
                    }
                }
            }
            arr_20 [i_1] = (~2406483804523770054);
            var_23 += (-69 | var_9);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_24 ^= var_3;
            var_25 = ((~(arr_21 [i_0] [i_0] [i_5])));
            arr_24 [i_5] [i_5] [i_0] = ((!(~var_5)));
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_26 = (!59);
                            var_27 = (min(var_27, 2406483804523770061));
                            var_28 += 14735146188685998899;
                            arr_33 [i_8] [i_7] [i_0] [i_5 - 2] [i_7] [i_0] = 3711597885023552717;
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            var_29 = (min(var_29, (((var_7 ? ((-((max(-127, 7))))) : (~111))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        {
                            var_30 = (max(var_30, -4));
                            arr_46 [i_0] [i_0] &= ((min(var_9, 242)));
                            arr_47 [i_0] [i_9] [i_10] [0] [i_9] = 0;
                            arr_48 [i_0] [i_9] [i_9] [i_11] [i_9] = ((!(~56)));
                        }
                    }
                }
            }
        }
        var_31 = (max(var_31, 53));
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        arr_51 [i_13] = ((2406483804523770054 ? (((((max((arr_36 [i_13] [2]), var_14))) ? (arr_32 [i_13] [i_13] [i_13] [i_13] [i_13]) : 1))) : ((1163 ? (arr_25 [i_13] [i_13]) : var_4))));
        var_32 *= min((~var_17), (((arr_7 [i_13] [i_13]) | (arr_2 [i_13]))));
    }
    var_33 = 1;
    var_34 = (min(10546831428641701326, ((max((2273126652 ^ 242), ((min(var_1, 0))))))));
    #pragma endscop
}
