/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_2, var_11)))) / ((var_1 ? var_8 : var_3))));
    var_18 = (((~55) / (((((0 ? 34359738367 : 18446744073709551608))) ? (var_7 + var_5) : var_12))));
    var_19 = 9780902717028605349;

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] = (((max((arr_2 [i_0] [i_1 + 1] [i_1 + 3]), var_2))) ? ((((!(arr_2 [i_0] [i_1 + 3] [i_1]))))) : (min((arr_1 [i_1 + 1] [i_1 + 1]), 22)));
            arr_5 [i_0] [i_0 - 3] [i_0] = (max(((((max(0, 3))) ? (((arr_1 [i_0] [i_0]) + var_4)) : (((arr_3 [i_0]) ? var_16 : (arr_1 [i_0] [i_1]))))), (((var_4 ? ((var_13 ? var_4 : (arr_2 [i_0] [i_0] [i_1]))) : var_2)))));
        }
        var_20 = ((((min(((((arr_3 [i_0 - 2]) ? 51099 : var_9))), (((arr_3 [i_0]) ? (arr_3 [i_0 - 2]) : var_13))))) ? ((((max((arr_2 [i_0] [i_0 - 3] [i_0]), (arr_3 [i_0])))) ? (((arr_3 [i_0]) ? (arr_0 [i_0 - 1] [i_0]) : 18446744039349813249)) : (max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))) : (arr_2 [i_0] [i_0] [i_0])));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = ((((max((arr_0 [i_2] [2]), (((14436 ? (arr_6 [i_2]) : 53)))))) ? (((max((arr_7 [i_2 - 2]), (arr_7 [i_2 - 1]))))) : ((((((arr_2 [6] [i_2] [6]) / (arr_6 [i_2])))) ? -7 : ((var_12 ? (arr_2 [22] [i_2] [i_2]) : 10))))));
        var_22 = (max(var_22, ((min((((arr_3 [i_2 - 2]) ? var_2 : (arr_3 [i_2 - 1]))), ((((arr_2 [4] [i_2] [i_2]) & (arr_7 [9])))))))));
    }
    var_23 ^= 13376629846628228658;
    #pragma endscop
}
