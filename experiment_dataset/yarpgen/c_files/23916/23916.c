/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_8 ? var_2 : 1137560876))) ? var_14 : (var_7 && var_15)))) ? (max(var_15, ((1048575 ? var_7 : var_14)))) : var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] = max(((var_17 >> (((((arr_4 [i_0] [i_0]) ^ 1048556)) - 40336369)))), ((max(1, var_15))));
                                arr_16 [i_0] = ((~((var_5 ? (arr_3 [i_0]) : (arr_2 [i_1] [i_0] [i_4])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min((max(((!(arr_0 [i_2]))), (arr_1 [i_1]))), var_17)))));
                                var_20 -= arr_17 [i_0] [i_6 - 1] [i_0] [i_0] [i_0] [i_0];
                                arr_22 [i_6] [i_6] [i_0] [i_5] [i_0] [i_0] [i_0] = (((-((min(var_13, 1))))) - (((arr_5 [i_5] [i_1 + 1] [i_0]) + 1137560876)));
                            }
                        }
                    }
                    var_21 ^= (0 || (((((var_17 ? (arr_10 [i_0] [i_1 + 1]) : (arr_10 [i_0] [i_1]))) - 1))));
                }
            }
        }
    }
    #pragma endscop
}
