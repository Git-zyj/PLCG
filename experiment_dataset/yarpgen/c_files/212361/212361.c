/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((17780456571195841544 ? 1 : (max(1, 789119414))));
                var_21 -= var_15;
                var_22 = (max(var_16, (min(34359738367, -1255))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = 4032;
                                var_24 += ((((17780456571195841544 ? -1629142473 : (arr_12 [i_2 + 1] [i_0 - 3] [i_1 + 2]))) + (max((((arr_15 [i_0 - 2] [i_0] [6] [i_0]) + -13029)), ((-(arr_2 [i_0])))))));
                                var_25 = (min(var_25, (arr_7 [i_0])));
                                arr_17 [i_0] [i_1] [i_4] [6] [i_4] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
