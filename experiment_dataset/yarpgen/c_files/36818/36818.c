/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(((min((max((arr_4 [8] [i_0]), (arr_1 [i_0]))), ((min(var_2, 246)))))), (((var_8 && 127) ? (arr_2 [i_0 + 2]) : ((var_6 ? (arr_0 [i_1 + 1]) : (arr_2 [i_1])))))));
                var_20 = (min(var_20, (((((((225 ? (arr_3 [i_0 + 1] [i_0] [i_0 + 1]) : 0)))) ? ((((arr_2 [i_1 + 1]) ? var_17 : (var_2 % 246)))) : ((var_15 ? ((11 ? (arr_2 [i_0]) : var_12)) : (arr_2 [i_0 - 1]))))))));
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}
