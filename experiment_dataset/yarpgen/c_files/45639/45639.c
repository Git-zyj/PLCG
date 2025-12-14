/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((((~var_7) ? ((((-127 - 1) ? -1 : -1839667086))) : ((-32755 ? var_8 : var_11))))) ? (max((((var_10 ? var_10 : var_10))), 14011908478842873060)) : var_10)))));
    var_14 = ((((((var_6 && -1802262134) ^ var_3))) ? var_3 : (var_4 && var_12)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = ((20784 ? ((+((1805714304 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))))) : (max(((-(arr_2 [i_0]))), ((-(arr_2 [i_0])))))));
        var_16 -= ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = (((((((arr_4 [i_1] [i_1]) ? -2039324585 : var_0)))) ? (arr_3 [i_1]) : (((((arr_4 [i_1] [i_1]) && var_3))))));
        arr_6 [i_1] = ((((((((arr_4 [i_1] [i_1]) + 2147483647)) >> ((((-2 ? var_2 : 18882)) - 88))))) + (arr_3 [i_1])));
        var_17 = arr_3 [i_1];
        var_18 &= (((arr_3 [i_1]) >> ((((2146435072 ? ((((arr_4 [i_1] [i_1]) ^ 127))) : (min((arr_3 [i_1]), (arr_4 [i_1] [i_1]))))) + 25254))));
    }
    #pragma endscop
}
