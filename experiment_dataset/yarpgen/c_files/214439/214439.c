/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((5449588627156172473 ? var_5 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (min(var_13, -113));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_14 = (max(var_14, (((((((arr_2 [i_0] [i_1]) ? -1452208648 : 62))) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_15 = (arr_5 [i_0] [i_2 - 2] [i_2]);
                                var_16 *= 5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
