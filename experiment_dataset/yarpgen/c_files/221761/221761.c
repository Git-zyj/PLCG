/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 ^= ((!((max(var_10, var_14)))));
        var_16 = (min(var_16, ((((((arr_1 [i_0] [8]) <= 1)) || ((min((arr_1 [i_0 - 1] [6]), var_13))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [15] [i_1] = (((((arr_5 [i_1] [i_1]) ? var_6 : (arr_2 [i_1])))) ? (arr_2 [i_1]) : (~var_3));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_17 = ((((((!(arr_4 [i_1]))))) != (min(-32753, var_0))));
                                var_18 = (max(var_18, (((-((-((1920 ? 1928 : 1928)))))))));
                                var_19 = (1900 < 18446744073709551610);
                                var_20 = (min(var_20, (((max(((((arr_4 [i_2]) <= var_7))), (min((arr_12 [i_3] [i_2]), var_12))))))));
                            }
                        }
                    }
                    var_21 = ((((~var_13) ? (var_5 || var_5) : ((240 ? var_0 : var_0)))));
                    var_22 = (max(((max((((arr_7 [i_1] [i_3] [i_3]) <= 1022)), (var_2 <= var_14)))), (arr_4 [i_1])));
                }
            }
        }
        arr_15 [i_1] [i_1] = var_7;
        var_23 = var_3;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 = (min(var_24, -var_13));
                        var_25 = var_6;
                        var_26 = (min(var_26, (((~(((var_10 ? var_5 : (arr_9 [i_1] [i_6])))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_28 [i_9] = ((-var_4 ? ((var_10 ? 262143 : var_9)) : ((((arr_25 [i_10]) ? 63598 : 1)))));
            var_27 = var_2;
            var_28 *= ((var_14 == (!2147483647)));
            var_29 *= ((~(arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_10])));
            var_30 -= var_7;
        }
        var_31 ^= var_9;
        var_32 = ((1 ? (arr_26 [i_9 - 1] [i_9 + 1] [i_9]) : (arr_20 [i_9])));
        arr_29 [i_9] = ((var_9 == (arr_3 [i_9 - 1])));
        var_33 = var_14;
    }
    var_34 = var_10;
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 23;i_12 += 1)
        {
            {
                var_35 = ((((var_10 << (8191 - 8191))) << (((((arr_32 [i_12 - 2] [i_12]) ? var_4 : var_3)) - 57))));
                var_36 = (max(var_36, ((((((var_5 ? var_2 : var_14))) ? ((63607 ? (arr_32 [i_12 - 1] [i_11 + 1]) : (arr_32 [i_12 - 1] [i_11 - 1]))) : 2)))));
                arr_36 [i_12] [i_12 + 2] [i_12] = (-((~(254 >= var_3))));
                arr_37 [i_12] [i_11 + 1] = ((((((var_2 && var_7) ? var_5 : var_5))) ? 18446744073709551615 : (((~var_12) ? var_3 : (var_8 >= var_2)))));
            }
        }
    }
    #pragma endscop
}
