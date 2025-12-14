/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(32767, (((var_7 ^ var_14) * (var_1 < var_10)))));
    var_16 = (~var_3);

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((~(~1)))), (((arr_1 [i_0 - 1]) ? (((min(0, (arr_1 [9]))))) : (arr_0 [i_0 + 2] [i_0 + 2])))));
        arr_3 [2] &= ((((!(arr_0 [12] [i_0]))) ? (((((min(12, 253)))) % (~var_7))) : (arr_1 [i_0 - 1])));
        arr_4 [i_0] = (min(((!((min((arr_1 [i_0]), 19))))), (((arr_0 [i_0 + 3] [i_0 + 3]) >= (arr_0 [i_0 + 3] [i_0 + 3])))));
    }
    #pragma endscop
}
