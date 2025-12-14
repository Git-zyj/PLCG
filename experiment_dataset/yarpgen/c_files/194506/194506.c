/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = 2146959360;
                var_11 = (arr_1 [i_0] [i_0]);
                var_12 *= (((((arr_1 [i_1 - 2] [i_1 - 2]) ? (arr_1 [i_1 - 2] [7]) : var_9)) <= (!230)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = 26;

                            for (int i_4 = 4; i_4 < 21;i_4 += 1)
                            {
                                var_13 += var_4;
                                var_14 = var_0;
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                arr_15 [i_0] [i_1] [20] [20] = var_3;
                                var_15 ^= ((var_7 ? (min(39, (min(var_2, 26)))) : var_2));
                                var_16 ^= var_1;
                                var_17 -= (min((arr_6 [i_0] [i_1 - 2]), (((((min(4, 4844687028879910434))) || (arr_7 [i_1 - 1] [i_1 - 1]))))));
                                arr_16 [14] [14] [i_1 + 1] [i_2] [i_3] [i_0] = ((((((arr_0 [i_1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : var_6))) ? ((((var_5 ? (arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [5]) : 13602057044829641183)) * 0)) : (max(var_4, (min(0, 13602057044829641188))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 &= var_3;
    var_19 = var_2;
    var_20 |= (((var_6 & var_0) ? var_2 : (var_7 | var_8)));
    #pragma endscop
}
