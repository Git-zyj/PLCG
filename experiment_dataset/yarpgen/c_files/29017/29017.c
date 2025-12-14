/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 &= ((-((~(arr_1 [3] [i_0])))));
                var_17 = (!var_6);
                var_18 = 34;
            }
        }
    }
    var_19 &= (var_7 % var_1);
    #pragma endscop
}
