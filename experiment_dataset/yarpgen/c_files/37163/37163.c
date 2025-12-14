/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = arr_1 [i_0];

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_21 = (arr_2 [i_1]);
            var_22 = (min((((45 ? ((var_15 ? var_2 : 1)) : 4398046478336))), (arr_1 [i_0])));
            var_23 = (((-(arr_2 [i_0 - 2]))));
            arr_4 [i_0] = ((((arr_0 [i_0 - 3] [i_0]) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 + 2] [i_0]))));
        }
        var_24 = (max((min((((arr_2 [i_0 - 3]) | -24042)), var_0)), ((max((arr_3 [i_0]), 1)))));
        var_25 = (arr_2 [i_0]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_26 = (((((((max((arr_0 [i_2] [12]), (arr_3 [2])))) ? (var_0 + var_11) : (min(var_7, var_9))))) ? ((max((arr_6 [i_2]), ((var_6 ? (arr_7 [i_2]) : (arr_5 [i_2])))))) : var_13));
        var_27 -= ((((max(var_1, (arr_0 [4] [4])))) ? (((var_8 + (arr_5 [i_2])))) : (((((min(var_15, 24033)))) / var_7))));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_10 [i_3] &= ((~(max((arr_3 [i_3]), ((~(arr_3 [i_3])))))));
        arr_11 [i_3] [i_3] = (arr_1 [i_3]);
    }
    #pragma endscop
}
