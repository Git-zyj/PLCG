/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] &= (((arr_0 [i_0 - 1]) ? (min(1648524629, 0)) : (46639 && 1)));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_11 = (min(var_11, ((max((((((var_4 && (arr_3 [i_0 - 1])))))), (((arr_3 [i_1 - 1]) * (min(var_8, (arr_3 [i_0]))))))))));
            arr_5 [i_1 - 1] [i_1] = ((((~(arr_3 [i_1 - 1]))) ^ ((((((var_3 ? (arr_0 [i_1]) : var_6))) ? var_0 : (max((arr_1 [4]), var_0)))))));
            var_12 += var_3;
            var_13 &= (min((~var_4), (arr_0 [i_0 - 1])));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_14 = (arr_0 [i_0]);
            var_15 = ((1 ? (arr_0 [i_0 - 1]) : (((arr_8 [i_0]) ? (arr_3 [i_2]) : var_4))));
            var_16 = ((+((var_8 ? (arr_8 [i_2 - 1]) : (arr_3 [i_0])))));
        }
    }
    var_17 += ((((max((~var_5), ((min(var_10, 1)))))) | (min(var_3, (5453154257032801519 ^ var_7)))));
    #pragma endscop
}
