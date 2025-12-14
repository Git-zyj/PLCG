/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = (((var_2 ? (max(var_6, var_11)) : (6353706234339483792 >= var_0))) != (max(((var_9 ? var_4 : var_11)), var_3)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (arr_5 [23] [1] [i_0]);
                arr_7 [i_0] = ((!(((((min(var_12, var_7))) ? var_6 : (!var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = 396033830;
                            arr_15 [i_0] [17] [i_0] [i_2] [13] [i_0] = (arr_2 [i_2 - 1] [i_0 + 1]);
                            var_19 = 16332964669683350277;
                            var_20 = (((arr_6 [i_2] [i_1]) << ((((max(var_0, 17547666199050238304)) != -9223372036854775804)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((var_2 ? ((min(((var_11 ? var_2 : var_1)), (1071644672 > var_13)))) : (((arr_12 [i_0 - 1] [i_0] [1] [i_0] [1] [10]) << (((arr_12 [i_0 - 2] [2] [6] [i_0] [1] [i_0]) - 9321250468569652888))))))));
                            var_22 |= max(var_3, (max((arr_10 [21] [i_0 + 1] [i_0 + 1] [i_0]), (arr_10 [i_5] [i_0 + 1] [i_0 + 1] [i_0]))));
                            var_23 &= var_14;
                            var_24 = (min((((~56) ? (arr_12 [i_0] [i_0] [20] [16] [i_0] [10]) : var_5)), var_4));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
