/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_1] = ((((((((var_5 ? var_6 : (arr_2 [i_0])))) ? ((((arr_6 [i_0] [i_0]) + (arr_4 [i_0])))) : (arr_7 [9] [9] [i_1] [9])))) && var_8));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_10 += max((((arr_5 [i_0] [i_2 - 1] [1]) & var_5)), (((var_6 ? (arr_5 [i_2] [i_2 + 1] [i_2 - 2]) : -1))));
                        var_11 += ((((min(var_0, (arr_7 [i_2 - 1] [i_2] [i_2 - 3] [i_2 - 3])))) ? ((max(var_4, (arr_7 [i_2 + 3] [i_2] [i_2 + 2] [i_2 - 3])))) : ((-(arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 3])))));

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_12 += (arr_6 [i_0] [i_0]);
                            var_13 = var_8;
                            var_14 += var_6;
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_15 += (((var_8 ? var_5 : var_8)));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] = (((arr_18 [i_2 - 2] [i_2] [0] [i_2 - 1] [i_2 + 1]) & (((arr_14 [i_2] [i_2] [0] [i_5] [0] [i_6]) ? 448 : 2090143621))));
                            var_16 = (min(var_16, ((((arr_5 [i_5] [i_2 - 1] [i_2 - 3]) ? (arr_5 [i_5] [i_2 - 1] [i_2 - 3]) : var_2)))));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_17 = (max(var_17, ((((arr_19 [i_2 - 2] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_2 - 3] [i_2 - 2] [i_2 + 1] [i_2 + 1]) : 2245479781)))));
                            var_18 += (((var_5 == 2874230919) ? var_8 : var_1));
                            var_19 ^= (arr_3 [i_5] [i_5]);
                            var_20 += ((((2090143617 || (arr_1 [i_1]))) && ((!(arr_23 [i_7] [i_0] [i_2 + 2] [i_0] [i_0])))));
                        }
                        var_21 = ((((((arr_23 [i_0] [i_2] [2] [i_0] [i_5]) / 2509274442))) * 727740467062289136));
                    }
                }
            }
        }
    }
    var_22 += ((!((min((((-2147483647 - 1) + var_4)), ((2090143623 ? var_8 : 56115)))))));
    var_23 = var_0;
    var_24 += ((((min(var_5, ((var_5 ? var_5 : var_7))))) ? (min(((var_4 ? 1785692854 : var_6)), (((var_7 ? var_6 : var_6))))) : var_4));
    #pragma endscop
}
