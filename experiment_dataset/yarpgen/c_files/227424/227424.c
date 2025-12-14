/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((15 == var_12) + ((var_4 ? var_5 : var_0))))) || ((((((1 ? 15 : 1))) ? ((min(15, 0))) : (max(var_3, var_3)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (min((arr_2 [i_0] [i_0]), 1));
        var_18 &= (arr_1 [i_0] [i_0]);
        var_19 ^= ((var_2 ? (((!(arr_2 [16] [i_0])))) : (((((~(arr_2 [4] [i_0])))) ? (arr_0 [10]) : (arr_2 [20] [i_0])))));
        var_20 += (max((((arr_2 [6] [i_0]) * (min(8972014882652160, -1503561212)))), ((((((1341660186 | (arr_2 [8] [i_0])))) ? (arr_1 [i_0] [i_0]) : ((var_2 ? var_5 : (arr_2 [16] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_3 [i_1] [i_1])));
        var_22 = (arr_4 [i_1]);
    }
    var_23 -= var_4;
    var_24 = var_9;
    #pragma endscop
}
