/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min((((19812 + ((var_7 ? 0 : var_11))))), (min(15502299132251553311, 7744961625296793682))));
    var_13 += var_10;

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_14 = (((!(((~(arr_1 [i_0])))))));
        arr_2 [i_0] = ((~((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))))));
        var_15 = (min(var_15, var_9));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_16 ^= 164;
        arr_6 [i_1] = ((((max((arr_3 [i_1]), (var_8 + var_10)))) ? (((!((min((arr_1 [i_1]), (arr_1 [5]))))))) : ((min((arr_5 [i_1]), (arr_5 [i_1]))))));
        var_17 -= ((+(max((arr_1 [i_1 + 3]), 4203491601310549553))));
        var_18 = (((((-var_6 ? ((max(var_7, (arr_4 [i_1])))) : (arr_3 [i_1])))) ? (arr_0 [i_1]) : (arr_3 [i_1])));
        var_19 += (arr_4 [2]);
    }
    #pragma endscop
}
