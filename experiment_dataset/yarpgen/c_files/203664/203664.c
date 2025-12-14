/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(-var_13, ((-(arr_10 [i_0] [1] [i_2]))))))));
                    arr_11 [i_0] [i_0] [i_2] = 26961;
                }
            }
        }
    }
    var_21 = (min(var_21, var_18));
    #pragma endscop
}
