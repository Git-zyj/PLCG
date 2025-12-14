/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~(max(var_0, var_11))))) ? (((((var_6 ? var_12 : 2))) ? ((min(var_7, var_2))) : var_9)) : (((~(!var_13))))));
    var_15 -= var_11;
    var_16 += -var_3;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_17 = ((~((15521608188023726562 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_2 [1] [i_0] = (i_0 % 2 == 0) ? ((max((((~77) / ((max(1, 255))))), ((((max((arr_0 [i_0]), (arr_1 [i_0]))) == (((17423 >> (((arr_0 [i_0]) + 1768881444219207384))))))))))) : ((max((((~77) / ((max(1, 255))))), ((((max((arr_0 [i_0]), (arr_1 [i_0]))) == (((17423 >> (((((arr_0 [i_0]) + 1768881444219207384)) - 424935216178391615)))))))))));
        var_18 |= ((max((((arr_1 [1]) ? 213 : (arr_0 [6]))), (((arr_1 [0]) & 32)))) ^ ((((!(arr_0 [10]))))));
        var_19 = (((((((arr_0 [i_0]) == 1)) ? ((~(arr_0 [i_0]))) : (arr_1 [i_0])))) ? 63024 : (((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1)))))));
    }
    var_20 = ((var_1 ? ((((min(var_2, var_13)) * (!var_9)))) : (((var_1 == 1) ? var_5 : (18446744073709551600 == 1)))));
    #pragma endscop
}
