/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = var_10;
                    var_21 = (max(var_21, (((!(((((max(57796, 656068359))) ? -656068359 : ((var_17 ? -656068359 : -33731044))))))))));
                }
            }
        }
    }
    var_22 = ((var_10 ? (min(var_5, (max(var_4, var_9)))) : ((min(var_6, (var_3 >= var_17))))));
    #pragma endscop
}
