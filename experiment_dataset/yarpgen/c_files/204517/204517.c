/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (!var_12);
                    var_15 = (arr_1 [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_3] = ((-var_3 ? (arr_6 [i_2] [i_2] [7]) : var_2));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((var_12 ? var_5 : 9015392455285847705)) << ((((arr_4 [i_0] [i_0]) > 34359738366))));
                        arr_11 [7] [i_1] [i_2] [i_3] = ((~(arr_3 [i_0] [i_1] [i_3])));
                    }
                }
            }
        }
    }
    var_16 = ((((((8228029721506360160 >= 240) ? (max(1299289362727445965, var_5)) : (((8228029721506360160 ? 17250 : var_2)))))) ? var_1 : 12));
    #pragma endscop
}
