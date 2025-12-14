/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_9 ? var_9 : (((var_10 ? var_10 : var_4))))) & ((((((var_9 ? var_11 : var_1)) <= var_1))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((min(((var_4 - (arr_0 [i_0]))), var_8))) ? ((((!(arr_0 [i_0]))))) : (min(((((arr_2 [i_0] [i_0]) % var_2))), ((-(arr_0 [i_0])))))));
        var_14 ^= 1601564688;
        arr_4 [i_0] [i_0] = ((8504 & (min((min(var_9, var_8)), var_7))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = var_9;
        var_16 += (((((arr_5 [12] [i_1 - 1]) ? (arr_5 [6] [i_1 - 1]) : var_6)) << (((arr_5 [10] [i_1 - 1]) - (arr_5 [10] [i_1 - 1])))));
        arr_7 [i_1] = (min(var_12, (arr_0 [i_1])));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 |= var_2;
        arr_11 [i_2] [i_2] = max((max(((((arr_5 [2] [i_2]) && var_1))), (((arr_2 [i_2] [i_2]) ? (arr_0 [0]) : (arr_2 [i_2 - 1] [i_2]))))), (((var_1 || (arr_10 [i_2])))));
        var_18 = ((((max(131, -89))) ? (min(var_4, ((var_11 / (arr_5 [0] [i_2]))))) : (((var_4 ? (-6611 | 48) : (arr_6 [14]))))));
    }
    var_19 = (min(var_19, var_12));
    #pragma endscop
}
