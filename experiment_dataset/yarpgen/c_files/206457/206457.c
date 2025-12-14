/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((max((var_9 || var_6), ((var_14 ? var_12 : (arr_5 [i_0] [i_1])))))) ? ((((((var_5 ? var_2 : var_3))) ? (max((arr_1 [i_0] [i_0]), var_6)) : (((arr_2 [i_0] [i_1]) ? var_0 : var_0))))) : (max((~var_2), (max(4137455828, 11870365167317528617))))));
                var_18 *= ((!(((var_9 ? var_6 : (arr_3 [i_1]))))));
                var_19 = max(((max(((var_6 ? (arr_0 [i_0] [i_1]) : var_1)), (max(var_3, (arr_3 [i_0])))))), (max(((var_13 ? var_7 : (arr_1 [i_0] [i_0]))), ((var_0 ? var_6 : var_14)))));
                arr_7 [i_1] = (max((((!(arr_1 [i_0] [i_0])))), ((((max(var_15, var_14))) ? (max(var_10, var_10)) : var_8))));
            }
        }
    }
    #pragma endscop
}
