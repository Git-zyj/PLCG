/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-((~(max(2147483629, var_12)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 ^= (arr_0 [i_0] [i_0]);
        var_15 *= var_9;
        var_16 = (((((((max(var_2, (arr_0 [i_0] [i_0])))) ? 2147483615 : (arr_0 [i_0] [i_0])))) ? var_4 : (((arr_1 [i_0] [i_0]) ? (max(-1, -2147483625)) : 1))));
        var_17 *= ((((min((arr_1 [i_0] [i_0]), (arr_1 [0] [i_0])))) ? (max(var_1, ((-(arr_1 [i_0] [1]))))) : (((min(-69, 26135))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = var_3;
        arr_5 [i_1] = (((((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) * ((min(var_3, (arr_0 [i_1] [i_1]))))));
        var_18 = (var_4 ? (((!((max(var_0, var_10)))))) : ((max((arr_3 [i_1] [i_1]), (arr_1 [i_1] [2])))));
        var_19 = (min(var_19, (((2147483639 ? ((max((arr_0 [i_1] [i_1]), (arr_3 [0] [4])))) : var_1)))));
    }
    #pragma endscop
}
