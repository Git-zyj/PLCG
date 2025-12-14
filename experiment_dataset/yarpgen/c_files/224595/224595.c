/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    var_19 = var_17;
    var_20 = (max(((var_14 ? (((var_6 ? var_16 : var_16))) : (var_5 / var_4))), (var_15 || var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = var_11;
                var_22 = ((((arr_2 [i_0] [14] [14]) ? ((~(arr_0 [i_1] [i_0]))) : -1)));
                arr_4 [i_0] [i_0] = var_12;
                var_23 = (arr_0 [i_0] [i_0]);
                var_24 = var_0;
            }
        }
    }
    #pragma endscop
}
