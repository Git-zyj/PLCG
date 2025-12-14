/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((min(var_4, var_4)))), var_7));
    var_18 = ((~(max((var_14 | var_5), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_9;
                var_19 ^= 1;
            }
        }
    }
    #pragma endscop
}
