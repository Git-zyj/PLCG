/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((((min(var_6, var_11)))) ? ((min(((var_9 ? (arr_5 [i_0] [i_0]) : 0)), -var_10))) : var_9));
                    var_15 = (max(var_15, 22));
                    var_16 = ((-(max((((arr_0 [i_0]) ? var_8 : var_7)), ((min(0, 4)))))));
                }
            }
        }
    }
    var_17 = (!-0);
    var_18 = (min(10880, -7936));
    #pragma endscop
}
