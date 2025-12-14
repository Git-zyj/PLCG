/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((((max((min((arr_2 [i_0] [i_1 - 3] [i_2]), (arr_0 [i_0] [i_0]))), var_2))) ? ((((min(var_9, (arr_0 [i_0] [i_0])))) ? (arr_0 [5] [i_0]) : (arr_1 [i_2]))) : ((min(var_1, (arr_0 [3] [i_0]))))));
                    var_13 = (max(244, 3878950924));
                    var_14 = (arr_6 [i_1] [i_0]);
                }
            }
        }
    }
    var_15 = ((var_3 ? (var_1 > var_7) : ((var_6 ? var_6 : var_11))));
    var_16 += (~var_3);
    var_17 &= ((max(((var_4 ? var_2 : var_1), (((var_2 ? var_0 : var_7)))))));
    #pragma endscop
}
