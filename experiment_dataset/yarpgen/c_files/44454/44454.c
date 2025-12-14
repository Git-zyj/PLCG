/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 ^= (((arr_1 [4]) ? ((~(arr_1 [1]))) : ((-(arr_1 [1])))));
        var_18 ^= (arr_0 [i_0]);
        arr_2 [4] |= ((var_3 ? (((((~var_5) || (!var_9))))) : ((~(arr_1 [2])))));
        arr_3 [i_0] [i_0] = (10284610821722229605 ^ 1757935094229722607);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_8;
        var_19 ^= 37541;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_20 = (((arr_4 [i_2 - 1]) ? (min(var_5, (arr_4 [i_2 - 1]))) : (arr_4 [i_2 - 1])));
        var_21 = (min(var_21, (((var_10 || (arr_4 [i_2 - 1]))))));
        arr_9 [i_2] [i_2] = (((((arr_4 [i_2 - 1]) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (arr_7 [i_2 - 1])))) ? ((((arr_4 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : (arr_8 [i_2 - 1] [i_2 - 1])))) : (((arr_7 [i_2 - 1]) ? var_12 : var_8)));
        var_22 = (max(var_22, (min(((~(arr_4 [i_2 - 1]))), ((((arr_5 [i_2 - 1]) == 16)))))));
        var_23 = (arr_5 [6]);
    }
    var_24 = var_8;
    var_25 = (max(var_25, ((((((var_14 * var_6) << (-61 + 124))) > var_8)))));
    #pragma endscop
}
