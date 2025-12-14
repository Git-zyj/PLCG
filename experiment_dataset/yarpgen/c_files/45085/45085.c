/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!8) <= var_11));
        var_13 |= ((((((max(230, var_9)) != var_1))) * var_10));
        var_14 = ((((max(var_5, var_0))) << (!1)));
        var_15 = (min(var_2, var_1));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = (((((var_7 <= (arr_4 [20])))) % (var_8 != var_10)));
        arr_6 [i_1] = (((arr_4 [i_1 + 1]) ? var_8 : (arr_4 [i_1 + 1])));
        arr_7 [i_1] [i_1] = (var_11 + var_11);
    }
    #pragma endscop
}
