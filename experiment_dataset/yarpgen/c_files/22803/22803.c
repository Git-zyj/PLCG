/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -var_15));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_17 = ((-(27402 + 223)));
        var_18 = (min(var_18, ((min((357205977 <= 27399), (27407 != -27409))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = ((((51390 || (((var_1 ? (arr_5 [i_3]) : var_15)))))) * 29324);
                        var_20 = (max(((-3 ? ((var_15 ^ (arr_1 [i_3]))) : var_8)), ((min(((min(var_11, var_1))), ((1 ? 27391 : 1)))))));
                        arr_14 [i_0 + 2] [i_1] [i_2] [i_0 + 2] = 27402;
                    }
                }
            }
        }
        var_21 = ((1 ? (((-20094 ? 964627845 : (arr_0 [i_0] [i_0]))) : var_3)));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = var_15;
        var_22 = (max(((27387 ? -705801501 : ((48968 ^ (arr_5 [i_4]))))), ((((((arr_12 [12] [i_4] [i_4] [i_4] [i_4 - 1]) != var_6))) | var_4))));
    }
    var_23 = (max(var_23, var_0));

    /* vectorizable */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (var_3 % 964627848);
        var_24 |= (((arr_5 [i_5 - 1]) / (arr_5 [i_5 + 1])));
        var_25 = arr_3 [i_5 - 3] [i_5 - 3] [i_5];
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_26 = (min(var_26, ((min((((arr_22 [i_6]) ? (arr_22 [i_6]) : (arr_22 [i_6]))), var_14)))));
        var_27 -= 3;
        var_28 = (arr_22 [i_6]);
        arr_25 [i_6] = ((~((+(((arr_24 [i_6] [i_6]) << (((var_10 + 728613323) - 27))))))));
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_29 ^= (((((8214761705442269391 ? 61 : var_5))) | ((var_8 ? 4558796795056338309 : (arr_13 [16] [i_10] [5] [i_10])))));
                                var_30 |= (max(var_10, ((-37 ? -50 : 2554995161))));
                                var_31 = (min(var_31, (((var_9 ? (((arr_5 [i_11 - 4]) % (arr_5 [i_11 - 2]))) : (arr_5 [i_11 - 2]))))));
                                var_32 = (arr_12 [1] [i_8 + 1] [i_9] [i_10] [i_8]);
                            }
                        }
                    }
                    var_33 = var_5;
                    var_34 = (max(var_34, ((((min(-1958371500, (((var_0 && (arr_1 [i_7])))))) ^ -27429)))));
                }
            }
        }
        arr_41 [i_7 - 2] [i_7] = (min(1340125509, 0));
    }
    #pragma endscop
}
