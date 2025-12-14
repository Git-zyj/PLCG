/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = (min(5512348429376378459, (((var_3 || (0 ^ 21))))));
                var_14 *= 150;
            }
        }
    }
    var_15 = var_11;
    var_16 = (min(var_7, 15728640));
    var_17 = (min(var_17, ((min((min(var_2, (((5512348429376378436 >> (15728640 - 15728626)))))), 5512348429376378459)))));
    #pragma endscop
}
