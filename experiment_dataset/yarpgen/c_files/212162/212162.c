/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (!18446744073709551615);
        var_11 = ((min((18446744073709551615 > var_2), (arr_1 [i_0 - 2]))));
        arr_3 [6] = var_3;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_12 = (((arr_4 [1] [i_1]) % ((-8394695639883788647 ? 13 : 8394695639883788647))));
        var_13 += ((((((arr_4 [i_1] [i_1]) ? 56964 : (arr_4 [i_1] [i_1])))) ? ((max((arr_5 [i_1]), 1))) : ((~(arr_4 [i_1] [16])))));
    }
    #pragma endscop
}
