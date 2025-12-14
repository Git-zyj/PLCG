/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min(((((arr_2 [14]) >= (arr_2 [i_0])))), (min(((32546 ? var_3 : -2605800054525418736)), (max(var_6, (arr_2 [i_1])))))));
                var_15 ^= 1;
                arr_6 [3] [16] = (((arr_0 [i_1]) ^ ((((((arr_1 [i_1]) <= var_11))) * ((((arr_1 [14]) == var_2)))))));
            }
        }
    }
    var_16 = var_12;
    var_17 = -32562;
    var_18 = (min(var_12, var_9));
    #pragma endscop
}
