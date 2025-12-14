/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [0] = ((((((((-503328181 ? 0 : 13321684879192590698))) ? 34533 : (arr_0 [i_0] [2])))) ? (((~(arr_1 [i_0])))) : (max((arr_1 [i_0 + 2]), (arr_0 [i_0 + 2] [i_0])))));
        var_14 = (max(var_14, (((((min(((var_2 << (((arr_0 [i_0] [i_0 - 1]) - 8881379721318835346)))), ((var_7 ? var_5 : 31002))))) ? (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 3]) : (-2147483647 - 1))) : 7)))));
        var_15 = 2147483647;
        var_16 += ((((((((var_2 ? var_10 : var_5))) ? ((((arr_0 [5] [1]) == (arr_1 [3])))) : var_2))) ? ((((min((arr_0 [i_0] [i_0 + 3]), (arr_1 [1])))) ? ((min(69, 0))) : (var_11 > 31003))) : var_2));
    }
    var_17 = (-(var_2 - var_7));
    #pragma endscop
}
