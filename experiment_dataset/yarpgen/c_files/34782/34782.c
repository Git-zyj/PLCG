/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-32767 - 1);
    var_17 = (min(var_2, (((var_8 == (max(var_1, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] [i_2] = (min((((+((max((arr_1 [i_0]), var_2)))))), (max(-1609458775104961353, ((min((arr_4 [i_0] [i_0] [i_0]), var_5)))))));
                    arr_9 [i_0] = ((((((((var_2 ? (-32767 - 1) : -32764))) ? (max(-1, var_1)) : ((((arr_5 [i_0] [20]) ? 0 : var_8)))))) ? (((((var_15 ? -32746 : var_12)) > (!0)))) : (((((var_15 ? var_3 : (arr_7 [i_0]))) <= (((((arr_5 [i_2] [4]) || 17206)))))))));
                }
            }
        }
    }
    var_18 = (max(-8087853902954762234, ((var_11 ? (var_10 ^ var_6) : (((var_11 ? var_0 : -102)))))));
    #pragma endscop
}
