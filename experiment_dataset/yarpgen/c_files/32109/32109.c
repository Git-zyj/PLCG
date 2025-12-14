/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = ((((min(var_3, var_13))) ? (min(var_11, var_5)) : ((var_2 ? var_2 : var_7))));
                    var_15 -= (max((((var_10 ? var_6 : ((var_7 ? var_10 : var_2))))), (max(var_2, var_7))));
                    var_16 *= ((((var_0 ? var_13 : (var_4 | var_2)))) > var_11);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_4] [i_4] [i_3] [i_7] = var_2;
                                var_17 = ((!(var_10 / var_6)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_18 *= (max((((!(((113 ? 0 : -113)))))), var_1));
                            var_19 = (((((max(var_7, var_11))) && (var_8 || var_12))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
