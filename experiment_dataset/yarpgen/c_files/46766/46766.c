/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;
    var_13 = (max(var_13, (var_4 % var_2)));
    var_14 = ((!((max(-30, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 290265679;
                    var_16 = -40;
                }
            }
        }
    }
    var_17 = -30;
    #pragma endscop
}
