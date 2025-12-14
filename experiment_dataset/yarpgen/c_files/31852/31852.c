/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 11876;
        var_19 |= (min((((arr_1 [i_0]) / var_2)), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = ((((((5001981366517701754 == ((-2775617079108901264 ? 18446744073709551613 : var_4)))))) >= (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 13))));
        arr_5 [i_1] = ((var_7 ? (arr_4 [i_1] [i_1]) : (((var_1 == var_0) + 29800))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] = (arr_6 [i_2] [i_2]);
        var_21 = (arr_4 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = (~-var_15);
            var_23 -= ((~(arr_11 [i_2])));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_24 = var_9;
            var_25 = ((((1141856588 ? (arr_9 [i_2] [i_2]) : var_1)) * (arr_9 [i_2] [i_2])));
            var_26 += ((var_16 == 8359555760934132051) ? var_7 : ((((arr_11 [i_2]) ? 21 : -21))));
            var_27 = (var_12 == var_18);
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_18 [i_5] = ((745015357 ? var_11 : (arr_11 [i_2])));
            arr_19 [i_2] [i_2] [i_5] = (((((-13156 ? -29930 : var_1))) && var_13));
            var_28 = ((var_4 ? (arr_4 [i_2] [i_2]) : (arr_7 [i_2])));
            var_29 = (((arr_17 [i_2] [i_5] [i_5]) ? (var_8 || 2090270263) : -7));
            arr_20 [i_2] [i_5] = (arr_17 [i_2] [i_2] [i_5]);
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_30 *= ((((((arr_21 [i_6]) ? -29939 : (arr_23 [i_8] [i_8])))) ? ((min(var_18, (arr_21 [i_6])))) : (min((max(3441710751259932749, -1039121830110743518)), ((var_17 ? 8359555760934132070 : var_12))))));
                    var_31 = ((~(~14193079113989845237)));
                    var_32 = (min(-var_16, 2773819071625021570));
                    var_33 = ((((min((var_12 > var_7), (max(29142, 1364468113))))) ? var_10 : -616980901));
                    var_34 += (((arr_26 [i_6] [i_7]) >= (max((max((arr_23 [i_8] [i_8]), -7309)), (~67108863)))));
                }
            }
        }
    }
    #pragma endscop
}
