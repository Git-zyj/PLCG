/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 1436));
                arr_6 [i_0] [i_0] = 1428;
                var_14 = (max(var_14, 116));
                arr_7 [i_0] [i_1] [9] = ((((15318 ? (arr_2 [i_1 + 2] [i_1]) : var_0)) >= -15319));
                var_15 = arr_4 [i_0] [i_0];
            }
        }
    }
    var_16 = (var_9 ? var_0 : (max(var_3, 1)));
    var_17 = (max(var_17, (~var_7)));
    #pragma endscop
}
