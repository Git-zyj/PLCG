/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max((min((~42), ((var_10 ? var_16 : var_17)))), (((((max(var_8, var_6)) + 2147483647)) << ((var_1 >> (var_10 + 22535))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((max(((((!(arr_2 [i_0] [i_0] [14]))) ? (((max((arr_3 [i_0] [i_0] [7]), (arr_2 [i_0] [i_0] [18]))))) : (max((arr_1 [i_0]), (arr_3 [14] [i_0] [4]))))), (((-(((arr_0 [i_1] [1]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_2 [16] [i_0] [16])))))))))));
                var_22 = (((((arr_3 [i_0] [i_0 + 2] [i_0 - 1]) * (arr_3 [i_0] [i_0 - 1] [i_0 - 1]))) | ((min((arr_3 [i_0] [i_0 - 2] [i_0 + 2]), (arr_3 [i_0] [i_0 - 2] [i_0 - 3]))))));
            }
        }
    }
    #pragma endscop
}
