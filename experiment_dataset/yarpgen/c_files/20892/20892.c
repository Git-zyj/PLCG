/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_8);
    var_16 = (65 ? (((((var_2 ? var_3 : var_1)) < (126 % 129)))) : ((((min(128, var_1))) ? -104 : var_8)));
    var_17 = (max((((((94 ? var_2 : var_3))) ? ((var_10 ? var_5 : var_14)) : (((18665 ? var_11 : 386398999))))), var_6));
    var_18 = ((~(((((var_0 ? var_13 : 16264))) ? var_8 : (~-1189291114389368711)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((var_7 ? (((((190 ? (arr_1 [i_0]) : var_1)) >= (!var_1)))) : -41));
                arr_6 [0] = ((((min(((1073741823 ? -72 : var_2)), ((min((arr_4 [i_0] [15] [1]), var_6)))))) ? 65 : (((((1 ? 16936 : 386398999))) ? (var_4 || -47) : (((arr_3 [i_0] [i_1] [i_1]) ? 2995476218528310560 : (arr_4 [i_0] [16] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
