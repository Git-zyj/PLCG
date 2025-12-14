/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [8] [i_1] [i_1] = ((~(((var_0 / 4280013648327782635) - (max(0, var_7))))));
                var_17 = (min(var_17, (!4280013648327782635)));
                var_18 = ((((max(((var_14 ? 7864599503095526371 : var_4)), (arr_0 [i_0])))) ? (max(271738401749346376, ((max(var_11, 15623))))) : (((max(var_7, var_15)) * (arr_5 [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
