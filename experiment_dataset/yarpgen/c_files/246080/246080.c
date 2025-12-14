/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((((((max(var_8, var_2))) ? (((min((-127 - 1), var_1)))) : 626837014031593136)) * var_7));
                    arr_10 [i_0] [i_0] = ((min(var_4, var_10)));
                }
            }
        }
    }
    #pragma endscop
}
