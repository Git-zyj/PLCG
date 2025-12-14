/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-(--33554431)));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((-(arr_1 [i_0] [i_0 + 1]))) / (((arr_1 [i_0] [i_0 - 2]) ? (arr_2 [i_0] [i_0 - 2]) : (arr_2 [i_0] [i_0 - 2])))));
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
        arr_6 [i_0 - 2] = (min((((arr_2 [i_0] [i_0]) | (((arr_2 [2] [i_0]) ? var_14 : var_19)))), (((((arr_3 [i_0 + 1]) ? (arr_1 [i_0] [i_0]) : var_16))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_21 = ((((~(arr_8 [i_1 - 1]))) / (((((min(0, (arr_3 [5]))))) - (((arr_8 [i_1]) - (arr_3 [i_1])))))));
        var_22 -= ((-33554431 ? (min((min(0, 11832637151006266510)), ((((arr_2 [i_1] [7]) || -766473102))))) : var_16));
        var_23 = (min((min(((33554437 ? (arr_7 [i_1]) : var_14)), -7027037596618726990)), (((+((min((arr_1 [i_1] [i_1]), (arr_2 [i_1 + 1] [i_1])))))))));
        arr_10 [i_1] = (((((33554414 ? (arr_8 [i_1 + 1]) : (((arr_8 [i_1]) + var_18))))) ? (min(-1, (arr_8 [i_1 - 2]))) : (arr_1 [i_1] [i_1])));
    }
    #pragma endscop
}
