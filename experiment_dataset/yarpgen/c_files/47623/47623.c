/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-((0 ? var_5 : 1))))) ? (((var_1 ? var_9 : var_2))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_14 = var_5;
                            var_15 &= (max(var_5, (arr_4 [i_0] [i_2] [i_0 - 1])));
                            var_16 = ((~((1 ? (((arr_8 [i_0] [i_1] [i_1] [i_3]) ? (arr_1 [i_0]) : -12892)) : (arr_5 [i_0] [i_1] [i_3] [i_0])))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_17 = (arr_3 [i_0] [i_2]);
                                arr_13 [i_1] [i_1] [i_1] [i_0] = (arr_0 [i_4] [i_1]);
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] = (~var_1);
                                arr_18 [i_0] [i_5] [i_0] [i_3] [i_5] [i_0] = ((((-(arr_5 [i_0] [i_3 + 2] [i_3 + 2] [i_0]))) ^ ((~(var_0 * var_11)))));
                            }
                            for (int i_6 = 3; i_6 < 8;i_6 += 1)
                            {
                                arr_22 [i_0] = ((((((!var_4) ? (~var_2) : ((min(var_0, (arr_12 [i_2] [i_2]))))))) ? (((((-(arr_21 [i_0] [i_0] [i_0] [i_0] [i_6])))) ? 0 : (arr_12 [i_0] [i_6]))) : ((max((arr_4 [i_1 + 1] [i_0] [i_0]), (arr_4 [i_1 - 1] [i_0] [i_1]))))));
                                var_18 = ((~((~((var_11 - (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_23 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((((var_5 ? var_2 : (arr_3 [i_3 + 4] [i_0 - 1]))) << (arr_3 [i_3 + 4] [i_0 - 1])));
                                arr_24 [i_6] [i_0] [i_2] [i_0] [i_0] = ((((~((~(arr_16 [i_0] [i_0] [i_1] [i_1] [i_3] [i_6]))))) | -5039459234363845171));
                                var_19 = (((max(var_3, var_10)) ^ (((var_10 ? var_1 : var_2)))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (((((arr_6 [i_0 - 1] [1]) ? ((16557350876763862010 ? var_9 : var_5)) : var_12))))));
            }
        }
    }
    #pragma endscop
}
