/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = var_6;
                    var_16 = (((max(((((arr_2 [i_1]) / var_14))), (arr_9 [i_1]))) - ((max(2147483647, -413335885)))));
                    var_17 = (((var_8 + var_3) ? (min((arr_6 [i_1 - 2] [i_1] [i_1] [i_0 + 3]), (arr_6 [i_1 + 1] [i_1] [i_1] [i_0 + 2]))) : (arr_3 [i_2])));
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = var_5;
    var_20 = -680819943;
    #pragma endscop
}
