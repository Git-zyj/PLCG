/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_14 && var_11) ? var_7 : 1))) + var_1));
    var_17 = 4295646968768708489;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = 3;
                var_19 ^= (min(((((arr_4 [8] [i_1] [i_0]) > ((4295646968768708480 ? (arr_3 [i_0] [20]) : var_13))))), (max((15727865651758605320 - var_6), ((((arr_1 [i_0] [i_1]) & var_10)))))));
                var_20 = (var_8 - var_4);
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
