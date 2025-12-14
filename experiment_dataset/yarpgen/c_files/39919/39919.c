/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (((((min(var_8, var_10)))) ? ((var_9 ? var_1 : -var_16)) : (max((((var_4 ? 1 : 27))), var_9))));
    var_20 = (min(var_20, (((((var_3 ^ ((var_3 ? 1 : 33550336)))) <= var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ^ (arr_1 [2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_7 [10] [3] [4] [10]);

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [0] [i_1] [i_2] [i_3 + 1] &= (((arr_6 [i_3] [1] [i_3 - 1] [i_1]) & (arr_6 [i_2] [i_2] [i_3 - 1] [i_3 - 1])));
                        var_21 = (min(var_21, (((var_17 ? 0 : (arr_2 [10]))))));
                    }
                }
            }
        }
        var_22 &= (arr_2 [8]);
    }
    var_23 = 1116892707587883008;
    #pragma endscop
}
