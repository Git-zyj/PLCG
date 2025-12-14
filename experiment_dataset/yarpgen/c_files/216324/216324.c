/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((((((arr_8 [i_1 + 2]) ? (arr_8 [i_1 - 1]) : (arr_6 [11] [i_0] [i_0 - 1])))) ^ (((!-39) ? (((41474 ? var_14 : (arr_5 [0] [i_1] [i_2 + 2])))) : ((var_3 ? var_12 : var_0))))));
                    var_16 += var_6;
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
