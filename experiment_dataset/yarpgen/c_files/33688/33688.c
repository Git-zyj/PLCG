/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_13;
    var_16 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] [10] = (~var_11);
                var_17 = (arr_2 [i_0] [i_0]);
                var_18 = (arr_0 [i_0 - 1] [i_0 + 1]);
            }
        }
    }
    var_19 = 0;
    var_20 = (!var_11);
    #pragma endscop
}
