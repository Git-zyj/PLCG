/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((min(var_7, var_18))), (min(var_2, var_6)))), (min((max(var_2, var_6)), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (min(44103, -1));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = var_14;
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
