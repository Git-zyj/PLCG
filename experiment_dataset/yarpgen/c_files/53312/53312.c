/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max(((131127465 ? 194 : 38558)), ((min(var_4, 4142749245363364178))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [i_0] = (min(((-45 ? (~14887182770742896505) : (((~(arr_1 [i_0] [i_0])))))), -212));
            var_11 = (max(var_11, var_1));
            arr_6 [i_0] [i_0] [i_1 + 3] = 8996;
            var_12 ^= (((!-212) + (max((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])))));
            var_13 -= 1407970931;
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_14 += (((-var_5 | (6724007796955878995 && 252))));
            var_15 = (((((((-(arr_8 [i_0] [i_0] [i_2])))) || var_4)) ? var_4 : 202));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_16 ^= (max((((((min(var_8, 217))) >= ((min(18, 26)))))), ((var_0 ? (min((arr_4 [i_0]), 6565086789667433910)) : var_8))));
            arr_11 [i_0] [i_0] [i_0] = var_0;
            arr_12 [i_0] [i_3] = var_9;
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_17 = (min(((max(0, (min((arr_16 [i_0]), var_1))))), (max(var_9, (((arr_3 [i_0] [i_0] [i_0]) + (arr_16 [i_4])))))));
            var_18 -= ((-(((arr_15 [i_4 - 1]) + -26977))));
            var_19 += (min((arr_3 [i_4 + 3] [i_4 + 1] [4]), var_2));
        }
        arr_17 [i_0] = ((15368 ? (max((arr_3 [i_0] [i_0] [i_0]), 26954)) : 39));
        arr_18 [i_0] = 24;
        var_20 = 16432257051839804531;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_27 [i_0] [i_0] [i_7] [i_0] &= (max((-2 ^ 4163839817), (max((arr_2 [i_6] [15]), (arr_2 [i_0] [i_6])))));
                        arr_28 [i_0] [i_0] = var_1;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = ((((((arr_19 [i_8] [i_8]) / var_3))) ? (((min((arr_31 [i_8]), (arr_31 [i_8]))))) : ((-(arr_19 [i_8] [i_8])))));
        arr_33 [i_8] = (max((max((arr_4 [i_8]), (!var_2))), (-2182 && 131127468)));
        arr_34 [i_8] [i_8] = (((((arr_9 [2]) - var_4))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_37 [i_9] = (arr_21 [2]);
        arr_38 [i_9] [i_9] = (arr_14 [i_9]);
    }
    #pragma endscop
}
