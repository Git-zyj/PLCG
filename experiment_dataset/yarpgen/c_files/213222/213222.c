/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((arr_3 [i_1]) * (arr_2 [i_0]))) - ((((511 > (arr_2 [i_0]))))));
                var_17 += ((((max((arr_0 [6] [i_1]), 2135782833))) ? (((var_0 ? var_5 : (min((arr_1 [i_0]), (arr_3 [i_0])))))) : (min((((1 ? var_9 : var_0))), (max(-1, -512))))));
                arr_4 [i_0] = ((var_8 || (arr_0 [i_0] [i_1])));
                var_18 = (((((var_7 | (((var_6 == (arr_3 [i_1]))))))) ? (((((-93 ? (arr_1 [i_0]) : var_15))) ? (var_3 | -7478667717198649175) : (arr_0 [i_0] [i_1]))) : ((((((min(16383, -70))) > (arr_1 [i_1])))))));
            }
        }
    }
    var_19 = (max((min((!var_3), (var_2 & -2))), ((((~var_10) << (var_3 + 6922))))));
    var_20 = (min(var_20, var_1));
    var_21 = min(var_4, (((0 & 69) & var_1)));
    var_22 = var_0;
    #pragma endscop
}
