/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 ^= (5544151505772346502 | 12902592567937205114);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [7] = (((arr_0 [i_0]) - var_7));
                var_16 += (arr_3 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
