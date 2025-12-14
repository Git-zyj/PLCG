/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+(((~var_2) ? (~var_8) : (~var_14)))));
    var_17 = (max(var_17, var_9));
    var_18 = (min((((((var_14 ? var_0 : var_0))) ? var_9 : (~var_5))), ((var_10 ? (max(var_15, var_13)) : ((var_13 ? var_13 : var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (max((((~var_6) >> (((arr_0 [i_0]) - 2591617057)))), (var_14 <= var_12)));
                        arr_9 [i_2] [i_1] [i_2] [i_3] = (min((arr_5 [i_1]), (arr_3 [i_0] [i_1 + 1] [i_2 - 1])));
                        arr_10 [i_0] [i_2] = (max(((max((((var_4 << (var_4 - 1506212851)))), (var_10 & var_10)))), (arr_8 [i_3] [i_2] [i_2] [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4 - 1] = ((+(((arr_11 [i_2 + 2] [i_1] [i_1 + 1]) ? (arr_11 [i_2 + 2] [i_1] [i_1 - 4]) : var_0))));
                        var_20 *= (((min((((arr_1 [1] [i_1 + 1]) % var_7)), (var_9 - var_15))) >> (((((arr_0 [i_1 - 3]) ^ (arr_12 [0] [i_1 - 1] [i_1] [i_2] [i_2 + 1] [i_4 - 1]))) + 6960280505324284115))));
                    }
                    var_21 -= (max((~var_6), (arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 2])));
                    arr_14 [i_2] [i_1] = (~119);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (((-23 ? (min(11387720514462216022, var_8)) : var_12)));
                                var_23 = var_15;
                                var_24 = (max(var_24, ((((arr_7 [i_0] [i_0] [i_0] [i_6]) ? var_1 : (max((arr_5 [i_0]), ((var_13 & (arr_20 [i_0] [i_0] [i_0] [i_6]))))))))));
                                var_25 -= (((arr_15 [i_1 - 4] [i_1 - 2]) ? (arr_3 [i_0] [i_1] [i_5]) : (((((arr_20 [7] [7] [i_5] [i_6]) == (arr_19 [i_0] [i_0] [i_5] [i_0])))))));
                                arr_22 [i_0] [i_0] [i_5] [i_0] [i_7 - 3] [i_5] [i_5] |= ((var_2 ^ ((((((arr_15 [i_1] [i_5]) ? var_10 : var_15)) == ((((arr_1 [i_0] [i_7]) ? var_9 : (arr_20 [i_0] [i_5] [i_6] [i_7 - 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((~((((arr_0 [i_0]) < (((arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_9] [i_8]) ? 8888193830960239366 : var_11))))))))));
                                arr_27 [i_1] [i_1] = (((((((max(var_2, var_4))) ? (((var_1 ? var_13 : var_11))) : -8888193830960239349))) ? ((~(((arr_19 [i_9] [i_8] [i_1] [10]) ? var_0 : (arr_17 [i_5] [i_5] [i_5]))))) : (((~(~var_5))))));
                                arr_28 [i_5] = ((((((((var_1 ? var_6 : (arr_5 [i_0])))) % (arr_23 [i_0] [i_0])))) ? (((~var_7) ? 0 : ((var_8 ? var_7 : var_10)))) : (((((var_3 ? (arr_3 [i_0] [i_0] [i_0]) : -23)) << var_12)))));
                                var_27 = ((((max(var_14, (arr_26 [i_0] [i_1] [i_5] [i_5] [i_0])))) >= (((arr_5 [i_1 - 3]) ? (arr_16 [i_1 - 1] [i_1 - 1]) : var_10))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_28 = ((474 < ((min(-21148, 1)))));
                    var_29 = var_6;
                }
                arr_31 [13] [13] = (((arr_0 [i_0]) <= (((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_30 = var_15;
    #pragma endscop
}
