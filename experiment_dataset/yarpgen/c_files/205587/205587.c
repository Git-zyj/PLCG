/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((~((~(!var_11)))));
        var_19 -= ((-var_16 - (((var_2 <= (((var_10 <= (arr_1 [i_0])))))))));
        arr_5 [i_0] [13] = (((((~(arr_3 [i_0] [i_0])))) ? (((arr_3 [i_0] [4]) ? (arr_3 [i_0] [10]) : (arr_3 [i_0] [i_0]))) : ((var_11 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
    }
    var_20 = (((((!(!var_14)))) & ((~((max(var_14, var_12)))))));

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = 184;
            var_22 = (max(((((~-22258) != var_8))), ((1431075902 ^ (((max(96, -63))))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_23 = (((arr_15 [i_3] [i_3]) ? (((~(arr_14 [i_3])))) : ((var_8 - (min((arr_6 [i_3]), (arr_9 [i_1] [i_1])))))));
            var_24 = (min((max(((var_6 ? var_9 : (arr_13 [i_1]))), var_4)), (--33614)));
        }
        var_25 ^= (((max((arr_13 [i_1]), 0)) - var_7));
        var_26 &= (!-1);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = var_9;
        var_27 -= (arr_8 [i_4]);
    }
    #pragma endscop
}
