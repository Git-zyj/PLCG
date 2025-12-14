/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 &= var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 0;
                var_22 = (min(((-(arr_1 [i_0] [i_1]))), (+-29327)));
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
