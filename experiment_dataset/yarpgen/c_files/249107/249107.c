/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_14, (((var_13 || var_10) ? var_8 : (!var_1)))));
    var_16 = (((-3840007993839177313 | 1688281880) - ((var_1 & (var_2 - var_9)))));
    var_17 |= (((((~(var_13 + var_2)))) ? var_2 : 3840007993839177312));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(((((((arr_2 [i_2]) ? (arr_4 [i_0] [i_0 - 2] [i_2]) : (arr_6 [i_1] [i_1] [i_2] [i_1]))) - (((arr_4 [i_0 - 1] [i_1] [4]) & (arr_1 [i_0])))))), (max((max((arr_1 [0]), -3840007993839177313)), (max(3402364575, -3840007993839177312))))));
                    var_19 = ((((-3840007993839177312 ? -3840007993839177331 : (!-110))) / (max((arr_7 [0] [i_1] [i_0] [i_0]), ((((arr_0 [i_2]) ? (arr_0 [i_1]) : (arr_6 [i_0] [i_0] [i_2] [5]))))))));
                }
            }
        }
    }
    var_20 |= (((((var_13 ? var_10 : (!var_14)))) - ((var_11 ? var_13 : -var_9))));
    #pragma endscop
}
