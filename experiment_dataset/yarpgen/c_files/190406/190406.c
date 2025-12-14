/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 -= (min((min((((arr_2 [i_0]) & (arr_0 [i_0]))), (min((arr_0 [i_0]), (arr_2 [5]))))), (max((arr_1 [i_0 + 3]), (max((arr_2 [i_0]), (arr_1 [i_0])))))));
        var_16 ^= (max((arr_1 [i_0]), (min((((!(arr_0 [i_0])))), (arr_2 [i_0 - 1])))));
    }
    var_17 *= ((var_7 >= (((max(var_0, var_0)) % (((var_12 >> (var_3 - 2951644593))))))));
    var_18 = ((((((var_9 ^ var_10) == (var_8 > var_5)))) ^ ((((0 == -1211498981) || (var_7 & var_2))))));
    #pragma endscop
}
