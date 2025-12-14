/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? (max(121, ((min(var_7, var_2))))) : var_0));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, ((((((var_10 * (arr_0 [i_0 + 1])))) ? (((arr_0 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : (arr_2 [i_0 - 1]))))));
        var_14 ^= ((((max((arr_0 [i_0 + 1]), var_4))) / (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((((((arr_3 [i_1]) ? (arr_2 [i_1]) : (-2147483647 - 1))) << ((((121 ? (arr_0 [i_1]) : 1)) - 84)))) < ((((max((arr_6 [i_1]), 28134))) ? ((min(1, 15))) : ((min(1, 134))))));
        var_15 = (((((max((arr_0 [i_1]), var_7))) < var_1)));
    }
    var_16 = ((-((626 ? 138 : ((var_8 ? 33056 : 13350327917904820118))))));
    #pragma endscop
}
