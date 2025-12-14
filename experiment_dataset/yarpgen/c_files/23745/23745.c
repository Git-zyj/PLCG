/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_12 ? ((2048 ? -1429192239 : var_1)) : var_0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= (((arr_1 [i_0] [i_0]) % (((1 != (arr_0 [i_0] [i_0]))))));
        var_16 -= ((arr_2 [i_0] [i_0]) ? (((((0 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (((4659288759443380946 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) : (arr_0 [i_0] [i_0]))) : (((6824219262840247128 ? (123 | 12792) : ((32767 ? -123 : 2147483647))))));
        var_17 = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 10252234972345307956)) ^ ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_18 = (((arr_1 [i_0] [i_0]) ? ((-(((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))))) : 0));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = ((1 * ((((((arr_3 [i_1] [i_1]) ? 123 : 4))) ? (((arr_3 [i_1] [i_1]) / (arr_2 [i_1] [i_1]))) : -123))));
        var_20 = (((((~(((!(arr_2 [i_1] [i_1]))))))) && (arr_0 [i_1] [i_1])));
        var_21 = (min(var_21, ((!((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))))))));
    }
    #pragma endscop
}
