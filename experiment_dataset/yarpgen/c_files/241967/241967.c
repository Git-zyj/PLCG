/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 + ((((var_5 ? 255 : var_9))))));
    var_14 &= ((((var_2 & (((max(-33, var_3)))))) != 24));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(28239, (((-9223372036854775807 - 1) - -44699))));
                arr_4 [i_1] [i_0] [i_0] = (~(arr_3 [i_1]));
            }
        }
    }
    var_16 = (((((-(max(var_6, var_4))))) ? (((((65529 ? var_7 : 1))) ? var_3 : (max(-71, 6102072471440794203)))) : var_4));
    var_17 = (max((((-((-(-32767 - 1)))))), ((-var_0 ? var_8 : (-9223372036854775807 - 1)))));
    #pragma endscop
}
