/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((112 ? 5824431132667844088 : 112));
                var_17 = (~35);
                var_18 = (((-21 * 35) ? (((min((arr_4 [i_1 + 2] [i_1 + 2]), (arr_4 [i_1 + 1] [i_1 - 1]))))) : ((((((arr_4 [i_0] [i_1 - 1]) | 2453888938867025733))) ? (((~(arr_4 [i_0] [i_1 - 2])))) : ((var_0 ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0])))))));
                var_19 = ((((((!-2833912066384782831) >= ((0 >> (32767 - 32737)))))) | (arr_1 [5])));
                var_20 = 83;
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
