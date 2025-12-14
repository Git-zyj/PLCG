/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (!var_8);
                    var_17 = ((((max(-6400, var_6))) ? 6196 : ((((-32760 >= 15454) || (((-31233 ? -13272 : -32754))))))));
                }
            }
        }
    }
    var_18 = (min((((!-13250) | 1086)), (((var_13 - 20158) ? ((var_5 ? var_3 : var_2)) : ((max(var_1, var_0)))))));
    var_19 = (((--24691) & (((((var_10 ? var_9 : var_7))) ? var_13 : (-3934 || 8)))));
    #pragma endscop
}
