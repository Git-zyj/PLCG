/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = min(4473, (((((var_11 ? var_3 : var_13)) == 61066))));
                    var_17 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
