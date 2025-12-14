/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = 16383;
                    arr_8 [i_0] [i_1 + 1] [0] = (arr_4 [i_0 + 1] [i_0] [i_0 + 1]);
                    var_18 += (max((((arr_6 [i_0] [i_0 + 1] [5]) ? (((arr_5 [i_0 + 1] [i_2]) << (((arr_2 [8]) - 960212369)))) : (arr_6 [i_2] [i_2] [7]))), (min(var_13, ((62547 ? (arr_2 [i_1]) : (arr_2 [i_0])))))));
                }
            }
        }
    }
    var_19 = var_16;
    #pragma endscop
}
