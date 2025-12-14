/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_11 = ((((805306368 - (arr_1 [22])))));
        arr_2 [i_0] = ((((max((arr_1 [i_0]), ((var_10 | (arr_0 [i_0])))))) ? var_8 : ((((45001 ? (arr_0 [i_0 - 1]) : var_6)) << (((arr_0 [i_0 - 2]) - 4631))))));
        var_12 = ((((var_8 ? var_5 : 18323))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_13 = ((arr_4 [i_1]) ? (max((var_8 & 74817170), ((var_10 ? var_7 : var_4)))) : ((((!((max(18446744073709551615, var_3))))))));
        var_14 = ((~(arr_3 [i_1] [i_1])));
    }
    var_15 = (var_3 ^ var_6);
    #pragma endscop
}
