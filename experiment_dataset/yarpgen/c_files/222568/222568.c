/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_10 = (((max((arr_2 [i_0]), ((var_7 ? (arr_2 [i_0]) : (arr_2 [16]))))) > (min((arr_0 [i_1] [i_0]), 2077591158))));
            arr_4 [i_0] [i_0] [i_1] = (var_1 & ((((arr_0 [i_0] [i_0]) <= (arr_2 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [5] [5] [5] = max((((((var_8 ? (arr_5 [13]) : 2077591140))) ? (arr_6 [i_0] [i_2]) : 2077591173)), (((((arr_6 [i_2] [i_0]) ? var_6 : 2262282607)))));
            var_11 = var_8;
        }
        arr_8 [i_0] = (((((arr_3 [i_0]) ? ((max(-186563967, 2077591138))) : var_4)) & (((((((arr_6 [i_0] [i_0]) >= -2077591138)) || var_2))))));
    }
    var_12 = (((var_9 / var_1) * ((var_9 + (max(var_1, var_6))))));
    var_13 = var_1;
    var_14 = var_7;
    #pragma endscop
}
