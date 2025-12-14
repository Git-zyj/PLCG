/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!(((-58 ? -2388143590621077780 : -1314487655))))))));
    var_18 = (((((((87 ? -10 : 100)) / (max(var_6, var_6))))) >= (max(var_11, (((-777412361849335706 ? var_14 : var_7)))))));
    var_19 = min(-613892567, ((((((var_8 + 9223372036854775807) >> (var_11 - 2237792324435838731)))) ? (var_1 ^ 221208476) : ((max(var_4, var_13))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((-13 ? 2147483647 : 3))) ? (min(var_5, (arr_1 [i_0]))) : (-1 < 161)));
        var_20 = ((((max(var_9, (arr_1 [i_0])))) ? (max(-1635447901, -613892567)) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
