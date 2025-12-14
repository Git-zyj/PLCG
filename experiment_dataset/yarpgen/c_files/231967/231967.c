/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_20 = 1928499076;
            var_21 |= min((var_4 && 36), var_6);
            var_22 = (((((((((min(var_11, -112)))) <= (arr_4 [i_1 - 3] [i_1]))))) ^ (max((((var_4 ? (arr_2 [i_0] [i_1] [i_0]) : (arr_5 [i_1])))), (((arr_1 [i_0]) ? 3638968405478157072 : var_4))))));
        }
        arr_6 [5] = (min((((max((arr_4 [i_0] [i_0]), 82)) ^ -71171161)), (arr_4 [i_0] [i_0])));
    }
    var_23 = var_18;
    var_24 = ((!(var_11 / var_10)));
    #pragma endscop
}
