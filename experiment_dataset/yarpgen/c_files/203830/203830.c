/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 += (max(((((arr_1 [i_0] [6]) <= (arr_2 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (min((arr_3 [i_0] [i_0]), (arr_2 [4] [4])))))));
        var_12 *= ((139 * ((((-(arr_3 [0] [2]))) / (arr_3 [i_0] [i_0])))));
        var_13 = ((~(max((max((arr_2 [i_0] [i_0]), var_10)), ((32 - (arr_2 [3] [3])))))));
        var_14 *= (((((min((arr_0 [i_0]), 127))) && ((max(1, 1183668337))))));
    }
    var_15 = (max(var_15, 2846016694));
    var_16 = (min(var_16, var_3));
    #pragma endscop
}
