/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (71 <= 190);

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_12 = (arr_1 [i_0] [i_0 + 2]);
        var_13 = ((((!(arr_1 [i_0 + 3] [i_0 - 4]))) ? (((19 < (arr_1 [i_0 + 2] [i_0])))) : ((-(arr_1 [i_0] [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 -= (((((65521 / var_10) * (((arr_3 [0]) * (arr_4 [i_1] [i_1]))))) / 19));
        var_15 ^= (arr_4 [i_1] [5]);
    }
    var_16 |= (max((((4294967295 == (var_7 && var_6)))), ((var_7 ? ((var_3 ? 3145945948 : var_1)) : (~var_3)))));
    #pragma endscop
}
