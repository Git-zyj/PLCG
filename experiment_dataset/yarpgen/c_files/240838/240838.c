/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (arr_5 [12] [i_1] [i_2]);
                    var_19 *= var_12;
                    var_20 = (arr_2 [i_2] [i_0] [i_0]);
                    var_21 ^= (!var_14);
                }
            }
        }
    }
    var_22 += (min(1, 10));
    var_23 = (max((((!(!var_8)))), var_15));
    #pragma endscop
}
