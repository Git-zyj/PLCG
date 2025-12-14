/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((min(0, 6)))), (((min(var_11, var_1)) >> (((min(var_12, var_10)) - 4134348881)))));
    var_17 = (((max((~6), (var_3 >> var_14))) & (~1798750114)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max(((((min((arr_1 [i_0]), (arr_0 [i_0]))) > (((max(255, 255))))))), ((((((arr_0 [i_0]) + var_10))) - (max(4620658344809734192, var_13))))));
                arr_5 [i_1] [i_0] = (min((((((165 ? (arr_2 [i_0] [i_1]) : (arr_0 [9])))) ? -var_7 : (arr_1 [i_0]))), (min((((arr_1 [i_0]) - var_3)), -104))));
                arr_6 [i_0] = ((-(min(((~(-9223372036854775807 - 1))), ((((arr_3 [0] [0] [0]) ? (arr_0 [i_0]) : (-2147483647 - 1))))))));
            }
        }
    }
    #pragma endscop
}
