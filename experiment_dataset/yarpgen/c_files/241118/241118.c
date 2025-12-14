/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((!(((var_9 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))))));
                var_17 += (min(((var_6 ? (min(0, 6266077055361081347)) : (0 < -26333))), -11148));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (min((((2149 ? 6266077055361081347 : 18446744073709551615))), ((((arr_11 [i_3] [i_0 - 2] [i_0]) ? (arr_11 [i_0] [i_0 - 2] [i_0]) : 0)))))));
                            var_19 &= (~((1 + (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                            {
                                var_20 *= (!0);
                                arr_15 [i_3] [i_3] [i_1] [i_0] [i_0] = (arr_7 [i_1 - 1] [i_3 + 1] [i_0 - 1]);
                                var_21 *= ((var_12 > (arr_11 [i_3] [i_3] [i_3])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_1] = ((!((-1 && (arr_17 [i_5] [i_1] [i_1] [i_0])))));
                                arr_20 [i_1] [i_1] = (arr_6 [i_1] [i_1] [i_5]);
                            }
                            var_22 = (arr_8 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
