/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_13 = (max(var_13, (arr_9 [i_0] [i_0] [i_2])));
                        var_14 = (arr_0 [i_0] [i_0]);
                        var_15 ^= var_5;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = (min(var_16, (((var_9 >= (arr_14 [i_0] [i_0] [i_0] [i_0]))))));
                        var_17 = (((arr_3 [i_0] [i_1] [i_4]) ? 25 : 0));
                    }
                    var_18 = (max(var_18, 62));
                }
            }
        }
        var_19 ^= (arr_9 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_24 [i_8] [i_7] [i_6] [i_8] = (((arr_5 [i_5] [i_7]) ? (arr_5 [i_5] [i_8]) : var_3));
                        arr_25 [i_5] [i_5] [i_5] [i_7] [i_8] &= 1981260485445050697;
                        var_20 = arr_21 [i_6] [i_8];
                        arr_26 [i_5] [i_8] [i_8] = (((arr_5 [i_5] [i_6]) ? 4248204909 : var_12));
                        var_21 = (min(var_21, var_0));
                    }
                }
            }
        }
        var_22 = (min(var_22, ((((arr_5 [i_5] [i_5]) ? var_2 : (arr_5 [i_5] [i_5]))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_23 = (max(var_23, var_3));
                        var_24 = (min(var_24, (((var_1 ? (arr_6 [i_5]) : (arr_5 [i_9 + 1] [i_9 + 2]))))));
                    }
                }
            }
        }
        var_25 = (min(var_25, ((((arr_11 [i_5] [i_5] [i_5] [i_5]) ? (arr_16 [i_5] [i_5]) : (arr_11 [i_5] [i_5] [i_5] [i_5]))))));
        var_26 *= (((var_10 % 5851763212040944222) ^ (arr_16 [i_5] [i_5])));
    }
    var_27 = (min(var_27, (var_10 / 6741418521046490186)));
    var_28 = var_7;
    #pragma endscop
}
