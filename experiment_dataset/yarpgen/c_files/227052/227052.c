/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((var_7 ? var_6 : var_7)) & (min(-1, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(((min(11, 1217093012242634196))), (11907 && -17)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 &= -11907;
                    var_20 &= var_15;
                    var_21 *= (((arr_5 [i_1] [i_0 + 1] [i_0 + 1]) ? var_12 : (arr_5 [i_1] [i_0 + 1] [i_0 + 1])));
                    var_22 *= (((arr_3 [i_0 - 1] [i_2]) ? (arr_3 [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 - 1] [i_1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_23 &= (arr_2 [i_3] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_24 = var_4;
                                var_25 = (((((1 / (arr_12 [i_0 + 1] [i_0 + 1] [19] [1] [i_5 - 2] [19])))) ? (((2535013405163018480 + (-2147483647 - 1)))) : (arr_4 [9] [9])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (((((var_11 ^ ((-14 ? var_12 : -11))))) ? ((var_14 / (min(var_9, var_1)))) : var_11));
    #pragma endscop
}
