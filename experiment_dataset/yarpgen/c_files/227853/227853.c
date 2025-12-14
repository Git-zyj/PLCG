/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = var_2;
                var_18 = (arr_2 [i_1]);
            }
        }
    }
    var_19 = ((0 ? -829 : 105));
    var_20 = ((var_7 ? var_14 : ((var_1 ? ((var_16 ? var_15 : var_6)) : ((max(var_13, var_3)))))));
    var_21 = 1;
    var_22 = var_11;
    #pragma endscop
}
