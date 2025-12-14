/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_10 &= -25;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 = ((((((arr_8 [i_0 - 1]) || var_8))) <= (((arr_8 [i_1]) ? (arr_8 [i_3]) : (arr_8 [i_0 + 2])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((var_4 || ((min((var_5 + var_5), ((var_6 ? 3 : var_6)))))));
                    }
                    arr_12 [i_2 - 1] [i_0] [12] [i_0] = 9928237297064823680;
                    var_12 += ((var_0 + (max(var_2, (arr_3 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_13 -= ((((min((arr_10 [i_2] [10] [i_2] [i_2]), -27))) ? var_7 : ((max(-3, -7)))));
                                var_14 ^= var_2;
                            }
                        }
                    }
                    var_15 = (min(var_15, (min(((min(29, ((-30 - (arr_0 [i_0])))))), (((51836 & 27) | (min(var_1, (arr_3 [i_1])))))))));
                }
            }
        }
        var_16 = (arr_5 [i_0 - 1] [i_0 + 2]);
        arr_17 [i_0] = (max((((arr_8 [i_0 - 2]) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 + 1]))), 88));
        var_17 -= var_3;
    }
    var_18 = var_6;

    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_19 = (max(var_19, (((((min((((arr_3 [i_6]) ? var_9 : 8518506776644727936)), (9928237297064823670 * 127)))) ? ((~(((arr_14 [8] [i_6]) & 3004429369)))) : ((((arr_13 [i_6]) - (arr_13 [i_6])))))))));
        var_20 ^= -6;
        var_21 += ((~((min((arr_5 [i_6] [i_6]), -7)))));
        var_22 = ((9928237297064823695 * (((var_5 ? ((1290537910 ? var_3 : -12)) : -2)))));
    }
    #pragma endscop
}
