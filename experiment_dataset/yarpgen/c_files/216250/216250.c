/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((max(347658507, -6175671540157201010))) ? ((min(var_10, var_6))) : ((-6175671540157201037 ? 0 : var_9)))), var_0));
    var_15 = (max(var_15, var_13));
    var_16 = ((var_7 ? var_0 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 &= ((23 ? ((-6175671540157201010 ? (var_10 & var_3) : 0)) : ((((((var_1 ? (arr_2 [i_1] [i_0] [i_0]) : var_3))) ? ((max(var_8, var_5))) : (arr_2 [i_0] [i_1] [i_1]))))));
                var_18 = (max(var_18, (arr_2 [i_1] [i_1] [i_0])));
            }
        }
    }
    var_19 = -347658505;
    #pragma endscop
}
