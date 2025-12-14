/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((((((min(var_9, var_2))) ? var_8 : (min(var_4, var_8))))) ? ((var_9 ? var_4 : (max(var_10, var_1)))) : ((((((var_2 ? var_4 : var_3))) ? var_3 : var_7)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [15] [1] = var_1;
        arr_3 [i_0] &= ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (((~(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 &= (max(((+(max((arr_1 [i_0]), (arr_4 [i_0] [i_1]))))), ((((max((arr_0 [i_0]), (arr_5 [15] [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_1]) : (!var_3)))));
            var_13 = ((((((var_10 ? var_7 : (arr_4 [5] [5]))))) / (max((((!(arr_0 [i_0])))), (arr_6 [i_0] [i_0] [i_0])))));
        }
        var_14 *= (arr_4 [i_0] [i_0]);
    }
    #pragma endscop
}
