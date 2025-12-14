/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? 1496784504022832475 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_8;
                var_16 = (min(var_16, var_13));
                arr_7 [i_0] = ((((var_10 ? var_13 : (arr_4 [i_0 + 1] [i_1 - 1] [i_1 + 1]))) != 24));
                var_17 = (((((var_5 | var_6) ? (((16949959569686719141 ? var_2 : (arr_0 [i_0] [i_1])))) : var_13))) ? (((var_3 ? 76 : 49979995))) : var_13);
                arr_8 [i_0] [i_0] [i_0] = -var_2;
            }
        }
    }
    var_18 |= 49979983;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_19 [i_3] [i_2] [i_2] [i_2] = 49979981;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_19 ^= ((arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) < (((arr_9 [i_4] [i_4]) ? -49979995 : var_2)));
                        var_20 = 8936415185883884889;
                        arr_22 [i_2] [i_3] [i_4] [i_2] [i_5] = 1071834323;
                        var_21 = ((var_4 ? (arr_16 [i_2] [i_3 + 1] [i_3 + 1]) : (arr_21 [i_5] [i_3 - 1] [i_5] [i_5] [i_3 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
