/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((((1 | 1) / (max(var_17, var_3))))), ((((min(var_12, 123))) ? (min(var_6, -7026952730304947153)) : (((var_3 ? 231 : var_4))))));
    var_21 = ((((~(~109))) & var_4));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [1] [6] = ((~(((arr_0 [i_0 - 2] [i_0 - 2]) ? var_18 : (arr_1 [i_0 - 3])))));
        arr_4 [i_0 - 3] [i_0 - 3] = ((((max((arr_0 [i_0] [3]), 228)) >> (((arr_2 [i_0 + 2]) - 1151942393)))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_22 = ((((((~(((!(arr_6 [i_1])))))) + 2147483647)) >> (592870202 - 592870174)));
            arr_9 [i_1] [1] [i_2 + 3] = ((~((((arr_1 [i_1 + 2]) || (arr_8 [i_1 - 3]))))));
        }
        var_23 = (((arr_8 [i_1 + 1]) ? (arr_0 [9] [10]) : (((-(arr_8 [i_1 + 3]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (arr_0 [1] [1]);
        var_24 = (min((min(((((arr_10 [19]) ? 592870202 : (arr_8 [i_3])))), (min((-9223372036854775807 - 1), (-9223372036854775807 - 1))))), (((max(var_17, (arr_1 [i_3])))))));
        var_25 = ((((min((((arr_0 [i_3] [i_3]) ^ (arr_11 [i_3]))), (arr_8 [i_3])))) ? ((2506692995 ? (~var_18) : ((((((arr_8 [15]) + 2147483647)) >> (((arr_0 [14] [i_3]) - 1365719939))))))) : (((((var_10 ? (arr_7 [i_3] [i_3] [i_3]) : (arr_2 [i_3])))) ? (((min(1, (arr_6 [i_3]))))) : (((arr_2 [6]) ? var_18 : 9881))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((((min((arr_7 [i_4] [i_4] [i_4]), (arr_8 [i_4])))) ^ ((((~(arr_7 [0] [14] [18]))) | 89))));
        var_26 = ((max(3702097069, ((max(1, -115))))));
    }
    #pragma endscop
}
