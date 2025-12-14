/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_10 ? ((7733662505804936337 ? var_7 : -68294484)) : -var_2)))));
    var_14 = ((max(((min(177, var_9))), 1)));
    var_15 = (min(var_15, (var_12 && 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = (arr_7 [i_0] [i_0] [i_1 - 3] [i_2]);
                    var_16 = (max(var_16, ((((((((arr_5 [i_0 + 2] [i_0] [i_1 - 2] [i_2]) ? 3371847445953892329 : 1)))) ? (max((arr_1 [i_0 - 1] [i_1 - 1]), (arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_1 + 2]))) : -31684)))));
                    var_17 = (min(var_17, (((arr_1 [i_2] [i_2]) > (((arr_1 [i_0 + 2] [i_0 + 2]) ? (min(-182862137051582031, (arr_5 [i_0] [5] [5] [i_0]))) : 11435))))));
                }
            }
        }
    }
    #pragma endscop
}
