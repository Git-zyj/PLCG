/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, ((min(-3459229779, (((min(17464, var_7)))))))));
        var_13 = (min(var_13, (~7693024595339764823)));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_14 += (arr_2 [i_1]);
        var_15 = (arr_2 [i_1 + 1]);
        var_16 = (arr_1 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (((arr_7 [i_2]) ? (arr_8 [10] [i_2]) : (arr_9 [i_2])));
        arr_10 [i_2] [i_2] = (arr_8 [i_2] [i_2]);
        var_18 += ((arr_7 [i_2]) > 120);
    }
    var_19 ^= (max(((602562811 / (max(65416, var_3)))), (((min(-1356621155, var_7))))));
    #pragma endscop
}
