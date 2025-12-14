/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (min(((((min(-1, (arr_3 [18])))) >> ((((max(var_3, var_0))) - 65483)))), ((-(arr_2 [i_1 - 1] [i_1 - 1])))))));
                var_21 = (max(var_21, (((281474976710655 >> (-1 + 51))))));
            }
        }
    }
    var_22 = ((~(min(112, var_11))));
    var_23 = (min(var_23, ((min(80, var_6)))));
    #pragma endscop
}
