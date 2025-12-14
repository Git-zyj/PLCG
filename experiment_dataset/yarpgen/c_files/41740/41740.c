/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (!43473);
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = 3262368938;
                arr_7 [i_1] = 902977776;
            }
        }
    }
    #pragma endscop
}
