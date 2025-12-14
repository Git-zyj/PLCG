/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (min(var_13, var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = 5915364910715877294;
        var_15 *= (max((max(var_4, var_9)), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_16 *= (arr_2 [i_0]);

            /* vectorizable */
            for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
            {
                var_17 = ((var_2 ^ (arr_3 [i_1 + 3] [i_2 - 2])));
                var_18 = (!5915364910715877264);
                var_19 = (min(var_19, (arr_1 [i_0])));
                var_20 = 18976;
                var_21 *= (((arr_5 [4] [i_1 + 2] [i_2 - 1] [i_2]) ? (arr_5 [i_2] [i_2] [i_2 - 1] [i_2]) : (arr_5 [i_2] [i_2] [i_2 - 1] [i_2])));
            }
            for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_22 = ((max(-5915364910715877294, -5915364910715877295)));
                var_23 = (((((51 ? 1 : var_6))) ? (((arr_3 [i_0] [i_3 - 1]) ? var_1 : (arr_3 [i_3 - 2] [i_0]))) : ((((arr_3 [i_0] [i_0]) && (arr_3 [i_3] [i_0]))))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {

                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    var_24 = (!(arr_10 [i_4] [i_5 - 1]));
                    var_25 = var_3;
                }
                var_26 = ((((arr_3 [i_5 + 1] [i_5 + 1]) & var_7)));
            }
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                var_27 = arr_10 [i_0] [i_0];
                var_28 = (min(var_28, (248 << 1)));
                var_29 = 1;
            }
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_30 = (~var_7);
                            var_31 = (((((~(arr_22 [i_9] [3] [i_0] [i_9] [i_9])))) ? (-1563276670 | -37) : (5915364910715877294 / var_0)));
                            var_32 = (arr_18 [i_4] [i_8] [i_9] [i_10 + 1]);
                            var_33 = var_5;
                        }
                    }
                }
                var_34 = ((!(arr_22 [i_8] [1] [i_8 + 1] [i_8 - 1] [i_8 - 1])));
            }
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                var_35 ^= ((46559 & (arr_23 [i_11] [1] [i_0] [i_11] [1] [i_11] [i_11 - 1])));
                var_36 = var_4;
            }
            var_37 = ((~(arr_14 [i_0] [i_0] [i_4] [i_4])));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    {
                        var_38 = ((((((((arr_29 [i_0] [i_12] [i_13] [i_14]) ? (arr_14 [i_12] [i_13] [i_12] [i_0]) : var_9))) ? 3082666399439781078 : var_2)) != ((((var_10 < (((var_11 ? var_6 : (arr_5 [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_39 = (~37);
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_40 = (max((((!(~var_11)))), -5915364910715877304));
        var_41 = (arr_18 [i_15] [21] [21] [21]);
    }
    var_42 = ((min(((12 ? -5915364910715877302 : -17340), ((max(3002493881, -1798538287)))))));
    #pragma endscop
}
