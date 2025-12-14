/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((max(var_3, var_6)) - (var_0 / var_3))), var_10));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (min((max(1974921634, (min(var_3, 1436121844)))), (((-1974921634 == (arr_2 [i_0]))))));
        var_13 = (((max(255, 1436121817)) - (((var_9 != (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = (((((var_9 >> (((arr_4 [i_1]) - 14353545004663730535))))) ^ (min(var_7, (arr_4 [i_1])))));
        var_15 *= max((max((arr_4 [i_1]), (arr_4 [i_1]))), ((((arr_4 [i_1]) == (arr_4 [i_1])))));
    }
    var_16 = var_6;
    #pragma endscop
}
