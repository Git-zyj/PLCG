/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(var_7, (arr_3 [i_0 - 3])))) ? (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 3]) : (arr_3 [i_0 - 3]))) : var_1));
        arr_5 [i_0] &= (max(((((max(var_13, (arr_1 [i_0])))) ? ((var_0 ? (arr_2 [i_0 - 3] [i_0 - 1]) : (arr_1 [i_0 - 1]))) : (((var_3 ? var_0 : var_4))))), (((63 + (arr_2 [i_0] [i_0 - 1]))))));
        var_15 = (arr_1 [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = arr_7 [i_1];
        arr_9 [i_1] |= ((((max((arr_7 [i_1]), (arr_6 [i_1] [i_1])))) ? ((min(64, (arr_6 [i_1] [i_1])))) : (min(((-5330275502499982422 ? (arr_6 [i_1] [i_1]) : (arr_7 [i_1]))), var_10))));
        var_16 *= var_10;
        arr_10 [i_1] = (((((var_0 < ((5330275502499982421 ? 63734 : -8339944532626819546))))) != (arr_6 [i_1] [i_1])));
    }
    var_17 = ((var_13 >> ((((51 ? 1446737190 : -5330275502499982422)) - 1446737174))));
    var_18 = (min(var_10, var_6));
    #pragma endscop
}
