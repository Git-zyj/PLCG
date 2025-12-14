/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_13 [i_3] [i_1] [i_0] = (!50725);
                        arr_14 [i_3] [i_2] [i_1] [i_0] = (((arr_3 [i_3] [i_2] [i_0]) > var_12));
                        arr_15 [i_3] [i_2] [i_0] = var_6;
                    }
                    var_17 = var_0;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = (max(var_18, (3275786454711578385 >> 0)));
                        var_19 ^= var_15;
                        var_20 = (((arr_10 [i_4] [5] [i_1] [i_0]) + (arr_10 [i_0] [i_0] [i_2] [i_2])));
                    }
                    arr_18 [i_0] [i_0] [i_0] = (~3275786454711578385);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] = (var_0 ? 7 : var_15);
                        arr_22 [i_1] [i_1] &= 1;
                        arr_23 [i_2] = ((var_5 ? (arr_17 [i_0] [i_1] [i_2] [i_5] [i_5]) : (arr_2 [i_0] [i_1])));
                    }
                }
                arr_24 [i_0] [i_0] = ((((((min((arr_1 [i_1]), (-32767 - 1)))) | (arr_0 [i_0]))) == var_10));
                arr_25 [i_0] = (1974993132439816729 & 2619299704601543094);
            }
        }
    }
    var_21 = (var_9 > 1);
    var_22 = (max((~var_13), var_5));
    var_23 = (min(var_23, var_0));
    #pragma endscop
}
