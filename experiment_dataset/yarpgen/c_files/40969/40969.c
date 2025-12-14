/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = (((var_6 | (arr_1 [i_0]))));
                                var_13 = (((arr_6 [i_2] [i_1] [i_0]) / var_5));
                            }
                        }
                    }
                }
                var_14 = ((((((min((arr_7 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 - 3] [i_1 + 1] [i_1 + 1] [i_1 + 2])))) + 2147483647)) << ((((((min((arr_7 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 2]), (arr_7 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 + 1])))) + 24883)) - 15))));
            }
        }
    }
    var_15 = (min(((((var_10 ^ var_4) | (var_0 | var_11)))), (min((var_5 | var_3), ((max(var_9, var_4)))))));
    var_16 = (max(var_16, ((max(0, 84086649)))));
    #pragma endscop
}
