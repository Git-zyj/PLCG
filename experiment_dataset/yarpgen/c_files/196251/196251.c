/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -37;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (arr_2 [i_0]);
        var_20 = (min(var_20, 470165627));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_21 *= ((((((((1 ? (arr_5 [i_1]) : (arr_0 [i_1])))) ? var_16 : ((1 ? var_17 : (arr_2 [i_1 - 1])))))) ? (((((((var_7 ? var_9 : var_13))) && -var_10)))) : var_1));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [9] [9] [i_2] = (((((arr_0 [i_1 - 2]) | (arr_7 [i_1 - 1] [i_1 + 2]))) & (~var_6)));
            var_22 = var_11;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_12 [i_1] = (var_9 | var_7);
            var_23 = ((((((28 % var_15) ? (arr_4 [i_1 + 2]) : (((-9223372036854775807 - 1) ? (arr_3 [i_1] [i_1]) : (arr_8 [0])))))) || ((((var_7 ^ 4837445267631845053) ? (~17978245846391899850) : var_6)))));
        }
    }
    var_24 = (var_15 - 1);
    var_25 = var_10;
    var_26 = (max(var_26, ((((((var_12 || (!0)))) != var_0)))));
    #pragma endscop
}
