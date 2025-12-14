/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(1, var_8)) ? var_16 : (((1 ? var_8 : var_18))))) & var_12));
    var_21 = (var_12 / var_10);
    var_22 = (max(((max(var_5, (((1 ? var_19 : var_15)))))), (((-21297 ? 8 : var_1)))));
    var_23 = ((((((max(var_18, var_10))) ? var_7 : var_2)) & ((((-1 > ((min(var_4, var_17)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_24 = ((var_0 ? ((1 ? (arr_0 [i_0]) : -43)) : ((((var_12 < var_8) != (arr_1 [i_1 - 2] [i_1 + 1]))))));
                var_25 = (min(var_25, ((min((((arr_1 [i_1 - 2] [15]) >> (var_16 - 1311629089))), -var_18)))));
            }
        }
    }
    #pragma endscop
}
