/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = var_6;
                arr_4 [i_0] [i_0] = (min(-var_2, (arr_1 [i_0])));
            }
        }
    }
    var_17 = (min(var_3, ((max(32, (min(1, 65535)))))));
    #pragma endscop
}
