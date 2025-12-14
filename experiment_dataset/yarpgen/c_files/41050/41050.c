/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max((((arr_1 [i_0] [i_0]) ? (arr_1 [9] [i_0]) : (arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
        var_13 *= ((((var_4 ? var_5 : 29)) + (((((-91794533177942335 ? (arr_0 [i_0]) : 91794533177942334)) - var_4)))));
        arr_2 [i_0] = ((35 - (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (115 >= 17609184837293234649);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_14 = ((((1013097724 != (max((arr_4 [i_1]), (arr_5 [i_1] [i_1]))))) ? (max((arr_5 [i_1 + 2] [i_1]), (arr_5 [i_1 + 2] [i_1]))) : 65521));
        var_15 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_16 = (arr_4 [i_2 - 2]);
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((115 ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 2])));
                        var_17 = (((arr_9 [i_2] [i_3 + 2] [i_2 + 2]) || (arr_9 [i_2] [i_3 + 1] [i_2 - 1])));
                        arr_16 [16] [i_3 + 2] [8] [i_3] |= (((~var_5) > (arr_13 [1] [19] [i_2 - 2] [i_5] [i_5] [i_3 - 1])));
                    }
                }
            }
        }
    }
    var_18 += 119;

    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (!-17455);
        var_19 *= (~-6527);
        var_20 = ((var_3 * (((((arr_18 [i_6 + 3]) < (arr_4 [i_6 - 1])))))));
        var_21 *= (min(((91794533177942355 ? (arr_5 [i_6 + 1] [4]) : ((0 ? (arr_5 [i_6] [14]) : 16234067833537588154)))), ((max((min(var_6, (arr_18 [i_6]))), -1)))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_22 = (((((((min(183, (arr_21 [i_7])))) / (arr_20 [i_7] [i_7])))) ? (max((arr_8 [i_7]), var_6)) : ((((!(var_2 && 65535)))))));
        arr_22 [i_7] [i_7] = ((arr_6 [i_7] [i_7]) ? (arr_20 [7] [i_7]) : ((581 ? (arr_6 [i_7] [i_7]) : (arr_18 [i_7]))));
    }
    var_23 = (min(0, 4152374893));
    #pragma endscop
}
