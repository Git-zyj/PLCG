/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_4;
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = var_17;
                arr_6 [i_1] = (min((1 ^ var_1), var_2));
            }
        }
    }
    #pragma endscop
}
