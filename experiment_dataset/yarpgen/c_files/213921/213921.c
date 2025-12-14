/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 118;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [7] [i_1] [i_1] = ((var_9 ? ((var_2 ? var_3 : (arr_0 [i_1 - 3]))) : ((min((arr_4 [i_1 - 2] [i_1 - 1]), 118)))));
                var_11 = ((130 ? 152 : 219));
                var_12 += (max(169, (((62914560 ? (arr_3 [i_1 + 1] [i_1 - 3]) : (arr_3 [i_1 + 1] [i_1 - 3]))))));
            }
        }
    }
    var_13 = var_5;
    var_14 += (((((var_0 ? ((max(255, 47))) : (4294967285 != 118)))) >= -20));
    var_15 = -var_1;
    #pragma endscop
}
