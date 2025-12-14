/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((((min((((var_12 ? (arr_0 [i_0] [11]) : (arr_0 [i_0] [i_0])))), (max((arr_4 [i_0] [i_0]), var_16)))) >> (((arr_3 [i_0]) - 34345814)))))));
                var_20 = (min(var_20, ((max((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [14]) : (arr_4 [4] [4]))), (max(((~(arr_1 [i_0]))), (!var_1))))))));
            }
        }
    }
    var_21 = (var_5 + ((var_8 ? ((var_6 ? var_3 : var_18)) : var_8)));
    var_22 ^= var_7;
    #pragma endscop
}
