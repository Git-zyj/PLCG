/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) - (((arr_1 [i_0] [i_1]) | (arr_2 [i_0]))))) | (((arr_1 [i_0] [i_0]) | (((arr_0 [i_1 - 2]) / (arr_3 [i_0])))))));
                var_13 += (((((arr_4 [18]) / (arr_2 [12])))) * ((((((arr_4 [18]) / (arr_4 [16])))) / (((arr_4 [4]) * (arr_3 [10]))))));
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
