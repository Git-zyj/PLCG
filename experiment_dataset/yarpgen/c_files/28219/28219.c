/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = (!(arr_9 [i_0] [i_0] [i_0]));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = (0 >> 1);
                        arr_15 [14] [9] [i_1] [i_1] [i_0] [i_0] = ((arr_3 [i_0]) ? var_6 : ((~(~var_2))));
                        var_13 = (arr_0 [i_0] [i_1]);
                        arr_16 [i_0] [i_0] [i_0] [i_0] = 0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_14 = ((0 >= (arr_0 [i_1] [i_1])));
                        var_15 = (max(var_15, (((~(arr_5 [i_0]))))));
                        arr_19 [i_0] [i_0] [i_0] [18] &= (((arr_5 [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0])));
                        arr_20 [14] [i_0] [i_4] [i_0] [i_0] = ((((1 + (arr_3 [i_1]))) - var_3));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_16 |= (min(((((arr_2 [i_0]) != (arr_2 [i_0])))), var_1));
                        var_17 += (var_6 & ((var_2 & ((268419072 ? var_2 : var_3)))));
                        var_18 += (((((-32767 - 1) + 2147483647)) >> (min(var_4, var_10))));
                    }
                    arr_23 [i_0] [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
