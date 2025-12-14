/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, (((((!(((-(arr_3 [i_0])))))) ? ((13267 ? 1719754891 : ((1719754891 ? -6236414769599354996 : 1719754891)))) : (((((arr_2 [i_0 - 1] [i_0 - 1]) >= (arr_0 [i_0 + 2] [3]))))))))));
        var_14 = (min((!-1719754891), ((!(((var_8 ? var_8 : var_2)))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 ^= ((-(arr_0 [i_1] [i_1])));
        var_16 |= (((arr_2 [i_1] [i_1]) ? ((max((arr_1 [i_1]), ((((arr_0 [i_1] [i_1]) != (arr_0 [i_1] [8]))))))) : ((((((arr_2 [i_1] [i_1]) ? (arr_5 [19] [15]) : (arr_0 [i_1] [i_1])))) ? (((-(arr_1 [i_1])))) : var_4))));
        var_17 = ((-(arr_5 [i_1] [i_1])));
    }
    var_18 = (!var_9);
    var_19 = (min(((-((var_3 ? var_7 : var_11)))), (((((var_7 ? var_10 : var_7))) ? ((var_0 ? var_4 : var_9)) : var_6))));
    #pragma endscop
}
