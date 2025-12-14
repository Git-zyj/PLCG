/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_6 ? var_4 : var_10))) ? (~var_5) : var_1));
    var_19 = (((min(var_16, var_17))) ? (((((0 / var_9) != var_15)))) : ((0 ? (3 ^ var_12) : (!var_1))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, var_11));
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((((((((max((arr_0 [i_0]), (arr_1 [i_0])))) ^ ((~(arr_0 [i_0]))))) + 2147483647)) << (((((arr_1 [i_0]) ? (((arr_2 [i_0]) | var_15)) : (((arr_2 [i_0]) ? var_3 : (arr_0 [i_0]))))) - 10815))))) : (((((((((max((arr_0 [i_0]), (arr_1 [i_0])))) ^ ((~(arr_0 [i_0]))))) + 2147483647)) << (((((((arr_1 [i_0]) ? (((arr_2 [i_0]) | var_15)) : (((arr_2 [i_0]) ? var_3 : (arr_0 [i_0]))))) - 10815)) - 17656)))));
        var_21 |= ((arr_0 [i_0]) ? ((18446744073709551615 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (~var_6));
        arr_4 [i_0] = (arr_2 [i_0]);
        var_22 ^= (max((((arr_1 [i_0]) + 55)), ((min((arr_1 [8]), var_7)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 = ((((((min(var_17, var_15))))) ? ((-(arr_7 [i_1]))) : ((-((min((arr_6 [i_1]), -49)))))));
        var_24 = (max(var_15, (arr_7 [i_1])));
        var_25 = ((((~(~var_5))) << var_15));
    }
    var_26 = (min(var_26, (((var_10 ? var_0 : var_6)))));
    #pragma endscop
}
