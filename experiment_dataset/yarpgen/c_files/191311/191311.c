/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((((((var_0 >> (var_4 - 3920183389398572267))) > (var_9 <= var_10)))) * var_3));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] = (((arr_1 [i_2]) < (arr_6 [i_0] [i_0])));
                    var_16 = (min(var_16, (arr_5 [i_2 + 1])));
                }
            }
        }
    }
    var_17 = ((((((var_2 <= var_3) >= var_8))) / var_12));
    #pragma endscop
}
