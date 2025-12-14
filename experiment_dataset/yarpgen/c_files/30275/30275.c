/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] |= (24435 | var_8);
        var_10 = (max((arr_1 [i_0]), (0 == 14060349353013064986)));
        arr_3 [i_0] [i_0] = ((~(1 || 3910247210081941662)));
        arr_4 [i_0] [14] |= (arr_0 [i_0]);
    }
    var_11 &= var_8;
    var_12 = ((var_7 ^ (((((127 << (62176 - 62164)))) + var_8))));
    var_13 = (var_5 - (((1 + ((max(139, 29801)))))));
    #pragma endscop
}
