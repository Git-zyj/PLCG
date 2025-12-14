/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((((arr_0 [i_0] [i_1]) ? 5291953121768066820 : (arr_0 [i_0] [i_1]))) >> ((((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))) - 90))));
                var_14 = ((!((!((max(var_11, var_1)))))));
            }
        }
    }
    var_15 = (((((var_1 ? ((var_1 ? 1325811795193523554 : var_1)) : (5291953121768066820 / -5291953121768066807)))) ? ((2246 ? ((max(168, -23782))) : (165 <= var_0))) : 1));
    var_16 = (((((~(((!(-2147483647 - 1))))))) ? ((((!(((9223372036854775807 ? var_6 : var_5))))))) : (max(var_11, (((var_13 ? var_0 : var_10)))))));
    #pragma endscop
}
