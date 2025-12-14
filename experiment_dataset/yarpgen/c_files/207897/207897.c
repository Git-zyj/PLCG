/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (~1047838338);
                var_17 = arr_1 [1];
            }
        }
    }
    var_18 = (((-(max(var_6, var_15)))) > ((((((var_15 ? var_10 : 3247128979))) ? 3247128943 : (((var_15 ? var_2 : var_7)))))));
    var_19 = ((((((var_8 > var_10) ? ((var_11 ? var_12 : var_10)) : var_14))) ? ((31387 ? 35 : 3247128958)) : ((~((1047838380 ? 3247128943 : 1))))));
    #pragma endscop
}
