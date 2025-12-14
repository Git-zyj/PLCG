/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((var_1 ? var_9 : (max(var_3, var_1))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (var_9 % var_6);
        var_14 = (~var_5);
        var_15 = ((arr_0 [i_0 + 1] [i_0 + 1]) > 9288);
    }
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                var_17 = var_1;
                var_18 = (max(((max((!var_4), -116))), var_10));
            }
        }
    }
    #pragma endscop
}
