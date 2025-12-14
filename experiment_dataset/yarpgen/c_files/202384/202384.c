/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = 1;
                    arr_8 [i_0] [i_1] [i_2] = (var_15 & ((~((max(20, var_1))))));
                }
            }
        }
    }
    var_16 *= (((((6033 / 40716) / ((min(22789, var_8))))) - -104));
    var_17 = (max(var_17, (((min(1, (min(var_13, var_12))))))));
    var_18 = var_0;
    #pragma endscop
}
