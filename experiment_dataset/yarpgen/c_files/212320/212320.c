/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((max(-17091, 3947924192)));
    var_19 = (min(var_19, (((var_11 ? (~var_0) : (min(var_17, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (max(232, -15135))));
                var_21 = (7 ? ((-(max(var_9, 54195)))) : (arr_0 [i_0]));
                var_22 = -var_17;
                arr_6 [3] [i_1] [i_0] = ((((20692 ? var_2 : (arr_1 [i_0 - 1]))) & (((876 ? (arr_1 [i_0 + 1]) : var_12)))));
                var_23 = ((!((((1180 && 14260) ? ((((-32767 - 1) || var_9))) : var_4)))));
            }
        }
    }
    #pragma endscop
}
