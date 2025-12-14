/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (arr_5 [i_0] [9]);
                var_13 &= ((-1104325006 ? 663739175 : (arr_2 [i_0])));
                var_14 = (arr_5 [i_0] [i_1]);
            }
        }
    }
    var_15 &= (((var_0 % var_9) || (((0 ? (((1 << (216 - 206)))) : (~1116480258807994275))))));
    var_16 = ((255 ? ((((var_4 - var_8) ? (663739195 + -3699127016272493677) : 663739168))) : ((var_3 * (min(var_3, var_2))))));
    var_17 ^= var_9;
    #pragma endscop
}
