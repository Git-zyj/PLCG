/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_11 ^= (1636397725 + 1);
                        var_12 = ((var_4 ? 1 : var_1));
                    }
                    var_13 = ((arr_1 [i_0 + 2]) == (arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]));
                }
            }
        }
        var_14 ^= (((((arr_1 [i_0]) - (arr_9 [i_0] [i_0] [i_0]))) == (((arr_3 [i_0] [i_0]) / 1))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_15 = (((((var_0 ? (arr_4 [i_4 + 1] [i_4 - 1]) : 0))) ? ((((((arr_7 [i_4] [i_4] [i_4] [i_4]) ? 1 : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ? (((arr_2 [i_4] [i_4]) ? (arr_6 [i_4] [i_4] [i_4] [i_4]) : var_0)) : (((var_6 ? 20 : var_3))))) : ((((arr_2 [i_4] [i_4 + 1]) >> (((arr_10 [i_4 + 2]) - 3408339269)))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_18 [i_5] = (((var_6 ? 1 : (arr_7 [i_7] [i_6] [i_5] [i_4 + 1]))) + ((179 ? 1 : 1)));
                        var_16 = (min(var_16, (((((1 ? (((18 ? 1 : 1))) : var_6)) / ((((arr_8 [i_4] [i_4 - 1] [i_7 + 1]) | (arr_8 [i_4] [i_4 - 1] [i_7 - 3])))))))));
                    }
                }
            }
        }
        arr_19 [i_4] [i_4] = (((var_5 && var_8) ? (((arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]) ? var_1 : (arr_5 [i_4 + 2] [i_4 - 1] [i_4] [i_4]))) : (((arr_16 [i_4 + 2] [i_4] [i_4] [12]) << (-120 + 134)))));
        var_17 = (min(var_17, (((((((arr_12 [i_4 + 2]) != (arr_12 [i_4 + 2])))) == (((var_9 == (arr_12 [i_4 - 1])))))))));
        var_18 ^= (((((((arr_10 [i_4]) + (arr_9 [i_4] [i_4] [i_4]))) % (25827 | 32243)))) ? ((1214296136 ? ((var_10 ? var_8 : -25828)) : ((((arr_12 [i_4]) ? (arr_13 [i_4] [i_4] [i_4]) : 1))))) : (((var_7 << (((arr_6 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]) - 23071))))));
    }
    var_19 = (var_8 != var_7);
    #pragma endscop
}
