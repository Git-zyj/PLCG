/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((var_12 ? 238 : var_8))) || (((255 ? var_4 : var_10))))), (!0)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((((((((arr_0 [6]) ? var_10 : (arr_0 [6])))) ? ((min(0, 255))) : (arr_1 [i_0 + 1] [12])))) ? var_2 : (((arr_4 [i_0 + 2] [i_1 - 3]) + (((arr_1 [i_0] [6]) ? (arr_4 [i_0 - 3] [i_1]) : 255)))));
                var_15 = (((((((min((arr_5 [i_0] [i_1] [2]), 98))) | (~-29502)))) ^ (((min((arr_0 [i_0]), -5980084264508304556)) ^ 0))));
                var_16 = (((((-(arr_4 [i_0 - 2] [8])))) < (((max(var_10, (arr_4 [i_0 - 3] [i_1 + 3]))) << ((((var_12 ? 146 : 1)) - 117))))));
                var_17 = (max((arr_4 [i_1] [i_0]), (((min((arr_5 [i_0] [i_1] [3]), (arr_2 [7] [i_1 + 3]))) / (((max((arr_6 [i_0] [i_1]), (arr_3 [i_0])))))))));
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
