/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 = (((~var_3) || (arr_2 [i_0])));
            var_22 |= (((min(var_19, (arr_2 [4])))) ? (max((arr_1 [i_0] [0]), (arr_0 [i_1]))) : ((-(arr_0 [i_1]))));
            var_23 = (max(var_23, (((((((((~(arr_2 [14])))) ? (arr_0 [i_0]) : (!var_13)))) ? ((((arr_2 [12]) == var_2))) : (arr_2 [2]))))));
        }
        var_24 = var_11;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_25 = (((arr_6 [i_2]) - (arr_6 [i_2])));
        arr_7 [i_2] = (((arr_6 [i_2]) ? var_7 : (arr_4 [i_2])));
    }
    var_26 = var_5;
    var_27 = (max(var_11, ((((var_8 ? var_19 : var_18))))));
    var_28 |= var_4;
    #pragma endscop
}
