/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [13] [i_1] = max((((arr_5 [i_0] [i_1 + 1]) ? ((((var_3 > (arr_4 [i_0] [8]))))) : var_7)), ((((arr_0 [i_0 + 1]) <= (~var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = ((((((((2999834253 ? 2598117670 : var_8)) >= (arr_9 [i_0 + 1] [i_1]))))) != (min((~var_8), ((var_3 ? var_6 : var_3))))));
                            var_17 &= (((~1189730449) >= (((var_4 / var_1) ? 3680219133 : -729900403))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_18 &= (((var_13 / (arr_14 [i_4]))));
            arr_16 [i_4] [i_4] [i_5] = var_14;
        }
        var_19 ^= ((!(((-(min((arr_12 [i_4] [i_4]), var_5)))))));
        var_20 = (-(((!((min(var_9, var_13)))))));
        arr_17 [i_4] [i_4] = (arr_14 [9]);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 = (min(var_21, ((0 ? (-47935128 % 4294967283) : ((var_4 ? var_6 : var_7))))));
            var_22 ^= -729900403;
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_23 = (-((var_11 ? ((var_3 >> (((arr_18 [i_7 - 1]) - 4122132005)))) : 13)));
            var_24 = ((((arr_20 [i_7 + 1] [i_7 + 2] [i_7 + 2]) != var_8)) ? (((!-1247773005) ^ ((var_12 ? var_1 : var_10)))) : (arr_13 [i_4]));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_25 -= var_11;
            arr_26 [i_4] [i_4] [i_8] = arr_15 [i_4] [12];
        }
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_26 = (((var_14 ? var_3 : (var_6 % var_5))) % -var_0);
        var_27 = (((var_0 <= var_10) > ((127 & ((var_12 << (((arr_29 [i_9] [13]) - 1038558669))))))));
        var_28 = (max(((-(arr_28 [i_9]))), ((2825033622 ? 3931061066 : 942761606))));
        arr_30 [1] = (arr_29 [i_9] [i_9]);
    }
    #pragma endscop
}
