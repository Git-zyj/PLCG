/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        var_21 = (max(((min((arr_0 [i_0] [i_0]), 156))), (((~(arr_0 [i_0] [1]))))));
        arr_2 [i_0] &= ((!(((var_0 || var_6) || (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 -= (((arr_3 [i_1]) ? ((-(arr_3 [i_1]))) : 31));
        arr_7 [8] &= (((((!var_17) ? (arr_4 [6] [6]) : (min((arr_5 [i_1]), (arr_3 [i_1]))))) != ((((var_11 / (arr_5 [i_1]))) * (((var_16 / (arr_3 [i_1]))))))));
    }
    #pragma endscop
}
