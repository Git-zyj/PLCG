/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = ((~((var_2 << (12469 - 12468)))));
                                var_16 = (((((+((((arr_0 [i_0]) <= var_7)))))) - ((~(((arr_13 [i_0] [i_2] [i_2 + 3] [i_2] [i_4] [i_0]) / var_13))))));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1] = (max(var_10, var_14));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2 + 2] [i_2] = (min((((((arr_5 [i_2] [i_2]) ? (arr_0 [i_0]) : var_4)) ^ var_4)), -2));
                    var_17 = (!53079);
                }
            }
        }
    }
    var_18 = ((((min(12469, -2))) ? (((55117 || (!var_14)))) : var_10));
    var_19 = ((((var_10 > ((0 ? var_13 : var_5)))) ? (max(43687, 127)) : ((((min(var_2, 1933533435929681419)))))));
    #pragma endscop
}
