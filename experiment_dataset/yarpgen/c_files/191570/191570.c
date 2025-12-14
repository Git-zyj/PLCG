/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 1;
    var_18 = ((~(~91)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [20] [i_4] [i_2] |= var_0;
                                var_19 = ((((max(((-(arr_1 [i_1] [i_2]))), -6))) <= (arr_10 [i_2] [i_1] [i_1] [i_3] [6])));
                                var_20 = var_5;
                                var_21 -= max(var_10, (max((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2]), (arr_3 [i_1 - 1] [i_2]))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] = (((~6) ? (((arr_4 [i_0] [i_0] [i_2]) ? (arr_9 [i_5] [i_5] [i_5] [20]) : (arr_6 [i_0] [i_0] [i_1 + 2]))) : (((var_1 >= (arr_9 [i_1] [i_1] [i_1 + 2] [i_1 + 2]))))));
                        var_22 -= ((((((-9223372036854775807 - 1) ? (-6067079825375595573 / var_12) : ((max((arr_4 [i_0] [i_1] [i_1 - 1]), var_9)))))) ? 229 : (arr_15 [i_5] [i_5])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            {
                var_23 = (min(var_23, (arr_3 [i_6] [i_6])));
                arr_25 [i_6] [i_6] [i_7] = (((((arr_13 [i_7] [i_7]) + 9223372036854775807)) << (((((min((arr_16 [i_7] [i_7 - 2] [i_7] [i_7 - 1] [1]), (arr_12 [i_6] [i_6] [i_7 - 2] [i_6] [i_7 - 2]))) + 404050237443327357)) - 12))));
            }
        }
    }
    #pragma endscop
}
