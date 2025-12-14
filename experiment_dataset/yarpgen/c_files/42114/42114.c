/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= -17339;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_5));
                    arr_9 [i_0] [i_0] [i_0] = var_8;
                    var_15 = arr_7 [i_2 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 1];
                    var_16 = 1380171586;
                    arr_10 [i_2 - 2] [i_2] [i_2] [i_2] = (max((((arr_6 [i_0] [i_1 - 1] [i_2 - 1] [i_2 + 1]) ? (arr_6 [i_0] [i_1 - 1] [i_2 - 1] [i_2 + 1]) : (arr_6 [i_1] [i_1 + 1] [i_2 - 2] [i_2 - 1]))), (((arr_6 [i_0] [i_1 - 1] [i_2 - 2] [i_2 - 1]) ? (arr_6 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1]) : (arr_6 [i_0] [i_1 + 1] [i_2 - 2] [i_2 + 1])))));
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
