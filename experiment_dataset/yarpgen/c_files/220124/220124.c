/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));
    var_14 = var_3;
    var_15 ^= (min(var_0, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 &= (((((max(5870994073400346816, 5133231691133836222)))) ? ((((arr_1 [i_1]) == (arr_1 [i_0])))) : ((min(-27416, -35)))));
                var_17 = (((((-(arr_1 [i_0])))) ? ((-115 ? (min(7, (arr_2 [i_1]))) : -var_11)) : (((((~1737706527) >= (var_12 ^ var_5)))))));
                arr_5 [12] = ((((((var_11 ? -29 : 269891654))) ? var_2 : (arr_4 [i_0] [i_1] [2]))));
            }
        }
    }
    var_18 *= var_9;
    #pragma endscop
}
