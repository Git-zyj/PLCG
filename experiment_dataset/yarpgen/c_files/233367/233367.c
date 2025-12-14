/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min(((((arr_7 [i_0] [i_1] [i_2] [i_2]) * var_4))), (~1869855972506876298)));
                    var_12 = var_5;
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (~(((((arr_7 [i_0] [1] [i_2] [i_0]) ? var_7 : var_8)))));
                }
            }
        }
    }
    var_13 = (((1 > var_10) & var_6));
    var_14 = (((min(var_1, var_5)) ? 0 : (18204 < -627391748)));
    var_15 ^= (((max((0 / var_1), var_10)) + var_7));
    #pragma endscop
}
