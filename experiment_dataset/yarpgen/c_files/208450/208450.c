/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(6338825073205340798, 1234335484)));
    var_20 = ((((var_16 & (var_9 & 391696050))) >> (((((max(var_1, var_14)))) + 91))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = (((~12107919000504210817) ? 61894 : (arr_1 [7] [7])));
        arr_2 [i_0 + 1] = var_11;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 -= ((((var_16 ? (arr_4 [i_1] [i_1] [i_0]) : (arr_0 [i_0]))) | (arr_0 [i_0 + 1])));
            arr_6 [14] [i_1] = ((((((arr_4 [i_1] [i_1] [12]) - var_11))) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_15));
            var_23 = ((((((arr_0 [i_0]) != (arr_1 [i_0 + 1] [i_1])))) > (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
            arr_7 [i_0] [i_1] [i_0] = var_16;
        }
    }
    #pragma endscop
}
