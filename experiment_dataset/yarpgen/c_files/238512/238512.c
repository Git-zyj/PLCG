/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_1 % (((var_18 ? var_6 : var_10))))));
    var_21 = (max(var_21, (((var_1 ? (min(var_1, var_8) : (max(-825941249, 1718354598))))))));
    var_22 = (((!var_8) < (max((!var_9), (max(var_2, 2576612690))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (max(((!(((1718354598 ? (arr_3 [i_0]) : 1718354605))))), (((((var_8 ? 1718354606 : 1))) && (var_1 || var_19)))));
        var_23 = (min(var_23, (((min(var_15, var_10))))));
        arr_5 [i_0] &= (~32767);
        arr_6 [2] = (((1718354598 - 0) ? (((((((arr_3 [i_0]) <= (arr_1 [i_0] [i_0])))) == (arr_2 [7])))) : ((((arr_2 [i_0]) || (((arr_3 [i_0]) == var_0)))))));
    }
    var_24 = ((-var_12 ? (((-196 + 2147483647) << (((2572779494 | var_19) - 4294967271)))) : var_3));
    #pragma endscop
}
