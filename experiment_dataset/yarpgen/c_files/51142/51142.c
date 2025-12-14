/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_0 + var_7);
    var_17 ^= (min(((var_2 ? var_12 : 244)), ((((var_5 ? var_15 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (-8 ? ((1 ? 39190 : 96)) : (!203));
                var_19 *= (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_20 += var_5;
    var_21 = var_9;
    #pragma endscop
}
