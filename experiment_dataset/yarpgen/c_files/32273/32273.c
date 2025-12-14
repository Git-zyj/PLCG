/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_3, var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (min((min((arr_8 [i_2 - 1] [2] [i_2] [i_0 - 1]), var_1)), (arr_8 [i_2 + 1] [i_1] [i_2 + 1] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = ((~(arr_3 [i_0] [i_2 + 1] [i_3])));
                                arr_14 [i_2] [i_1] [i_2] [i_3 + 2] [i_4] = ((10953 ? var_11 : (arr_11 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0])));
                                var_14 = -18207;
                                arr_15 [i_0] [i_1] [i_0] [i_3] [10] |= (((((var_2 - (arr_3 [i_1] [i_1] [i_3])))) ? (((var_8 ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1]) : var_3))) : (arr_5 [i_0] [i_0 - 1])));
                                var_15 += (arr_5 [i_1] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_16 = ((arr_1 [i_6 + 2] [i_6 + 2]) % ((var_1 ? var_3 : 22861)));
                                var_17 += (((-(arr_3 [i_0] [i_0 - 1] [i_2 + 1]))));
                                var_18 += ((((((~3652) ? var_5 : (min((arr_2 [i_0]), var_1))))) ? (((+(((arr_4 [i_6]) - 22861))))) : ((-var_11 ? 4294967284 : var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
