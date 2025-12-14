/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_0] [i_1]);
                var_15 = (max(var_15, ((((!-4) ? (arr_2 [i_1]) : var_3)))));
            }
        }
    }
    var_16 -= (((var_7 + -var_10) ? ((-17 ? -27 : -50)) : var_2));
    var_17 = var_11;
    var_18 = var_9;
    #pragma endscop
}
