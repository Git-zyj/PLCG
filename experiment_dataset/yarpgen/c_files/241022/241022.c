/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(16930, (var_3 >= 58433))));
    var_12 *= (~(min(var_8, var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_13 = ((-((~((7102 ^ (arr_4 [i_1 + 1] [i_0] [i_0])))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_14 = var_7;
                    arr_9 [i_0 - 1] [i_0 - 2] [i_0] = 0;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_15 += ((!(arr_6 [i_0 - 1] [i_1 + 1])));
                    var_16 = (!var_5);
                    arr_14 [i_0] [i_1 + 1] [i_3] [i_0 + 2] = ((-((max((arr_4 [i_0] [i_0 - 1] [i_0]), 58433)))));
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
