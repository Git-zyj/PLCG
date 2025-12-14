/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = 218;
                var_10 += (((arr_4 [0] [6]) << (var_0 - 10659127163034207171)));
                arr_6 [i_1] [i_1] = ((((max(var_4, var_5))) - (min((var_3 / 119), var_0))));
            }
        }
    }
    var_11 = min(var_5, ((((~var_3) ? var_2 : (var_3 & var_4)))));
    var_12 = (1 ? ((((~var_8) | (min(46, var_3))))) : (min((var_2 & var_1), ((var_9 ? var_6 : var_5)))));
    #pragma endscop
}
